
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct i40e_vsi {scalar_t__ type; int mac_filter_hash_lock; struct i40e_pf* back; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct TYPE_3__ {int addr; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ mac; } ;
struct i40e_pf {int state; struct i40e_hw hw; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i40e_vsi*,int ) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,int ,int ,int *) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_vsi*,int ) ;
 int FUNC_6 (struct i40e_pf*) ;
 int FUNC_7 (struct i40e_hw*,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*,char*,int ,...) ;
 struct i40e_netdev_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_5, void *VAR_6)
{
 struct i40e_netdev_priv *VAR_7 = FUNC_10(VAR_5);
 struct i40e_vsi *VAR_8 = VAR_7->vsi;
 struct i40e_pf *VAR_9 = VAR_8->back;
 struct i40e_hw *VAR_10 = &VAR_9->hw;
 struct sockaddr *VAR_11 = VAR_6;

 if (!FUNC_8(VAR_11->sa_data))
  return -VAR_0;

 if (FUNC_1(VAR_5->dev_addr, VAR_11->sa_data)) {
  FUNC_9(VAR_5, "already using mac address %pM\n",
       VAR_11->sa_data);
  return 0;
 }

 if (FUNC_13(VAR_3, VAR_9->state) ||
     FUNC_13(VAR_4, VAR_9->state))
  return -VAR_0;

 if (FUNC_1(VAR_10->mac.addr, VAR_11->sa_data))
  FUNC_9(VAR_5, "returning to hw mac address %pM\n",
       VAR_10->mac.addr);
 else
  FUNC_9(VAR_5, "set new mac address %pM\n", VAR_11->sa_data);







 FUNC_11(&VAR_8->mac_filter_hash_lock);
 FUNC_5(VAR_8, VAR_5->dev_addr);
 FUNC_0(VAR_5->dev_addr, VAR_11->sa_data);
 FUNC_2(VAR_8, VAR_5->dev_addr);
 FUNC_12(&VAR_8->mac_filter_hash_lock);

 if (VAR_8->type == VAR_2) {
  i40e_status VAR_12;

  VAR_12 = FUNC_3(VAR_10, VAR_1,
      VAR_11->sa_data, ((void*)0));
  if (VAR_12)
   FUNC_9(VAR_5, "Ignoring error from firmware on LAA update, status %s, AQ ret %s\n",
        FUNC_7(VAR_10, VAR_12),
        FUNC_4(VAR_10, VAR_10->aq.asq_last_status));
 }




 FUNC_6(VAR_9);
 return 0;
}
