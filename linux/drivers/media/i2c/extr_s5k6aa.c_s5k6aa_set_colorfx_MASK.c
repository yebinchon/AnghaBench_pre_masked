
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int member_1; int id; int value; int member_0; } ;
struct s5k6aa {int sd; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct v4l2_control const*) ;
 int VAR_0 ;
 int VAR_1 ;






 int FUNC_1 (struct i2c_client*,int ,int ) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct s5k6aa *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(&VAR_2->sd);
 static const struct v4l2_control VAR_5[] = {
  { 131, 0 },
  { 133, 1 },
  { 132, 2 },
  { 130, 3 },
  { 128, 4 },
  { 129, 5 },
 };
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {
  if (VAR_5[VAR_6].id == VAR_3)
   return FUNC_1(VAR_4, VAR_1,
         VAR_5[VAR_6].value);
 }
 return -VAR_0;
}
