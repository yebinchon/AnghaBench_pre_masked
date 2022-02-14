
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr {scalar_t__ sa_data; } ;
struct net_device {int * dev_addr; int addr_len; } ;
struct ice_vsi {int netdev; struct ice_pf* back; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {int state; struct ice_hw hw; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ice_hw*,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ice_vsi*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (struct net_device*,char*,int *,...) ;
 struct ice_netdev_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*,int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4, void *VAR_5)
{
 struct ice_netdev_priv *VAR_6 = FUNC_8(VAR_4);
 struct ice_vsi *VAR_7 = VAR_6->vsi;
 struct ice_pf *VAR_8 = VAR_7->back;
 struct ice_hw *VAR_9 = &VAR_8->hw;
 struct sockaddr *VAR_10 = VAR_5;
 enum ice_status VAR_11;
 u8 VAR_12 = 0;
 int VAR_13 = 0;
 u8 *VAR_14;

 VAR_14 = (u8 *)VAR_10->sa_data;

 if (!FUNC_4(VAR_14))
  return -VAR_0;

 if (FUNC_0(VAR_4->dev_addr, VAR_14)) {
  FUNC_9(VAR_4, "already using mac %pM\n", VAR_14);
  return 0;
 }

 if (FUNC_10(VAR_3, VAR_8->state) ||
     FUNC_2(VAR_8->state)) {
  FUNC_7(VAR_4, "can't set mac %pM. device not ready\n",
      VAR_14);
  return -VAR_1;
 }
 VAR_11 = FUNC_3(VAR_7, VAR_4->dev_addr, 0);
 if (VAR_11) {
  VAR_13 = -VAR_0;
  goto err_update_filters;
 }

 VAR_11 = FUNC_3(VAR_7, VAR_14, 1);
 if (VAR_11) {
  VAR_13 = -VAR_0;
  goto err_update_filters;
 }

err_update_filters:
 if (VAR_13) {
  FUNC_7(VAR_4, "can't set MAC %pM. filter update failed\n",
      VAR_14);
  return VAR_13;
 }


 FUNC_5(VAR_4->dev_addr, VAR_14, VAR_4->addr_len);
 FUNC_6(VAR_7->netdev, "updated MAC address to %pM\n",
     VAR_4->dev_addr);


 VAR_12 = VAR_2;
 VAR_11 = FUNC_1(VAR_9, VAR_14, VAR_12, ((void*)0));
 if (VAR_11) {
  FUNC_7(VAR_4, "can't set MAC %pM. write to firmware failed error %d\n",
      VAR_14, VAR_11);
 }
 return 0;
}
