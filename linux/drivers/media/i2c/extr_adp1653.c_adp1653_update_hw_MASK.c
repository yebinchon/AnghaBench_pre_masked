
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct adp1653_flash {TYPE_4__* torch_intensity; TYPE_3__* flash_timeout; TYPE_2__* led_mode; TYPE_1__* indicator_intensity; int subdev; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_5__ {int val; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;



 int FUNC_3 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct adp1653_flash *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_4(&VAR_6->subdev);
 u8 VAR_8;
 u8 VAR_9 = 0;
 int VAR_10;

 VAR_8 = FUNC_1(
  VAR_6->indicator_intensity->val)
  << VAR_5;

 switch (VAR_6->led_mode->val) {
 case 129:
  break;
 case 130:

  VAR_9 = VAR_1;
  VAR_9 |= FUNC_2(VAR_6->flash_timeout->val)
     << VAR_2;
  break;
 case 128:

  VAR_8 |= FUNC_0(
   VAR_6->torch_intensity->val)
   << VAR_4;
  break;
 }

 VAR_10 = FUNC_3(VAR_7, VAR_3, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_7, VAR_0, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
