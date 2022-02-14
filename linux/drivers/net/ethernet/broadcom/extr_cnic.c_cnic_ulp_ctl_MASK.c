
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fcoe_capabilities {int dummy; } ;
struct TYPE_3__ {struct fcoe_capabilities fcoe_features; } ;
struct TYPE_4__ {int ulp_type; TYPE_1__ register_data; } ;
struct drv_ctl_info {int drv_state; TYPE_2__ data; int cmd; } ;
struct cnic_local {struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int (* drv_ctl ) (int ,struct drv_ctl_info*) ;} ;
struct cnic_dev {int netdev; int fcoe_cap; struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fcoe_capabilities*,int ,int) ;
 int FUNC_1 (struct drv_ctl_info*,int ,int) ;
 int FUNC_2 (int ,struct drv_ctl_info*) ;

__attribute__((used)) static void FUNC_3(struct cnic_dev *VAR_3, int VAR_4, bool VAR_5, int VAR_6)
{
 struct cnic_local *VAR_7 = VAR_3->cnic_priv;
 struct cnic_eth_dev *VAR_8 = VAR_7->ethdev;
 struct drv_ctl_info VAR_9;
 struct fcoe_capabilities *VAR_10 =
  &VAR_9.data.register_data.fcoe_features;

 FUNC_1(&VAR_9, 0, sizeof(struct drv_ctl_info));
 if (VAR_5) {
  VAR_9.cmd = VAR_1;
  if (VAR_4 == VAR_0 && VAR_3->fcoe_cap)
   FUNC_0(VAR_10, VAR_3->fcoe_cap, sizeof(*VAR_10));
 } else {
  VAR_9.cmd = VAR_2;
 }

 VAR_9.data.ulp_type = VAR_4;
 VAR_9.drv_state = VAR_6;
 VAR_8->drv_ctl(VAR_3->netdev, &VAR_9);
}
