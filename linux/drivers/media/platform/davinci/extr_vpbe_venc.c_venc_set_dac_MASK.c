
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,struct v4l2_subdev*,char*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_5, u32 VAR_6)
{
 switch (VAR_6) {
 case 0:
  FUNC_0(VAR_4, 1, VAR_5, "Setting output to Composite\n");
  FUNC_1(VAR_5, VAR_3, 0);
  break;
 case 1:
  FUNC_0(VAR_4, 1, VAR_5, "Setting output to Component\n");
  FUNC_1(VAR_5, VAR_3, VAR_1);
  break;
 case 2:
  FUNC_0(VAR_4, 1, VAR_5, "Setting output to S-video\n");
  FUNC_1(VAR_5, VAR_3, VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
