
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smsm_host {int ipc_bit; int ipc_offset; int ipc_regmap; } ;
struct qcom_smsm {TYPE_1__* dev; struct smsm_host* hosts; } ;
struct device_node {int dummy; } ;
typedef int key ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 struct device_node* FUNC_3 (struct device_node*,char*,int ) ;
 int FUNC_4 (struct device_node*,char*,int,int *) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;
 int FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct qcom_smsm *VAR_1, unsigned VAR_2)
{
 struct device_node *VAR_3;
 struct device_node *VAR_4 = VAR_1->dev->of_node;
 struct smsm_host *VAR_5 = &VAR_1->hosts[VAR_2];
 char VAR_6[16];
 int VAR_7;

 FUNC_5(VAR_6, sizeof(VAR_6), "qcom,ipc-%d", VAR_2);
 VAR_3 = FUNC_3(VAR_4, VAR_6, 0);
 if (!VAR_3)
  return 0;

 VAR_5->ipc_regmap = FUNC_6(VAR_3);
 if (FUNC_0(VAR_5->ipc_regmap))
  return FUNC_1(VAR_5->ipc_regmap);

 VAR_7 = FUNC_4(VAR_4, VAR_6, 1, &VAR_5->ipc_offset);
 if (VAR_7 < 0) {
  FUNC_2(VAR_1->dev, "no offset in %s\n", VAR_6);
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_6, 2, &VAR_5->ipc_bit);
 if (VAR_7 < 0) {
  FUNC_2(VAR_1->dev, "no bit in %s\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
