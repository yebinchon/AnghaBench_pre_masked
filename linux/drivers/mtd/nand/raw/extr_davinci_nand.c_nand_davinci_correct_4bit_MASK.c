
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct davinci_nand_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct davinci_nand_info*,int ) ;
 int FUNC_4 (struct davinci_nand_info*,int ,int) ;
 unsigned long VAR_9 ;
 int FUNC_5 (struct davinci_nand_info*,int*) ;
 int FUNC_6 (struct nand_chip*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 struct davinci_nand_info* FUNC_8 (int ) ;
 unsigned long FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_10, u_char *VAR_11,
         u_char *VAR_12, u_char *VAR_13)
{
 int VAR_14;
 struct davinci_nand_info *VAR_15 = FUNC_8(FUNC_6(VAR_10));
 unsigned short VAR_16[8];
 unsigned short *VAR_17;
 u32 VAR_18[4];
 u32 VAR_19;
 unsigned VAR_20, VAR_21;
 unsigned long VAR_22;




 if (FUNC_1(0x01 & (uintptr_t)VAR_12))
  return -VAR_1;
 VAR_17 = (unsigned short *)VAR_12;

 VAR_16[0] = (VAR_17[0] >> 0) & 0x3ff;
 VAR_16[1] = ((VAR_17[0] >> 10) & 0x3f) | ((VAR_17[1] << 6) & 0x3c0);
 VAR_16[2] = (VAR_17[1] >> 4) & 0x3ff;
 VAR_16[3] = ((VAR_17[1] >> 14) & 0x3) | ((VAR_17[2] << 2) & 0x3fc);
 VAR_16[4] = (VAR_17[2] >> 8) | ((VAR_17[3] << 8) & 0x300);
 VAR_16[5] = (VAR_17[3] >> 2) & 0x3ff;
 VAR_16[6] = ((VAR_17[3] >> 12) & 0xf) | ((VAR_17[4] << 4) & 0x3f0);
 VAR_16[7] = (VAR_17[4] >> 6) & 0x3ff;


 for (VAR_14 = 7; VAR_14 >= 0; VAR_14--)
  FUNC_4(VAR_15, VAR_4, VAR_16[VAR_14]);




 FUNC_3(VAR_15, VAR_3);
 FUNC_5(VAR_15, VAR_18);
 if (!(VAR_18[0] | VAR_18[1] | VAR_18[2] | VAR_18[3]))
  return 0;





 FUNC_3(VAR_15, VAR_5);





 FUNC_4(VAR_15, VAR_2,
   FUNC_3(VAR_15, VAR_2) | FUNC_0(13));
 VAR_22 = VAR_9 + FUNC_9(100);
 do {
  VAR_19 = (FUNC_3(VAR_15,
    VAR_3) >> 8) & 0x0f;
  FUNC_2();
 } while ((VAR_19 < 4) && FUNC_7(VAR_9, VAR_22));

 for (;;) {
  u32 VAR_23 = FUNC_3(VAR_15, VAR_3);

  switch ((VAR_23 >> 8) & 0x0f) {
  case 0:
   FUNC_3(VAR_15, VAR_7);
   return 0;
  case 1:
   FUNC_3(VAR_15, VAR_7);
   return -VAR_0;
  case 2:
  case 3:
   VAR_20 = 1 + ((VAR_23 >> 16) & 0x03);
   goto correct;
  default:
   FUNC_2();
   continue;
  }
 }

correct:

 for (VAR_14 = 0, VAR_21 = 0; VAR_14 < VAR_20; VAR_14++) {
  int VAR_24, VAR_25;

  if (VAR_14 > 1) {
   VAR_24 = FUNC_3(VAR_15,
      VAR_6);
   VAR_25 = FUNC_3(VAR_15,
      VAR_8);
  } else {
   VAR_24 = FUNC_3(VAR_15,
      VAR_5);
   VAR_25 = FUNC_3(VAR_15,
      VAR_7);
  }

  if (VAR_14 & 1) {
   VAR_24 >>= 16;
   VAR_25 >>= 16;
  }
  VAR_24 &= 0x3ff;
  VAR_24 = (512 + 7) - VAR_24;

  if (VAR_24 < 512) {
   VAR_11[VAR_24] ^= VAR_25;
   VAR_21++;
  }
 }

 return VAR_21;
}
