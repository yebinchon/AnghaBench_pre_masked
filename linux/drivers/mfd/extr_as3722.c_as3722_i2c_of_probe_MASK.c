
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; int irq; } ;
struct device_node {int dummy; } ;
struct as3722 {int irq_flags; void* en_ac_ok_pwr_on; void* en_intern_i2c_pullup; void* en_intern_int_pullup; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 struct irq_data* FUNC_2 (int ) ;
 int FUNC_3 (struct irq_data*) ;
 void* FUNC_4 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1,
   struct as3722 *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 struct irq_data *VAR_4;

 if (!VAR_3) {
  FUNC_1(&VAR_1->dev, "Device Tree not found\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_2(VAR_1->irq);
 if (!VAR_4) {
  FUNC_1(&VAR_1->dev, "Invalid IRQ: %d\n", VAR_1->irq);
  return -VAR_0;
 }

 VAR_2->en_intern_int_pullup = FUNC_4(VAR_3,
     "ams,enable-internal-int-pullup");
 VAR_2->en_intern_i2c_pullup = FUNC_4(VAR_3,
     "ams,enable-internal-i2c-pullup");
 VAR_2->en_ac_ok_pwr_on = FUNC_4(VAR_3,
     "ams,enable-ac-ok-power-on");
 VAR_2->irq_flags = FUNC_3(VAR_4);
 FUNC_0(&VAR_1->dev, "IRQ flags are 0x%08lx\n", VAR_2->irq_flags);
 return 0;
}
