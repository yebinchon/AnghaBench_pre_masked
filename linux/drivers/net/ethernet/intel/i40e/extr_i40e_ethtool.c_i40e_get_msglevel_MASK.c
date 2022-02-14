
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ debug_mask; } ;
struct i40e_pf {scalar_t__ msg_enable; TYPE_2__ hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_3__ {struct i40e_pf* back; } ;


 int FUNC_0 (struct net_device*,char*,scalar_t__) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_0)
{
 struct i40e_netdev_priv *VAR_1 = FUNC_1(VAR_0);
 struct i40e_pf *VAR_2 = VAR_1->vsi->back;
 u32 VAR_3 = VAR_2->hw.debug_mask;

 if (VAR_3)
  FUNC_0(VAR_0, "i40e debug_mask: 0x%08X\n", VAR_3);

 return VAR_2->msg_enable;
}
