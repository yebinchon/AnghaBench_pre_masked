
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; void* val; } ;
struct tw2804 {int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 void* FUNC_0 (struct i2c_client*,int ,int ) ;
 struct tw2804* FUNC_1 (struct v4l2_ctrl*) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_4)
{
 struct tw2804 *VAR_5 = FUNC_1(VAR_4);
 struct i2c_client *VAR_6 = FUNC_2(&VAR_5->sd);

 switch (VAR_4->id) {
 case 129:
  VAR_4->val = FUNC_0(VAR_6, VAR_2, 0);
  return 0;

 case 130:
  VAR_4->val = FUNC_0(VAR_6, VAR_1, 0);
  return 0;

 case 131:
  VAR_4->val = FUNC_0(VAR_6, VAR_0, 0);
  return 0;

 case 128:
  VAR_4->val = FUNC_0(VAR_6, VAR_3, 0);
  return 0;
 }
 return 0;
}
