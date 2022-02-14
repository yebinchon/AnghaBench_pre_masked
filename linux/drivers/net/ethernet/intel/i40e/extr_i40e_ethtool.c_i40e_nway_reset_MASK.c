
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int asq_last_status; } ;
struct TYPE_8__ {int link_info; } ;
struct TYPE_7__ {TYPE_4__ link_info; } ;
struct i40e_hw {TYPE_1__ aq; TYPE_3__ phy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct i40e_netdev_priv {TYPE_2__* vsi; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_6__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int,int *) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,scalar_t__) ;
 int FUNC_3 (struct net_device*,char*,int ,int ) ;
 struct i40e_netdev_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2)
{

 struct i40e_netdev_priv *VAR_3 = FUNC_4(VAR_2);
 struct i40e_pf *VAR_4 = VAR_3->vsi->back;
 struct i40e_hw *VAR_5 = &VAR_4->hw;
 bool VAR_6 = VAR_5->phy.link_info.link_info & VAR_1;
 i40e_status VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_5, VAR_6, ((void*)0));
 if (VAR_7) {
  FUNC_3(VAR_2, "link restart failed, err %s aq_err %s\n",
       FUNC_2(VAR_5, VAR_7),
       FUNC_1(VAR_5, VAR_5->aq.asq_last_status));
  return -VAR_0;
 }

 return 0;
}
