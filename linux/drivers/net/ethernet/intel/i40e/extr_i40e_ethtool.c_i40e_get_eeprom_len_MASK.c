
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct i40e_netdev_priv {TYPE_2__* vsi; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_3__ mac; } ;
struct TYPE_5__ {TYPE_1__* back; } ;
struct TYPE_4__ {struct i40e_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct i40e_hw*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5)
{
 struct i40e_netdev_priv *VAR_6 = FUNC_1(VAR_5);
 struct i40e_hw *VAR_7 = &VAR_6->vsi->back->hw;
 u32 VAR_8;


 if (VAR_7->mac.type == VAR_3) {
  VAR_8 = 0x5B9FFF + 1;
  return VAR_8;
 }
 VAR_8 = (FUNC_2(VAR_7, VAR_0)
  & VAR_1)
  >> VAR_2;

 VAR_8 = (64 * 1024) * FUNC_0(VAR_8);
 return VAR_8;
}
