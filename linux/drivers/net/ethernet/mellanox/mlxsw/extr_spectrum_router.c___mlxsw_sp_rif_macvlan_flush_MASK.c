
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct mlxsw_sp_rif {int fid; int mlxsw_sp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, void *VAR_1)
{
 struct mlxsw_sp_rif *VAR_2 = VAR_1;

 if (!FUNC_2(VAR_0))
  return 0;

 return FUNC_1(VAR_2->mlxsw_sp, VAR_0->dev_addr,
       FUNC_0(VAR_2->fid), 0);
}
