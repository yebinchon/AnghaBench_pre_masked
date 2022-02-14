
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_regs {int version; } ;
struct TYPE_4__ {scalar_t__ offset; unsigned int elements; unsigned int stride; } ;
struct TYPE_3__ {struct i40e_pf* back; } ;


 TYPE_2__* VAR_0 ;
 struct i40e_netdev_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, struct ethtool_regs *VAR_2,
     void *VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_0(VAR_1);
 struct i40e_pf *VAR_5 = VAR_4->vsi->back;
 struct i40e_hw *VAR_6 = &VAR_5->hw;
 u32 *VAR_7 = VAR_3;
 unsigned int VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 VAR_2->version = 1;


 VAR_10 = 0;
 for (VAR_8 = 0; VAR_0[VAR_8].offset != 0; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_0[VAR_8].elements; VAR_9++) {
   VAR_11 = VAR_0[VAR_8].offset
    + (VAR_9 * VAR_0[VAR_8].stride);
   VAR_7[VAR_10++] = FUNC_1(VAR_6, VAR_11);
  }
 }

}
