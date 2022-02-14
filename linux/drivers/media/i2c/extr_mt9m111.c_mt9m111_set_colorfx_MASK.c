
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int member_1; int id; int value; int member_0; } ;
struct mt9m111 {int subdev; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct v4l2_control const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_1 (struct i2c_client*,int ,int ,int ) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mt9m111 *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(&VAR_3->subdev);
 static const struct v4l2_control VAR_6[] = {
  { 130, 0 },
  { 132, 1 },
  { 129, 2 },
  { 131, 3 },
  { 128, 4 },
 };
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6); VAR_7++) {
  if (VAR_6[VAR_7].id == VAR_4) {
   return FUNC_1(VAR_5, VAR_1,
      VAR_6[VAR_7].value,
      VAR_2);
  }
 }

 return -VAR_0;
}
