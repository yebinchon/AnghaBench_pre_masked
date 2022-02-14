
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int state; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (struct i40e_vsi*) ;
 int FUNC_2 (struct i40e_vsi*) ;
 int FUNC_3 (struct net_device*,char*,int,int) ;
 struct i40e_netdev_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6, int VAR_7)
{
 struct i40e_netdev_priv *VAR_8 = FUNC_4(VAR_6);
 struct i40e_vsi *VAR_9 = VAR_8->vsi;
 struct i40e_pf *VAR_10 = VAR_9->back;

 if (FUNC_0(VAR_9)) {
  int VAR_11 = VAR_7 + VAR_2 + VAR_1 + VAR_3;

  if (VAR_11 > FUNC_1(VAR_9))
   return -VAR_0;
 }

 FUNC_3(VAR_6, "changing MTU from %d to %d\n",
      VAR_6->mtu, VAR_7);
 VAR_6->mtu = VAR_7;
 if (FUNC_5(VAR_6))
  FUNC_2(VAR_9);
 FUNC_6(VAR_5, VAR_10->state);
 FUNC_6(VAR_4, VAR_10->state);
 return 0;
}
