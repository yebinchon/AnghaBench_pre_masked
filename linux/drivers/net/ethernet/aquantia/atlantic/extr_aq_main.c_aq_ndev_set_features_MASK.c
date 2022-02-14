
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct aq_nic_s {int aq_hw; TYPE_3__* aq_hw_ops; TYPE_2__* ndev; } ;
struct aq_nic_cfg_s {int features; int is_lro; int is_vlan_rx_strip; int is_vlan_tx_insert; TYPE_1__* aq_hw_caps; } ;
typedef int netdev_features_t ;
struct TYPE_6__ {int (* hw_set_offload ) (int ,struct aq_nic_cfg_s*) ;} ;
struct TYPE_5__ {int features; } ;
struct TYPE_4__ {int hw_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct aq_nic_cfg_s* FUNC_4 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,struct aq_nic_cfg_s*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6,
    netdev_features_t VAR_7)
{
 bool VAR_8 = !!(VAR_7 & VAR_1);
 bool VAR_9 = !!(VAR_7 & VAR_2);
 struct aq_nic_s *VAR_10 = FUNC_5(VAR_6);
 bool VAR_11 = 0;
 struct aq_nic_cfg_s *VAR_12;
 bool VAR_13 = 0;
 int VAR_14 = 0;

 VAR_12 = FUNC_4(VAR_10);

 if (!(VAR_7 & VAR_4)) {
  if (VAR_10->ndev->features & VAR_4) {
   VAR_14 = FUNC_0(VAR_10);
   if (FUNC_8(VAR_14))
    goto err_exit;
  }
 }
 if (!(VAR_7 & VAR_0)) {
  if (VAR_10->ndev->features & VAR_0) {
   VAR_14 = FUNC_1(VAR_10);
   if (FUNC_8(VAR_14))
    goto err_exit;
  }
 }

 VAR_12->features = VAR_7;

 if (VAR_12->aq_hw_caps->hw_features & VAR_3) {
  VAR_13 = VAR_7 & VAR_3;

  if (VAR_12->is_lro != VAR_13) {
   VAR_12->is_lro = VAR_13;
   VAR_11 = 1;
  }
 }

 if ((VAR_10->ndev->features ^ VAR_7) & VAR_5) {
  VAR_14 = VAR_10->aq_hw_ops->hw_set_offload(VAR_10->aq_hw,
       VAR_12);

  if (FUNC_8(VAR_14))
   goto err_exit;
 }

 if (VAR_12->is_vlan_rx_strip != VAR_8) {
  VAR_12->is_vlan_rx_strip = VAR_8;
  VAR_11 = 1;
 }
 if (VAR_12->is_vlan_tx_insert != VAR_9) {
  VAR_12->is_vlan_tx_insert = VAR_9;
  VAR_11 = 1;
 }

 if (VAR_11 && FUNC_6(VAR_6)) {
  FUNC_2(VAR_6);
  FUNC_3(VAR_6);
 }

err_exit:
 return VAR_14;
}
