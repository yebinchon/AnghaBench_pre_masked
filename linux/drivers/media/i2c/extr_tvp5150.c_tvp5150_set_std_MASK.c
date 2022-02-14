
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dev; } ;
struct tvp5150 {int regmap; } ;


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
 int FUNC_0 (int ,int,int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct tvp5150* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_15, v4l2_std_id VAR_16)
{
 struct tvp5150 *VAR_17 = FUNC_2(VAR_15);
 int VAR_18 = 0;



 if (VAR_16 == VAR_2) {
  VAR_18 = VAR_8;
 } else if (VAR_16 == VAR_4) {
  VAR_18 = VAR_12;
 } else if (VAR_16 == VAR_5 || VAR_16 == VAR_6) {
  VAR_18 = VAR_11;
 } else {

  if (VAR_16 & VAR_1)
   VAR_18 = VAR_9;
  else if (VAR_16 & VAR_3)
   VAR_18 = VAR_10;
  else if (VAR_16 & VAR_7)
   VAR_18 = VAR_13;
 }

 FUNC_0(VAR_15->dev, 1, VAR_14, "Set video std register to %d.\n", VAR_18);
 FUNC_1(VAR_17->regmap, VAR_0, VAR_18);
 return 0;
}
