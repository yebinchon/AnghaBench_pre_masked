
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reclaim_tq; } ;
struct qtnf_pcie_topaz_state {TYPE_1__ base; } ;
struct qtnf_bus {int dummy; } ;
struct net_device {int dummy; } ;


 struct qtnf_pcie_topaz_state* FUNC_0 (struct qtnf_bus*) ;
 int FUNC_1 (struct qtnf_bus*,struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct qtnf_bus *VAR_0, struct net_device *VAR_1)
{
 struct qtnf_pcie_topaz_state *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1);
 FUNC_2(&VAR_2->base.reclaim_tq);
}
