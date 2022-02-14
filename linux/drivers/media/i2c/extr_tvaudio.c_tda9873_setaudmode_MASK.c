
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int* bytes; } ;
struct CHIPSTATE {TYPE_1__ shadow; struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_0 (struct CHIPSTATE*,int,int) ;
 int VAR_9 ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct CHIPSTATE *VAR_10, int VAR_11)
{
 struct v4l2_subdev *VAR_12 = &VAR_10->sd;
 int VAR_13 = VAR_10->shadow.bytes[VAR_2+1] & ~ VAR_6;


 if ((VAR_13 & VAR_0) != VAR_1) {
  FUNC_1(1, VAR_9, VAR_12,
    "tda9873_setaudmode(): external input\n");
  return;
 }

 FUNC_1(1, VAR_9, VAR_12,
   "tda9873_setaudmode(): chip->shadow.bytes[%d] = %d\n",
   VAR_2+1, VAR_10->shadow.bytes[VAR_2+1]);
 FUNC_1(1, VAR_9, VAR_12, "tda9873_setaudmode(): sw_data  = %d\n",
   VAR_13);

 switch (VAR_11) {
 case 129:
  VAR_13 |= VAR_7;
  break;
 case 128:
  VAR_13 |= VAR_8;
  break;
 case 132:
  VAR_13 |= VAR_3;
  break;
 case 130:
  VAR_13 |= VAR_5;
  break;
 case 131:
  VAR_13 |= VAR_4;
  break;
 default:
  return;
 }

 FUNC_0(VAR_10, VAR_2, VAR_13);
 FUNC_1(1, VAR_9, VAR_12,
  "tda9873_setaudmode(): req. mode %d; chip_write: %d\n",
  VAR_11, VAR_13);
}
