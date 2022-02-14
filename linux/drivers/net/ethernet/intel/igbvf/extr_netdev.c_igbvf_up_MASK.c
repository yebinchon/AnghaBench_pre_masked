
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int get_link_status; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igbvf_adapter {int watchdog_timer; scalar_t__ msix_entries; TYPE_2__* rx_ring; int state; struct e1000_hw hw; } ;
struct TYPE_4__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct igbvf_adapter*) ;
 int FUNC_3 (struct igbvf_adapter*) ;
 int FUNC_4 (struct igbvf_adapter*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct igbvf_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;


 FUNC_2(VAR_3);

 FUNC_0(VAR_1, &VAR_3->state);

 FUNC_6(&VAR_3->rx_ring->napi);
 if (VAR_3->msix_entries)
  FUNC_3(VAR_3);


 FUNC_1(VAR_0);
 FUNC_4(VAR_3);


 VAR_4->mac.get_link_status = 1;
 FUNC_5(&VAR_3->watchdog_timer, VAR_2 + 1);

 return 0;
}
