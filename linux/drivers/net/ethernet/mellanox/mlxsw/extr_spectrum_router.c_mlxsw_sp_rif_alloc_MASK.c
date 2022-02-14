
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct net_device {int mtu; int dev_addr; } ;
struct mlxsw_sp_rif {void* rif_index; void* vr_id; struct net_device* dev; int mtu; int addr; int neigh_list; int nexthop_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 struct mlxsw_sp_rif* FUNC_2 (size_t,int ) ;

__attribute__((used)) static struct mlxsw_sp_rif *FUNC_3(size_t VAR_1, u16 VAR_2,
            u16 VAR_3,
            struct net_device *VAR_4)
{
 struct mlxsw_sp_rif *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->nexthop_list);
 FUNC_0(&VAR_5->neigh_list);
 if (VAR_4) {
  FUNC_1(VAR_5->addr, VAR_4->dev_addr);
  VAR_5->mtu = VAR_4->mtu;
  VAR_5->dev = VAR_4;
 }
 VAR_5->vr_id = VAR_3;
 VAR_5->rif_index = VAR_2;

 return VAR_5;
}
