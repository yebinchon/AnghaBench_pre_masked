
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct mlxsw_sp_rif {int fid; int rif_index; } ;
struct mlxsw_sp {int dummy; } ;
struct macvlan_dev {int lowerdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int ,int) ;
 struct mlxsw_sp_rif* FUNC_2 (struct mlxsw_sp*,int ) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int ,int) ;
 struct macvlan_dev* FUNC_4 (struct net_device const*) ;

void FUNC_5(struct mlxsw_sp *VAR_0,
         const struct net_device *VAR_1)
{
 struct macvlan_dev *VAR_2 = FUNC_4(VAR_1);
 struct mlxsw_sp_rif *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_2->lowerdev);



 if (!VAR_3)
  return;
 FUNC_3(VAR_0, VAR_3->rif_index, VAR_1->dev_addr,
        0);
 FUNC_1(VAR_0, VAR_1->dev_addr,
       FUNC_0(VAR_3->fid), 0);
}
