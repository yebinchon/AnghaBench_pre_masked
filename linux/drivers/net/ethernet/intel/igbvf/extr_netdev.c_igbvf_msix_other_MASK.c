
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int get_link_status; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igbvf_adapter {int eims_other; int watchdog_timer; int state; int int_counter1; struct e1000_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct igbvf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct igbvf_adapter *VAR_7 = FUNC_2(VAR_6);
 struct e1000_hw *VAR_8 = &VAR_7->hw;

 VAR_7->int_counter1++;

 VAR_8->mac.get_link_status = 1;
 if (!FUNC_3(VAR_2, &VAR_7->state))
  FUNC_1(&VAR_7->watchdog_timer, VAR_3 + 1);

 FUNC_0(VAR_0, VAR_7->eims_other);

 return VAR_1;
}
