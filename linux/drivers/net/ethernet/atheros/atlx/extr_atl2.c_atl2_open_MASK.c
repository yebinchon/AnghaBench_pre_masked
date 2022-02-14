
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct atl2_adapter {int hw; int watchdog_timer; int flags; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct atl2_adapter*) ;
 int FUNC_3 (struct atl2_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct atl2_adapter*) ;
 int FUNC_6 (struct atl2_adapter*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct atl2_adapter*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct atl2_adapter*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct atl2_adapter*) ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (int *,int ) ;
 struct atl2_adapter* FUNC_14 (struct net_device*) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_8)
{
 struct atl2_adapter *VAR_9 = FUNC_14(VAR_8);
 int VAR_10;
 u32 VAR_11;


 if (FUNC_16(VAR_6, &VAR_9->flags))
  return -VAR_0;


 VAR_10 = FUNC_10(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(&VAR_9->hw);
 if (VAR_10) {
  VAR_10 = -VAR_1;
  goto err_init_hw;
 }


 FUNC_9(VAR_8);
 FUNC_12(VAR_9);

 FUNC_8(VAR_9);

 if (FUNC_2(VAR_9)) {
  VAR_10 = -VAR_1;
  goto err_config;
 }

 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10)
  goto err_req_irq;

 FUNC_11(VAR_5, &VAR_9->flags);

 FUNC_13(&VAR_9->watchdog_timer, FUNC_15(VAR_7 + 4*VAR_2));

 VAR_11 = FUNC_0(&VAR_9->hw, VAR_4);
 FUNC_1(&VAR_9->hw, VAR_4,
  VAR_11 | VAR_3);

 FUNC_5(VAR_9);

 return 0;

err_init_hw:
err_req_irq:
err_config:
 FUNC_3(VAR_9);
 FUNC_7(&VAR_9->hw);

 return VAR_10;
}
