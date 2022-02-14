
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;
struct TYPE_2__ {int name; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct CHIPSTATE*,char*,int *) ;
 int FUNC_1 (struct CHIPSTATE*,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_1__* VAR_22 ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int ,size_t) ;

__attribute__((used)) static int FUNC_3(struct CHIPSTATE *VAR_23)
{
 struct v4l2_subdev *VAR_24 = &VAR_23->sd;

 FUNC_1(VAR_23, VAR_0, 0x00);
 FUNC_1(VAR_23, VAR_7, VAR_17);
 FUNC_1(VAR_23, VAR_9, (VAR_21) ? 0x03:0x02);
 if(VAR_20 == 0x11) {
  FUNC_1(VAR_23, VAR_6, 0x80);
 } else {
  FUNC_0(VAR_23,"tda9874_modelist",&VAR_22[VAR_19].cmd);
  FUNC_1(VAR_23, VAR_6, 0x00);
 }
 FUNC_1(VAR_23, VAR_3, 0x00);
 FUNC_1(VAR_23, VAR_4, 0x00);
 FUNC_1(VAR_23, VAR_10, VAR_18);
 FUNC_1(VAR_23, VAR_12, 0x00);



 FUNC_1(VAR_23, VAR_11, 0x14);
 FUNC_1(VAR_23, VAR_13, 0x50);

 if(VAR_20 == 0x11) {
  FUNC_1(VAR_23, VAR_1, 0xf9);
  FUNC_1(VAR_23, VAR_14, (VAR_21) ? 0x81:0x80);
  FUNC_1(VAR_23, VAR_2, 0x80);
  FUNC_1(VAR_23, VAR_8, (VAR_21) ? 0x82:0x80);
  FUNC_1(VAR_23, VAR_5, VAR_16);
 } else {
  FUNC_1(VAR_23, VAR_1, 0xfb);
  FUNC_1(VAR_23, VAR_14, (VAR_21) ? 0x81:0x80);
  FUNC_1(VAR_23, VAR_2, 0x00);
 }
 FUNC_2(1, VAR_15, VAR_24, "tda9874a_setup(): %s [0x%02X].\n",
  VAR_22[VAR_19].name,VAR_19);
 return 1;
}
