
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct adp1653_flash {TYPE_1__* flash_intensity; TYPE_3__* led_mode; TYPE_2__* indicator_intensity; int subdev; } ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_4__ {int val; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct adp1653_flash *VAR_7, int VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_3(&VAR_7->subdev);
 u8 VAR_10 = FUNC_1(
  VAR_7->indicator_intensity->val)
  << VAR_2;
 int VAR_11;

 if (VAR_7->led_mode->val != VAR_6)
  return -VAR_5;

 if (!VAR_8)
  return FUNC_2(VAR_9, VAR_0,
       VAR_10);

 VAR_10 |= FUNC_0(
  VAR_7->flash_intensity->val)
  << VAR_1;
 VAR_11 = FUNC_2(VAR_9, VAR_0, VAR_10);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_2(VAR_9, VAR_3,
  VAR_4);
 if (VAR_11)
  return VAR_11;
 return FUNC_2(VAR_9, VAR_3, 0);
}
