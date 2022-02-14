
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * dcbnl_ops; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_2)
{
 struct fm10k_intfc *VAR_3 = FUNC_0(VAR_2);
 struct fm10k_hw *VAR_4 = &VAR_3->hw;

 if (VAR_4->mac.type == VAR_1)
  VAR_2->dcbnl_ops = &VAR_0;
}
