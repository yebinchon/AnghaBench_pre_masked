
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {scalar_t__ host_ready; struct fm10k_hw hw; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct fm10k_intfc *VAR_1)
{
 struct fm10k_hw *VAR_2 = &VAR_1->hw;

 return (VAR_2->mac.type == VAR_0 || VAR_1->host_ready);
}
