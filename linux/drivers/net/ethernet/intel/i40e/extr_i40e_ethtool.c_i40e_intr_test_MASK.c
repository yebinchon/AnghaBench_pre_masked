
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct i40e_pf {scalar_t__ sw_int_count; int hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_2__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct i40e_netdev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct i40e_pf*,int ,struct net_device*,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static u64 FUNC_4(struct net_device *VAR_7, u64 *VAR_8)
{
 struct i40e_netdev_priv *VAR_9 = FUNC_0(VAR_7);
 struct i40e_pf *VAR_10 = VAR_9->vsi->back;
 u16 VAR_11 = VAR_10->sw_int_count;

 FUNC_1(VAR_10, VAR_6, VAR_7, "interrupt test\n");
 FUNC_3(&VAR_10->hw, VAR_0,
      (VAR_1 |
       VAR_3 |
       VAR_2 |
       VAR_4 |
       VAR_5));
 FUNC_2(1000, 2000);
 *VAR_8 = (VAR_11 == VAR_10->sw_int_count);

 return *VAR_8;
}
