
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_subdev_info {int sd; } ;
struct vpfe_device {int current_input; struct vpfe_config* cfg; TYPE_1__* current_subdev; } ;
struct vpfe_config {struct vpfe_subdev_info* sub_devs; int asd; } ;
struct i2c_client {scalar_t__ addr; TYPE_2__* adapter; } ;
struct TYPE_4__ {scalar_t__ nr; } ;
struct TYPE_3__ {int sd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct i2c_client* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vpfe_device *VAR_1,
        int *VAR_2)
{
 struct vpfe_config *VAR_3 = VAR_1->cfg;
 struct vpfe_subdev_info *VAR_4;
 struct i2c_client *VAR_5;
 struct i2c_client *VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_6 = FUNC_1(VAR_1->current_subdev->sd);
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1->cfg->asd); VAR_7++) {
  VAR_4 = &VAR_3->sub_devs[VAR_7];
  VAR_5 = FUNC_1(VAR_4->sd);
  if (VAR_5->addr == VAR_6->addr &&
      VAR_5->adapter->nr == VAR_6->adapter->nr) {
   if (VAR_1->current_input >= 1)
    return -1;
   *VAR_2 = VAR_8 + VAR_1->current_input;
   return 0;
  }
  VAR_8++;
 }
 return -VAR_0;
}
