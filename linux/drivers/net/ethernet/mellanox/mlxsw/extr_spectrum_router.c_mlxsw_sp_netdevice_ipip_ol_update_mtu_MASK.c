
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_2__ {int mtu; } ;
struct mlxsw_sp_rif_ipip_lb {TYPE_1__ common; int ul_rif_id; int ul_vr_id; } ;
struct mlxsw_sp_ipip_entry {struct mlxsw_sp_rif_ipip_lb* ol_lb; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_ipip_entry* FUNC_0 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp_rif_ipip_lb*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_0,
       struct net_device *VAR_1)
{
 struct mlxsw_sp_ipip_entry *VAR_2;
 struct mlxsw_sp_rif_ipip_lb *VAR_3;
 int VAR_4 = 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_3 = VAR_2->ol_lb;
  VAR_4 = FUNC_1(VAR_3, VAR_3->ul_vr_id,
           VAR_3->ul_rif_id, 1);
  if (VAR_4)
   goto out;
  VAR_3->common.mtu = VAR_1->mtu;
 }

out:
 return VAR_4;
}
