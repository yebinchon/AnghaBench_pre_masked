
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ice_pf {scalar_t__ sw_int_count; int oicr_idx; int hw; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_2__ {struct ice_pf* back; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ice_netdev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static u64 FUNC_5(struct net_device *VAR_3)
{
 struct ice_netdev_priv *VAR_4 = FUNC_2(VAR_3);
 struct ice_pf *VAR_5 = VAR_4->vsi->back;
 u16 VAR_6 = VAR_5->sw_int_count;

 FUNC_1(VAR_3, "interrupt test\n");

 FUNC_4(&VAR_5->hw, FUNC_0(VAR_5->oicr_idx),
      VAR_2 |
      VAR_0 |
      VAR_1);

 FUNC_3(1000, 2000);
 return (VAR_6 == VAR_5->sw_int_count);
}
