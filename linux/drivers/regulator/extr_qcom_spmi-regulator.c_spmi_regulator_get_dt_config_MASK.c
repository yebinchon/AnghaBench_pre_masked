
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_regulator_init_data {int vs_soft_start_strength; int pin_ctrl_hpm; int pin_ctrl_enable; } ;
struct spmi_regulator {int ocp_retry_delay_ms; int ocp_max_retries; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static void FUNC_1(struct spmi_regulator *VAR_3,
  struct device_node *VAR_4, struct spmi_regulator_init_data *VAR_5)
{




 VAR_5->pin_ctrl_enable = VAR_0;
 VAR_5->pin_ctrl_hpm = VAR_1;
 VAR_5->vs_soft_start_strength = VAR_2;


 FUNC_0(VAR_4, "qcom,ocp-max-retries",
  &VAR_3->ocp_max_retries);
 FUNC_0(VAR_4, "qcom,ocp-retry-delay",
  &VAR_3->ocp_retry_delay_ms);
 FUNC_0(VAR_4, "qcom,pin-ctrl-enable",
  &VAR_5->pin_ctrl_enable);
 FUNC_0(VAR_4, "qcom,pin-ctrl-hpm", &VAR_5->pin_ctrl_hpm);
 FUNC_0(VAR_4, "qcom,vs-soft-start-strength",
  &VAR_5->vs_soft_start_strength);
}
