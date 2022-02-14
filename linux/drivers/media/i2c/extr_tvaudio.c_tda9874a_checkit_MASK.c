
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct CHIPSTATE*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,int) ;
 int FUNC_2 (struct v4l2_subdev*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct CHIPSTATE *VAR_4)
{
 struct v4l2_subdev *VAR_5 = &VAR_4->sd;
 int VAR_6,VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_0);
 if (VAR_6 < 0)
  return 0;
 VAR_7 = FUNC_0(VAR_4, VAR_1);
 if (VAR_7 < 0)
  return 0;

 FUNC_1(1, VAR_2, VAR_5, "tda9874a_checkit(): DIC=0x%X, SIC=0x%X.\n", VAR_6, VAR_7);

 if((VAR_6 == 0x11)||(VAR_6 == 0x07)) {
  FUNC_2(VAR_5, "found tda9874%s.\n", (VAR_6 == 0x11) ? "a" : "h");
  VAR_3 = VAR_6;
  return 1;
 }
 return 0;
}
