
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int get_link_status; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbevf_adapter {int eims_other; struct ixgbe_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct ixgbevf_adapter *VAR_4 = VAR_3;
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;

 VAR_5->mac.get_link_status = 1;

 FUNC_1(VAR_4);

 FUNC_0(VAR_5, VAR_1, VAR_4->eims_other);

 return VAR_0;
}
