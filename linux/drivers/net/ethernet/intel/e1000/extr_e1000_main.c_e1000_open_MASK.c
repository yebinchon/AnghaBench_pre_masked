
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int status; } ;
struct e1000_hw {TYPE_1__ mng_cookie; } ;
struct e1000_adapter {int napi; int flags; int mng_vlan_id; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (struct e1000_adapter*) ;
 int FUNC_8 (struct e1000_adapter*) ;
 int FUNC_9 (struct e1000_adapter*) ;
 int FUNC_10 (struct e1000_adapter*) ;
 int FUNC_11 (struct e1000_adapter*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 struct e1000_adapter* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 scalar_t__ FUNC_17 (int ,int *) ;

int FUNC_18(struct net_device *VAR_8)
{
 struct e1000_adapter *VAR_9 = FUNC_14(VAR_8);
 struct e1000_hw *VAR_10 = &VAR_9->hw;
 int VAR_11;


 if (FUNC_17(VAR_7, &VAR_9->flags))
  return -VAR_4;

 FUNC_15(VAR_8);


 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11)
  goto err_setup_tx;


 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11)
  goto err_setup_rx;

 FUNC_6(VAR_9);

 VAR_9->mng_vlan_id = VAR_2;
 if ((VAR_10->mng_cookie.status &
     VAR_1)) {
  FUNC_11(VAR_9);
 }






 FUNC_1(VAR_9);

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11)
  goto err_req_irq;


 FUNC_0(VAR_6, &VAR_9->flags);

 FUNC_13(&VAR_9->napi);

 FUNC_4(VAR_9);

 FUNC_16(VAR_8);


 FUNC_12(VAR_5, VAR_0);

 return VAR_3;

err_req_irq:
 FUNC_5(VAR_9);
 FUNC_2(VAR_9);
err_setup_rx:
 FUNC_3(VAR_9);
err_setup_tx:
 FUNC_8(VAR_9);

 return VAR_11;
}
