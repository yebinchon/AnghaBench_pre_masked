
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct i40e_vsi {int num_queue_pairs; struct i40e_pf* back; } ;
struct i40e_pf {int flags; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct ethtool_channels {int other_count; int max_other; int combined_count; int max_combined; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_vsi*) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
         struct ethtool_channels *VAR_2)
{
 struct i40e_netdev_priv *VAR_3 = FUNC_1(VAR_1);
 struct i40e_vsi *VAR_4 = VAR_3->vsi;
 struct i40e_pf *VAR_5 = VAR_4->back;


 VAR_2->max_combined = FUNC_0(VAR_4);


 VAR_2->other_count = (VAR_5->flags & VAR_0) ? 1 : 0;
 VAR_2->max_other = VAR_2->other_count;


 VAR_2->combined_count = VAR_4->num_queue_pairs;
}
