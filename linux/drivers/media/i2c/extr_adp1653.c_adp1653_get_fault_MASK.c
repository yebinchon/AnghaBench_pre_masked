
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct adp1653_flash {int fault; TYPE_1__* led_mode; int subdev; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adp1653_flash*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct adp1653_flash *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(&VAR_3->subdev);
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->fault |= VAR_5;

 if (!VAR_3->fault)
  return 0;


 VAR_6 = FUNC_2(VAR_4, VAR_1, 0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3->led_mode->val = VAR_2;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  return VAR_6;

 return VAR_3->fault;
}
