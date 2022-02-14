
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;
typedef int audiocmd ;







 int FUNC_0 (struct CHIPSTATE*,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct CHIPSTATE *VAR_6, int VAR_7)
{
 struct v4l2_subdev *VAR_8 = &VAR_6->sd;
 int VAR_9 = 1;
 audiocmd *VAR_10 = ((void*)0);

 FUNC_1(1, VAR_0, VAR_8, "ta8874z_setaudmode(): mode: 0x%02x\n", VAR_7);

 switch(VAR_7){
 case 129:
  VAR_10 = &VAR_3;
  break;
 case 128:
  VAR_10 = &VAR_4;
  break;
 case 132:
  VAR_10 = &VAR_2;
  break;
 case 130:
  VAR_10 = &VAR_5;
  break;
 case 131:
  VAR_10 = &VAR_1;
  break;
 default:
  VAR_9 = 0;
 }

 if(VAR_9)
  FUNC_0(VAR_6, "TA8874Z", VAR_10);
}
