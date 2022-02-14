
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct rc_dev {int dev; struct IR_i2c* priv; } ;
struct code_block {int* space; int* pulse; int* codes; void* carrier_space; void* carrier_pulse; } ;
struct IR_i2c {int duty_cycle; int carrier; } ;


 int FUNC_0 (int*) ;
 void* FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int*,int,int) ;
 scalar_t__ FUNC_7 (int*) ;
 int FUNC_8 (int*,int*,int) ;

__attribute__((used)) static int FUNC_9(struct rc_dev *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4, struct code_block *VAR_5)
{
 struct IR_i2c *VAR_6 = VAR_2->priv;
 int VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11, VAR_12 = 0;
 bool VAR_13;
 u8 VAR_14[174];

 VAR_5->carrier_pulse = FUNC_1(
   VAR_6->duty_cycle * VAR_1 / 1000, VAR_6->carrier);
 VAR_5->carrier_space = FUNC_1(
   (100 - VAR_6->duty_cycle) * VAR_1 / 1000, VAR_6->carrier);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_12 >= FUNC_0(VAR_14) - 1) {
   FUNC_5(&VAR_2->dev, "IR too long, cannot transmit\n");
   return -VAR_0;
  }





  if (VAR_3[VAR_8] > 142220)
   return -VAR_0;

  VAR_9 = FUNC_1((VAR_1 / 1000) * VAR_3[VAR_8], 40000);

  if (VAR_8 & 1) {
   VAR_11 = FUNC_6(VAR_5->space,
          FUNC_0(VAR_5->space), VAR_9);
   if (VAR_11 == -1) {
    FUNC_5(&VAR_2->dev, "Too many different lengths spaces, cannot transmit");
    return -VAR_0;
   }


   VAR_14[VAR_12++] = (VAR_10 << 4) | VAR_11;
  } else {
   VAR_10 = FUNC_6(VAR_5->pulse,
          FUNC_0(VAR_5->pulse), VAR_9);
   if (VAR_10 == -1) {
    FUNC_5(&VAR_2->dev, "Too many different lengths pulses, cannot transmit");
    return -VAR_0;
   }
  }
 }


 VAR_11 = 0;
 for (VAR_8 = 1; VAR_8 < FUNC_0(VAR_5->space); VAR_8++) {
  u16 VAR_15 = FUNC_7(&VAR_5->space[VAR_8]);

  if (FUNC_7(&VAR_5->space[VAR_11]) > VAR_15)
   VAR_11 = VAR_8;
 }

 VAR_14[VAR_12++] = (VAR_10 << 4) | VAR_11;

 FUNC_4(&VAR_2->dev, "generated %d codes\n", VAR_12);






 VAR_13 = 0;

 for (VAR_7 = VAR_12 / 3; VAR_7 >= 1; VAR_7--) {
  if (!FUNC_8(&VAR_14[VAR_12 - VAR_7 * 3], &VAR_14[VAR_12 - VAR_7 * 2], VAR_7) &&
      !FUNC_2(&VAR_14[VAR_12 - VAR_7], &VAR_14[VAR_12 - VAR_7 * 2], VAR_7)) {
   VAR_13 = 1;
   break;
  }
 }

 if (VAR_13) {

  int VAR_16 = VAR_12 - VAR_7 * 3;

  if (VAR_16 >= FUNC_0(VAR_5->codes) - 3 - VAR_7) {
   FUNC_5(&VAR_2->dev, "IR too long, cannot transmit\n");
   return -VAR_0;
  }

  FUNC_4(&VAR_2->dev, "found trailing %d repeat\n", VAR_7);
  FUNC_3(VAR_5->codes, VAR_14, VAR_16);
  VAR_5->codes[VAR_16] = 0x82;
  FUNC_3(VAR_5->codes + VAR_16 + 1, VAR_14 + VAR_16,
      VAR_7);
  VAR_12 = VAR_16 + 1 + VAR_7;
  VAR_5->codes[VAR_12++] = 0xc0;
 } else {
  if (VAR_12 >= FUNC_0(VAR_5->codes) - 3) {
   FUNC_5(&VAR_2->dev, "IR too long, cannot transmit\n");
   return -VAR_0;
  }

  FUNC_4(&VAR_2->dev, "found no trailing repeat\n");
  VAR_5->codes[0] = 0x82;
  FUNC_3(VAR_5->codes + 1, VAR_14, VAR_12);
  VAR_12++;
  VAR_5->codes[VAR_12++] = 0xc4;
 }

 while (VAR_12 < FUNC_0(VAR_5->codes))
  VAR_5->codes[VAR_12++] = 0x83;

 return 0;
}
