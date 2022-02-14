
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct bt856 {int norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bt856*) ;
 int FUNC_1 (struct bt856*,int,int,int) ;
 scalar_t__ VAR_3 ;
 struct bt856* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,scalar_t__,struct v4l2_subdev*,char*,unsigned long long) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4, v4l2_std_id VAR_5)
{
 struct bt856 *VAR_6 = FUNC_2(VAR_4);

 FUNC_3(1, VAR_3, VAR_4, "set norm %llx\n", (unsigned long long)VAR_5);

 if (VAR_5 & VAR_1) {
  FUNC_1(VAR_6, 0xdc, 2, 0);
 } else if (VAR_5 & VAR_2) {
  FUNC_1(VAR_6, 0xdc, 2, 1);
  FUNC_1(VAR_6, 0xda, 0, 0);

 } else {
  return -VAR_0;
 }
 VAR_6->norm = VAR_5;
 if (VAR_3 != 0)
  FUNC_0(VAR_6);
 return 0;
}
