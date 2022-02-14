
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef int u8 ;
typedef int u32 ;
struct r820t_priv {TYPE_1__* cfg; } ;
typedef enum v4l2_tuner_type { ____Placeholder_v4l2_tuner_type } v4l2_tuner_type ;
struct TYPE_2__ {scalar_t__ rafael_chip; scalar_t__ use_predetect; scalar_t__ use_diplexer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct r820t_priv*,int,int) ;
 int FUNC_2 (struct r820t_priv*,int,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct r820t_priv *VAR_5, u32 VAR_6,
        enum v4l2_tuner_type VAR_7,
        v4l2_std_id VAR_8,
        u32 VAR_9)
{
 int VAR_10;
 u8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u8 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 FUNC_3("adjusting tuner parameters for the standard\n");

 switch (VAR_9) {
 case 130:
  if ((VAR_6 == 506000000) || (VAR_6 == 666000000) ||
     (VAR_6 == 818000000)) {
   VAR_11 = 0x14;
   VAR_12 = 0xe5;
   VAR_13 = 0x28;
   VAR_14 = 0x20;
  } else {
   VAR_11 = 0x24;
   VAR_12 = 0xe5;
   VAR_13 = 0x38;
   VAR_14 = 0x30;
  }
  VAR_15 = 0x53;
  VAR_16 = 0x75;
  VAR_17 = 0x00;
  VAR_18 = 0x00;
  VAR_19 = 0x40;
  VAR_20 = 14;
  VAR_21 = 0x40;
  break;
 case 129:
  VAR_11 = 0x24;
  VAR_12 = 0xe5;
  VAR_15 = 0x53;
  VAR_16 = 0x75;
  VAR_17 = 0x00;
  VAR_18 = 0x00;
  VAR_19 = 0x40;
  VAR_20 = 14;
  VAR_13 = 0x38;
  VAR_14 = 0x30;
  VAR_21 = 0x40;
  break;
 case 128:
  VAR_11 = 0x24;
  VAR_12 = 0xe5;
  VAR_15 = 0x75;
  VAR_16 = 0x75;
  VAR_17 = 0x00;
  VAR_18 = 0x00;
  VAR_19 = 0x40;
  VAR_20 = 14;
  VAR_13 = 0x38;
  VAR_14 = 0x30;
  VAR_21 = 0x40;
  break;
 case 131:
  VAR_11 = 0x24;
  VAR_12 = 0xe5;
  VAR_15 = 0x62;
  VAR_16 = 0x75;
  VAR_17 = 0x60;
  VAR_18 = 0x00;
  VAR_19 = 0x40;
  VAR_20 = 14;
  VAR_13 = 0x38;
  VAR_14 = 0x30;
  VAR_21 = 0x40;
  break;
 default:
  VAR_11 = 0x24;
  VAR_12 = 0xe5;
  VAR_15 = 0x53;
  VAR_16 = 0x75;
  VAR_17 = 0x00;
  VAR_18 = 0x00;
  VAR_19 = 0x40;
  VAR_20 = 14;
  VAR_13 = 0x38;
  VAR_14 = 0x30;
  VAR_21 = 0x40;
  break;
 }

 if (VAR_5->cfg->use_diplexer &&
    ((VAR_5->cfg->rafael_chip == VAR_1) ||
    (VAR_5->cfg->rafael_chip == VAR_2) ||
    (VAR_5->cfg->rafael_chip == VAR_0))) {
  if (VAR_6 > VAR_3)
   VAR_17 = 0x00;
  else
   VAR_17 = 0x60;
  VAR_18 = 0x00;
 }


 if (VAR_5->cfg->use_predetect) {
  VAR_10 = FUNC_2(VAR_5, 0x06, VAR_19, 0x40);
  if (VAR_10 < 0)
   return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_5, 0x1d, VAR_12, 0xc7);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_2(VAR_5, 0x1c, VAR_11, 0xf8);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_5, 0x0d, VAR_15);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_5, 0x0e, VAR_16);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_2(VAR_5, 0x05, VAR_17, 0x60);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_2(VAR_5, 0x06, VAR_18, 0x08);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_5, 0x11, VAR_13, 0x38);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_2(VAR_5, 0x17, VAR_14, 0x30);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_2(VAR_5, 0x0a, VAR_21, 0x60);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_3("adjusting LNA parameters\n");
 if (VAR_7 != VAR_4) {

  VAR_10 = FUNC_2(VAR_5, 0x1d, 0, 0x38);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_10 = FUNC_2(VAR_5, 0x1c, 0, 0x04);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_10 = FUNC_2(VAR_5, 0x06, 0, 0x40);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_10 = FUNC_2(VAR_5, 0x1a, 0x30, 0x30);
  if (VAR_10 < 0)
   return VAR_10;

  FUNC_0(250);


  VAR_10 = FUNC_2(VAR_5, 0x1d, 0x18, 0x38);
  if (VAR_10 < 0)
   return VAR_10;






  VAR_10 = FUNC_2(VAR_5, 0x1c, VAR_11, 0x04);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_10 = FUNC_2(VAR_5, 0x1e, VAR_20, 0x1f);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_10 = FUNC_2(VAR_5, 0x1a, 0x20, 0x30);
  if (VAR_10 < 0)
   return VAR_10;
 } else {

  VAR_10 = FUNC_2(VAR_5, 0x06, 0, 0x40);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_10 = FUNC_2(VAR_5, 0x1d, VAR_12, 0x38);
  if (VAR_10 < 0)
   return VAR_10;






  VAR_10 = FUNC_2(VAR_5, 0x1c, VAR_11, 0x04);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_10 = FUNC_2(VAR_5, 0x1e, VAR_20, 0x1f);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_10 = FUNC_2(VAR_5, 0x1a, 0x00, 0x30);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_2(VAR_5, 0x10, 0x00, 0x04);
  if (VAR_10 < 0)
   return VAR_10;
 }
 return 0;
}
