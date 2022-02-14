
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtnf_wmac {int macid; struct qtnf_bus* bus; } ;
struct qtnf_vif {scalar_t__ cons_tx_timeout_cnt; int reset_work; int vifid; struct qtnf_wmac* mac; } ;
struct qtnf_bus {int workqueue; } ;
struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (struct qtnf_bus*,struct net_device*) ;
 struct qtnf_vif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2)
{
 struct qtnf_vif *VAR_3 = FUNC_4(VAR_2);
 struct qtnf_wmac *VAR_4;
 struct qtnf_bus *VAR_5;

 if (FUNC_6(!VAR_3 || !VAR_3->mac || !VAR_3->mac->bus))
  return;

 VAR_4 = VAR_3->mac;
 VAR_5 = VAR_4->bus;

 FUNC_2("VIF%u.%u: Tx timeout- %lu\n", VAR_4->macid, VAR_3->vifid, VAR_1);

 FUNC_3(VAR_5, VAR_2);
 VAR_2->stats.tx_errors++;

 if (++VAR_3->cons_tx_timeout_cnt > VAR_0) {
  FUNC_1("Tx timeout threshold exceeded !\n");
  FUNC_1("schedule interface %s reset !\n", FUNC_0(VAR_2));
  FUNC_5(VAR_5->workqueue, &VAR_3->reset_work);
 }
}
