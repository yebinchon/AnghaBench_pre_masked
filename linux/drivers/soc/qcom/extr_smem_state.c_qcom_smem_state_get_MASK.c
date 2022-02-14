
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smem_state {int dummy; } ;
struct of_phandle_args {int args_count; unsigned int* args; int np; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 struct qcom_smem_state* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct qcom_smem_state*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ) ;
 struct qcom_smem_state* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,int,struct of_phandle_args*) ;
 int FUNC_6 (int ,char*,char const*) ;

struct qcom_smem_state *FUNC_7(struct device *VAR_1,
         const char *VAR_2,
         unsigned *VAR_3)
{
 struct qcom_smem_state *VAR_4;
 struct of_phandle_args VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 if (VAR_2) {
  VAR_6 = FUNC_6(VAR_1->of_node,
       "qcom,smem-state-names",
       VAR_2);
  if (VAR_6 < 0) {
   FUNC_2(VAR_1, "missing qcom,smem-state-names\n");
   return FUNC_0(VAR_6);
  }
 }

 VAR_7 = FUNC_5(VAR_1->of_node,
      "qcom,smem-states",
      "#qcom,smem-state-cells",
      VAR_6,
      &VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_1, "failed to parse qcom,smem-states property\n");
  return FUNC_0(VAR_7);
 }

 if (VAR_5.args_count != 1) {
  FUNC_2(VAR_1, "invalid #qcom,smem-state-cells\n");
  return FUNC_0(-VAR_0);
 }

 VAR_4 = FUNC_4(VAR_5.np);
 if (FUNC_1(VAR_4))
  goto put;

 *VAR_3 = VAR_5.args[0];

put:
 FUNC_3(VAR_5.np);
 return VAR_4;
}
