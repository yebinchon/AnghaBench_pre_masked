
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct palmas_platform_data {int mux_from_pdata; int power_ctrl; int pm_off; void* pad2; void* pad1; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {scalar_t__ irq; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,void**) ;
 int FUNC_2 (struct i2c_client*,struct palmas_platform_data*) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_3,
  struct palmas_platform_data *VAR_4)
{
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_1(VAR_5, "ti,mux-pad1", &VAR_7);
 if (!VAR_6) {
  VAR_4->mux_from_pdata = 1;
  VAR_4->pad1 = VAR_7;
 }

 VAR_6 = FUNC_1(VAR_5, "ti,mux-pad2", &VAR_7);
 if (!VAR_6) {
  VAR_4->mux_from_pdata = 1;
  VAR_4->pad2 = VAR_7;
 }


 VAR_6 = FUNC_1(VAR_5, "ti,power-ctrl", &VAR_7);
 if (!VAR_6)
  VAR_4->power_ctrl = VAR_7;
 else
  VAR_4->power_ctrl = VAR_2 |
     VAR_0 |
     VAR_1;
 if (VAR_3->irq)
  FUNC_2(VAR_3, VAR_4);

 VAR_4->pm_off = FUNC_0(VAR_5,
   "ti,system-power-controller");
}
