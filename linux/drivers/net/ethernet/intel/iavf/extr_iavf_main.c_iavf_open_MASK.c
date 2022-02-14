
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_2__ mac; } ;
struct iavf_adapter {int flags; scalar_t__ state; int crit_section; int mac_vlan_list_lock; TYPE_3__ hw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iavf_adapter*,int ) ;
 int FUNC_3 (struct iavf_adapter*) ;
 int FUNC_4 (struct iavf_adapter*) ;
 int FUNC_5 (struct iavf_adapter*) ;
 int FUNC_6 (struct iavf_adapter*) ;
 int FUNC_7 (struct iavf_adapter*) ;
 int FUNC_8 (struct iavf_adapter*,int) ;
 int FUNC_9 (struct iavf_adapter*,int ) ;
 int FUNC_10 (struct iavf_adapter*) ;
 int FUNC_11 (struct iavf_adapter*) ;
 int FUNC_12 (struct iavf_adapter*) ;
 struct iavf_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int,int) ;

__attribute__((used)) static int FUNC_18(struct net_device *VAR_5)
{
 struct iavf_adapter *VAR_6 = FUNC_13(VAR_5);
 int VAR_7;

 if (VAR_6->flags & VAR_2) {
  FUNC_1(&VAR_6->pdev->dev, "Unable to open device due to PF driver failure.\n");
  return -VAR_1;
 }

 while (FUNC_16(VAR_4,
    &VAR_6->crit_section))
  FUNC_17(500, 1000);

 if (VAR_6->state != VAR_3) {
  VAR_7 = -VAR_0;
  goto err_unlock;
 }


 VAR_7 = FUNC_11(VAR_6);
 if (VAR_7)
  goto err_setup_tx;


 VAR_7 = FUNC_10(VAR_6);
 if (VAR_7)
  goto err_setup_rx;


 VAR_7 = FUNC_9(VAR_6, VAR_5->name);
 if (VAR_7)
  goto err_req_irq;

 FUNC_14(&VAR_6->mac_vlan_list_lock);

 FUNC_2(VAR_6, VAR_6->hw.mac.addr);

 FUNC_15(&VAR_6->mac_vlan_list_lock);

 FUNC_3(VAR_6);

 FUNC_12(VAR_6);

 FUNC_8(VAR_6, 1);

 FUNC_0(VAR_4, &VAR_6->crit_section);

 return 0;

err_req_irq:
 FUNC_4(VAR_6);
 FUNC_7(VAR_6);
err_setup_rx:
 FUNC_5(VAR_6);
err_setup_tx:
 FUNC_6(VAR_6);
err_unlock:
 FUNC_0(VAR_4, &VAR_6->crit_section);

 return VAR_7;
}
