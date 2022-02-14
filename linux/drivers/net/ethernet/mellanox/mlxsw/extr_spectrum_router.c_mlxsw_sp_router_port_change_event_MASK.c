
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {scalar_t__ mtu; int dev_addr; } ;
struct mlxsw_sp_vr {int * mr_table; } ;
struct mlxsw_sp_rif {scalar_t__ mtu; size_t vr_id; int addr; int rif_index; int fid; struct net_device* dev; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {struct mlxsw_sp_vr* vrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct mlxsw_sp_rif*,scalar_t__) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int ,scalar_t__) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int ,int) ;
 int FUNC_5 (struct net_device*,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct mlxsw_sp *VAR_1,
      struct mlxsw_sp_rif *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 u16 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2->fid);

 VAR_5 = FUNC_4(VAR_1, VAR_2->addr, VAR_4, 0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2->rif_index, VAR_3->dev_addr,
    VAR_3->mtu);
 if (VAR_5)
  goto err_rif_edit;

 VAR_5 = FUNC_4(VAR_1, VAR_3->dev_addr, VAR_4, 1);
 if (VAR_5)
  goto err_rif_fdb_op;

 if (VAR_2->mtu != VAR_3->mtu) {
  struct mlxsw_sp_vr *VAR_6;
  int VAR_7;





  VAR_6 = &VAR_1->router->vrs[VAR_2->vr_id];
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   FUNC_2(VAR_6->mr_table[VAR_7],
         VAR_2, VAR_3->mtu);
 }

 FUNC_0(VAR_2->addr, VAR_3->dev_addr);
 VAR_2->mtu = VAR_3->mtu;

 FUNC_5(VAR_3, "Updated RIF=%d\n", VAR_2->rif_index);

 return 0;

err_rif_fdb_op:
 FUNC_3(VAR_1, VAR_2->rif_index, VAR_2->addr, VAR_2->mtu);
err_rif_edit:
 FUNC_4(VAR_1, VAR_2->addr, VAR_4, 1);
 return VAR_5;
}
