
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct bq24735_platform {int ext_control; void* input_current; void* charge_voltage; void* charge_current; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct bq24735_platform* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,void**) ;

__attribute__((used)) static struct bq24735_platform *FUNC_4(struct i2c_client *VAR_1)
{
 struct bq24735_platform *VAR_2;
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 u32 VAR_4;
 int VAR_5;

 VAR_2 = FUNC_1(&VAR_1->dev, sizeof(*VAR_2), VAR_0);
 if (!VAR_2) {
  FUNC_0(&VAR_1->dev,
   "Memory alloc for bq24735 pdata failed\n");
  return ((void*)0);
 }

 VAR_5 = FUNC_3(VAR_3, "ti,charge-current", &VAR_4);
 if (!VAR_5)
  VAR_2->charge_current = VAR_4;

 VAR_5 = FUNC_3(VAR_3, "ti,charge-voltage", &VAR_4);
 if (!VAR_5)
  VAR_2->charge_voltage = VAR_4;

 VAR_5 = FUNC_3(VAR_3, "ti,input-current", &VAR_4);
 if (!VAR_5)
  VAR_2->input_current = VAR_4;

 VAR_2->ext_control = FUNC_2(VAR_3, "ti,external-control");

 return VAR_2;
}
