
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_regulator_init_data {int dummy; } ;
struct spmi_regulator {int logical_type; int ocp_irq; int ocp_work; scalar_t__ ocp_retry_delay_ms; scalar_t__ ocp_max_retries; } ;
struct regulator_desc {int dummy; } ;
struct regulator_config {struct device* dev; struct spmi_regulator* driver_data; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct device*,int,int ,int ,char*,struct spmi_regulator*) ;
 int FUNC_3 (struct spmi_regulator*,struct device_node*,struct spmi_regulator_init_data*) ;
 int FUNC_4 (struct spmi_regulator*,struct spmi_regulator_init_data*) ;
 int FUNC_5 (struct spmi_regulator*) ;
 int FUNC_6 (struct spmi_regulator*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct device_node *VAR_8,
       const struct regulator_desc *VAR_9,
       struct regulator_config *VAR_10)
{
 struct spmi_regulator_init_data VAR_11 = { };
 struct spmi_regulator *VAR_12 = VAR_10->driver_data;
 struct device *VAR_13 = VAR_10->dev;
 int VAR_14;

 FUNC_3(VAR_12, VAR_8, &VAR_11);

 if (!VAR_12->ocp_max_retries)
  VAR_12->ocp_max_retries = VAR_4;
 if (!VAR_12->ocp_retry_delay_ms)
  VAR_12->ocp_retry_delay_ms = VAR_5;

 VAR_14 = FUNC_4(VAR_12, &VAR_11);
 if (VAR_14) {
  FUNC_1(VAR_13, "common initialization failed, ret=%d\n", VAR_14);
  return VAR_14;
 }

 switch (VAR_12->logical_type) {
 case 133:
 case 128:
 case 129:
 case 130:
  VAR_14 = FUNC_5(VAR_12);
  if (VAR_14)
   return VAR_14;
  break;
 case 132:
  VAR_14 = FUNC_6(VAR_12,
      VAR_1);
  if (VAR_14)
   return VAR_14;
  break;
 case 131:
  VAR_14 = FUNC_6(VAR_12,
       VAR_2);
  if (VAR_14)
   return VAR_14;
  break;
 default:
  break;
 }

 if (VAR_12->logical_type != VAR_3)
  VAR_12->ocp_irq = 0;

 if (VAR_12->ocp_irq) {
  VAR_14 = FUNC_2(VAR_13, VAR_12->ocp_irq,
   VAR_6, VAR_0, "ocp",
   VAR_12);
  if (VAR_14 < 0) {
   FUNC_1(VAR_13, "failed to request irq %d, ret=%d\n",
    VAR_12->ocp_irq, VAR_14);
   return VAR_14;
  }

  FUNC_0(&VAR_12->ocp_work, VAR_7);
 }

 return 0;
}
