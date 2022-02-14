
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct qtnf_pcie_bus_priv {int shm_ipc_ep_in; } ;
struct qtnf_bus {int fw_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qtnf_pcie_bus_priv* FUNC_0 (struct qtnf_bus*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;

int FUNC_3(struct qtnf_bus *VAR_2, struct sk_buff *VAR_3)
{
 struct qtnf_pcie_bus_priv *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_4->shm_ipc_ep_in, VAR_3->data, VAR_3->len);

 if (VAR_5 == -VAR_0) {
  FUNC_1("EP firmware is dead\n");
  VAR_2->fw_state = VAR_1;
 }

 return VAR_5;
}
