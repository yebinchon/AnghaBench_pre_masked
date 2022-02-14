
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct bt856 {int norm; } ;


 int VAR_0 ;
 int FUNC_0 (struct bt856*) ;
 int FUNC_1 (struct bt856*,int,int,int) ;
 int FUNC_2 (struct bt856*,int,int) ;
 scalar_t__ VAR_1 ;
 struct bt856* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,scalar_t__,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2, u32 VAR_3)
{
 struct bt856 *VAR_4 = FUNC_3(VAR_2);


 FUNC_4(1, VAR_1, VAR_2, "init\n");
 FUNC_2(VAR_4, 0xdc, 0x18);
 FUNC_2(VAR_4, 0xda, 0);
 FUNC_2(VAR_4, 0xde, 0);

 FUNC_1(VAR_4, 0xdc, 3, 1);

 FUNC_1(VAR_4, 0xdc, 4, 1);

 if (VAR_4->norm & VAR_0)
  FUNC_1(VAR_4, 0xdc, 2, 0);
 else
  FUNC_1(VAR_4, 0xdc, 2, 1);

 FUNC_1(VAR_4, 0xdc, 1, 1);
 FUNC_1(VAR_4, 0xde, 4, 0);
 FUNC_1(VAR_4, 0xde, 3, 1);
 if (VAR_1 != 0)
  FUNC_0(VAR_4);
 return 0;
}
