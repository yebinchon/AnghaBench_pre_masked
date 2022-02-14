
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_stopped; int reclaim_tq; int sysctl_bar; } ;
struct qtnf_pcie_topaz_state {TYPE_1__ base; int txqueue_wake; } ;
struct qtnf_bus {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct qtnf_bus*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct qtnf_bus *VAR_1, struct net_device *VAR_2)
{
 struct qtnf_pcie_topaz_state *VAR_3 = (void *)FUNC_3(VAR_1);

 if (VAR_2) {
  FUNC_4(VAR_2);
  VAR_3->base.tx_stopped = 1;
 }

 FUNC_6(0x0, VAR_3->txqueue_wake);


 FUNC_2();


 FUNC_6(FUNC_0(VAR_0),
        FUNC_1(VAR_3->base.sysctl_bar));


 FUNC_5(&VAR_3->base.reclaim_tq);
}
