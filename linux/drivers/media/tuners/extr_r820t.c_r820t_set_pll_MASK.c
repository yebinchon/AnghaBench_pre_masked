
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r820t_priv {int has_lock; TYPE_1__* cfg; } ;
typedef enum v4l2_tuner_type { ____Placeholder_v4l2_tuner_type } v4l2_tuner_type ;
typedef int data ;
struct TYPE_2__ {int xtal; scalar_t__ rafael_chip; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct r820t_priv*,int,int*,int) ;
 int FUNC_1 (struct r820t_priv*,int,int) ;
 int FUNC_2 (struct r820t_priv*,int,int,int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct r820t_priv *VAR_5, enum v4l2_tuner_type VAR_6,
    u32 VAR_7)
{
 u32 VAR_8;
 int VAR_9, VAR_10;
 unsigned VAR_11 = 10000;
 u32 VAR_12;
 u32 VAR_13 = 1770000;
 u32 VAR_14 = VAR_13 * 2;
 u32 VAR_15;
 u16 VAR_16 = 2;
 u16 VAR_17 = 0;
 u8 VAR_18 = 2;
 u8 VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 VAR_21 = 0;
 u8 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 u8 VAR_27[5];


 VAR_7 = VAR_7 / 1000;
 VAR_15 = VAR_5->cfg->xtal / 1000;
 VAR_9 = FUNC_2(VAR_5, 0x10, VAR_21, 0x10);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_2(VAR_5, 0x1a, 0x00, 0x0c);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_2(VAR_5, 0x12, 0x80, 0xe0);
 if (VAR_9 < 0)
  return VAR_9;


 while (VAR_18 <= 64) {
  if (((VAR_7 * VAR_18) >= VAR_13) &&
     ((VAR_7 * VAR_18) < VAR_14)) {
   VAR_19 = VAR_18;
   while (VAR_19 > 2) {
    VAR_19 = VAR_19 >> 1;
    VAR_20++;
   }
   break;
  }
  VAR_18 = VAR_18 << 1;
 }

 VAR_9 = FUNC_0(VAR_5, 0x00, VAR_27, sizeof(VAR_27));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_25 = (VAR_27[4] & 0x30) >> 4;

 FUNC_3("mix_div=%d div_num=%d vco_fine_tune=%d\n",
   VAR_18, VAR_20, VAR_25);





 if (VAR_5->cfg->rafael_chip != VAR_2) {
  if (VAR_25 > VAR_4)
   VAR_20 = VAR_20 - 1;
  else if (VAR_25 < VAR_4)
   VAR_20 = VAR_20 + 1;
 }

 VAR_9 = FUNC_2(VAR_5, 0x10, VAR_20 << 5, 0xe0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = VAR_7 * VAR_18;
 VAR_24 = VAR_8 / (2 * VAR_15);
 VAR_12 = VAR_8 - 2 * VAR_15 * VAR_24;


 if (VAR_12 < VAR_15 / 64) {
  VAR_12 = 0;
 } else if (VAR_12 > VAR_15 * 127 / 64) {
  VAR_12 = 0;
  VAR_24++;
 } else if ((VAR_12 > VAR_15 * 127 / 128) && (VAR_12 < VAR_15)) {
  VAR_12 = VAR_15 * 127 / 128;
 } else if ((VAR_12 > VAR_15) && (VAR_12 < VAR_15 * 129 / 128)) {
  VAR_12 = VAR_15 * 129 / 128;
 }

 VAR_22 = (VAR_24 - 13) / 4;
 VAR_23 = VAR_24 - 4 * VAR_22 - 13;

 VAR_9 = FUNC_1(VAR_5, 0x14, VAR_22 + (VAR_23 << 6));
 if (VAR_9 < 0)
  return VAR_9;


 if (!VAR_12)
  VAR_26 = 0x08;
 else
  VAR_26 = 0x00;

 VAR_9 = FUNC_2(VAR_5, 0x12, VAR_26, 0x08);
 if (VAR_9 < 0)
  return VAR_9;


 while (VAR_12 > 1) {
  if (VAR_12 > (2 * VAR_15 / VAR_16)) {
   VAR_17 = VAR_17 + 32768 / (VAR_16 / 2);
   VAR_12 = VAR_12 - 2 * VAR_15 / VAR_16;
   if (VAR_16 >= 0x8000)
    break;
  }
  VAR_16 = VAR_16 << 1;
 }

 FUNC_3("freq %d kHz, pll ref %d%s, sdm=0x%04x\n",
    VAR_7, VAR_15, VAR_21 ? " / 2" : "", VAR_17);

 VAR_9 = FUNC_1(VAR_5, 0x16, VAR_17 >> 8);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_5, 0x15, VAR_17 & 0xff);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  FUNC_4(VAR_11, VAR_11 + 1000);


  VAR_9 = FUNC_0(VAR_5, 0x00, VAR_27, 3);
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_27[2] & 0x40)
   break;

  if (!VAR_10) {

   VAR_9 = FUNC_2(VAR_5, 0x12, 0x60, 0xe0);
   if (VAR_9 < 0)
    return VAR_9;
  }
 }

 if (!(VAR_27[2] & 0x40)) {
  VAR_5->has_lock = 0;
  return 0;
 }

 VAR_5->has_lock = 1;
 FUNC_3("tuner has lock at frequency %d kHz\n", VAR_7);


 VAR_9 = FUNC_2(VAR_5, 0x1a, 0x08, 0x08);

 return VAR_9;
}
