
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fm10k_intfc {int num_rx_queues; int num_tx_queues; } ;


 int FUNC_0 (struct fm10k_intfc*) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int FUNC_6 (struct fm10k_intfc*) ;
 int FUNC_7 (struct fm10k_intfc*) ;
 struct fm10k_intfc* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int ) ;
 int FUNC_10 (struct net_device*,int ) ;
 int FUNC_11 (struct net_device*) ;

int FUNC_12(struct net_device *VAR_0)
{
 struct fm10k_intfc *VAR_1 = FUNC_8(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  goto err_setup_tx;


 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto err_setup_rx;


 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto err_req_irq;


 FUNC_4(VAR_1);


 VAR_2 = FUNC_10(VAR_0,
        VAR_1->num_tx_queues);
 if (VAR_2)
  goto err_set_queues;

 VAR_2 = FUNC_9(VAR_0,
        VAR_1->num_rx_queues);
 if (VAR_2)
  goto err_set_queues;

 FUNC_11(VAR_0);

 FUNC_7(VAR_1);

 return 0;

err_set_queues:
 FUNC_2(VAR_1);
err_req_irq:
 FUNC_0(VAR_1);
err_setup_rx:
 FUNC_1(VAR_1);
err_setup_tx:
 return VAR_2;
}
