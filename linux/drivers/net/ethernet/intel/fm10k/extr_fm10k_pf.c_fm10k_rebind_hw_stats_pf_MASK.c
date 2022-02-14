
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fm10k_hw_stats {int q; int nodesc_drop; int loopback_drop; int vlan_drop; int xec; int um; int ca; int ur; int timeout; } ;
struct TYPE_2__ {int max_queues; } ;
struct fm10k_hw {TYPE_1__ mac; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fm10k_hw*,struct fm10k_hw_stats*) ;

__attribute__((used)) static void FUNC_3(struct fm10k_hw *VAR_0,
         struct fm10k_hw_stats *VAR_1)
{

 FUNC_0(&VAR_1->timeout);
 FUNC_0(&VAR_1->ur);
 FUNC_0(&VAR_1->ca);
 FUNC_0(&VAR_1->um);
 FUNC_0(&VAR_1->xec);
 FUNC_0(&VAR_1->vlan_drop);
 FUNC_0(&VAR_1->loopback_drop);
 FUNC_0(&VAR_1->nodesc_drop);


 FUNC_1(VAR_1->q, 0, VAR_0->mac.max_queues);


 FUNC_2(VAR_0, VAR_1);
}
