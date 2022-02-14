
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int get_link_status; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igbvf_adapter {int tx_ring; TYPE_2__* rx_ring; int watchdog_timer; int state; struct e1000_hw hw; } ;
struct TYPE_5__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct igbvf_adapter*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct igbvf_adapter*) ;
 int FUNC_6 (struct igbvf_adapter*) ;
 int FUNC_7 (struct igbvf_adapter*) ;
 int FUNC_8 (struct igbvf_adapter*,TYPE_2__*) ;
 int FUNC_9 (struct igbvf_adapter*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int *) ;
 struct igbvf_adapter* FUNC_12 (struct net_device*) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_5)
{
 struct igbvf_adapter *VAR_6 = FUNC_12(VAR_5);
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 int VAR_8;


 if (FUNC_13(VAR_3, &VAR_6->state))
  return -VAR_0;


 VAR_8 = FUNC_9(VAR_6, VAR_6->tx_ring);
 if (VAR_8)
  goto err_setup_tx;


 VAR_8 = FUNC_8(VAR_6, VAR_6->rx_ring);
 if (VAR_8)
  goto err_setup_rx;






 FUNC_2(VAR_6);

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8)
  goto err_req_irq;


 FUNC_0(VAR_2, &VAR_6->state);

 FUNC_11(&VAR_6->rx_ring->napi);


 FUNC_1(VAR_1);

 FUNC_5(VAR_6);


 VAR_7->mac.get_link_status = 1;
 FUNC_10(&VAR_6->watchdog_timer, VAR_4 + 1);

 return 0;

err_req_irq:
 FUNC_3(VAR_6->rx_ring);
err_setup_rx:
 FUNC_4(VAR_6->tx_ring);
err_setup_tx:
 FUNC_7(VAR_6);

 return VAR_8;
}
