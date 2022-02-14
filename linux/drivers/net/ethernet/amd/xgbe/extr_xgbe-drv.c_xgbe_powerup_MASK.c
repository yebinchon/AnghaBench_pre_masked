
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {int (* powerup_rx ) (struct xgbe_prv_data*) ;int (* powerup_tx ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int lock; scalar_t__ power_down; struct xgbe_hw_if hw_if; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct net_device*,char*) ;
 struct xgbe_prv_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*,int ) ;
 int FUNC_11 (struct xgbe_prv_data*) ;

int FUNC_12(struct net_device *VAR_3, unsigned int VAR_4)
{
 struct xgbe_prv_data *VAR_5 = FUNC_2(VAR_3);
 struct xgbe_hw_if *VAR_6 = &VAR_5->hw_if;
 unsigned long VAR_7;

 FUNC_0("-->xgbe_powerup\n");

 if (!FUNC_4(VAR_3) ||
     (VAR_4 == VAR_2 && !VAR_5->power_down)) {
  FUNC_1(VAR_3, "Device is already powered up\n");
  FUNC_0("<--xgbe_powerup\n");
  return -VAR_0;
 }

 FUNC_6(&VAR_5->lock, VAR_7);

 VAR_5->power_down = 0;

 FUNC_10(VAR_5, 0);

 VAR_6->powerup_tx(VAR_5);
 VAR_6->powerup_rx(VAR_5);

 if (VAR_4 == VAR_1)
  FUNC_3(VAR_3);

 FUNC_5(VAR_3);

 FUNC_11(VAR_5);

 FUNC_7(&VAR_5->lock, VAR_7);

 FUNC_0("<--xgbe_powerup\n");

 return 0;
}
