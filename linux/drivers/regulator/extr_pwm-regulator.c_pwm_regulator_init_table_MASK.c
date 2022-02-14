
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pwm_voltages {int dummy; } ;
struct TYPE_4__ {unsigned int n_voltages; int * ops; } ;
struct pwm_regulator_data {int state; TYPE_1__ desc; struct pwm_voltages* duty_cycle_table; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 struct pwm_voltages* FUNC_1 (TYPE_2__*,unsigned int,int ) ;
 int FUNC_2 (struct device_node*,char*,unsigned int*) ;
 int FUNC_3 (struct device_node*,char*,int *,unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4,
        struct pwm_regulator_data *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 struct pwm_voltages *VAR_7;
 unsigned int VAR_8 = 0;
 int VAR_9;

 FUNC_2(VAR_6, "voltage-table", &VAR_8);

 if ((VAR_8 < sizeof(*VAR_7)) ||
     (VAR_8 % sizeof(*VAR_7))) {
  FUNC_0(&VAR_4->dev, "voltage-table length(%d) is invalid\n",
   VAR_8);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(&VAR_4->dev, VAR_8, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_6, "voltage-table",
      (u32 *)VAR_7,
      VAR_8 / sizeof(u32));
 if (VAR_9) {
  FUNC_0(&VAR_4->dev, "Failed to read voltage-table: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_5->state = -VAR_0;
 VAR_5->duty_cycle_table = VAR_7;
 VAR_5->desc.ops = &VAR_3;
 VAR_5->desc.n_voltages = VAR_8 / sizeof(*VAR_7);

 return 0;
}
