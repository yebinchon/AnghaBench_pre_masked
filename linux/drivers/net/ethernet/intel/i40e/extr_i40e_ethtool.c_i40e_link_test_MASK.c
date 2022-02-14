
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct i40e_pf {int hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_2__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int*) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct i40e_pf*,int ,struct net_device*,char*) ;
 int FUNC_3 (struct i40e_pf*,int ,struct net_device*,char*) ;

__attribute__((used)) static u64 FUNC_4(struct net_device *VAR_2, u64 *VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_1(VAR_2);
 struct i40e_pf *VAR_5 = VAR_4->vsi->back;
 i40e_status VAR_6;
 bool VAR_7 = 0;

 FUNC_3(VAR_5, VAR_1, VAR_2, "link test\n");
 VAR_6 = FUNC_0(&VAR_5->hw, &VAR_7);
 if (VAR_6) {
  FUNC_2(VAR_5, VAR_0, VAR_2, "link query timed out, please retry test\n");
  *VAR_3 = 1;
  return *VAR_3;
 }

 if (VAR_7)
  *VAR_3 = 0;
 else
  *VAR_3 = 1;

 return *VAR_3;
}
