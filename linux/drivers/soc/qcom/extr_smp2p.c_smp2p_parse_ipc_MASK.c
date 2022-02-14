
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smp2p {int ipc_bit; int ipc_offset; int ipc_regmap; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct device_node* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char const*,int,int *) ;
 int FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct qcom_smp2p *VAR_2)
{
 struct device_node *VAR_3;
 struct device *VAR_4 = VAR_2->dev;
 const char *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_3(VAR_4->of_node, "qcom,ipc", 0);
 if (!VAR_3) {
  FUNC_2(VAR_4, "no qcom,ipc node\n");
  return -VAR_1;
 }

 VAR_2->ipc_regmap = FUNC_5(VAR_3);
 if (FUNC_0(VAR_2->ipc_regmap))
  return FUNC_1(VAR_2->ipc_regmap);

 VAR_5 = "qcom,ipc";
 VAR_6 = FUNC_4(VAR_4->of_node, VAR_5, 1, &VAR_2->ipc_offset);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4, "no offset in %s\n", VAR_5);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_4->of_node, VAR_5, 2, &VAR_2->ipc_bit);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4, "no bit in %s\n", VAR_5);
  return -VAR_0;
 }

 return 0;
}
