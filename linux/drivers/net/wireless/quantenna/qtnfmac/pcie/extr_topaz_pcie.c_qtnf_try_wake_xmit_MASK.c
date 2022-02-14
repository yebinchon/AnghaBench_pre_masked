
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysctl_bar; } ;
struct qtnf_pcie_topaz_state {TYPE_1__ base; int txqueue_wake; } ;
struct qtnf_bus {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct qtnf_pcie_topaz_state* FUNC_2 (struct qtnf_bus*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct qtnf_bus *VAR_1, struct net_device *VAR_2)
{
 struct qtnf_pcie_topaz_state *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_4(VAR_3->txqueue_wake);
 if (VAR_4) {
  FUNC_3(VAR_2);
 } else {

  FUNC_5(FUNC_0(VAR_0),
         FUNC_1(VAR_3->base.sysctl_bar));
 }
}
