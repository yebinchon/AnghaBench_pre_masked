
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct bt856 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bt856*) ;
 int FUNC_1 (struct bt856*,int,int,int) ;
 scalar_t__ VAR_1 ;
 struct bt856* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,scalar_t__,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
      u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct bt856 *VAR_6 = FUNC_2(VAR_2);

 FUNC_3(1, VAR_1, VAR_2, "set input %d\n", VAR_3);




 switch (VAR_3) {
 case 0:
  FUNC_1(VAR_6, 0xde, 4, 0);
  FUNC_1(VAR_6, 0xde, 3, 1);
  FUNC_1(VAR_6, 0xdc, 3, 1);
  FUNC_1(VAR_6, 0xdc, 6, 0);
  break;
 case 1:
  FUNC_1(VAR_6, 0xde, 4, 0);
  FUNC_1(VAR_6, 0xde, 3, 1);
  FUNC_1(VAR_6, 0xdc, 3, 1);
  FUNC_1(VAR_6, 0xdc, 6, 1);
  break;
 case 2:
  FUNC_1(VAR_6, 0xdc, 3, 0);
  FUNC_1(VAR_6, 0xde, 4, 1);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_1 != 0)
  FUNC_0(VAR_6);
 return 0;
}
