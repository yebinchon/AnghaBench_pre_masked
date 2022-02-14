
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct mlxsw_sp_ipip_entry {struct net_device* ol_dev; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*) ;

void FUNC_2(struct mlxsw_sp *VAR_1,
           struct mlxsw_sp_ipip_entry *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->ol_dev;

 if (VAR_3->flags & VAR_0)
  FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_1, VAR_2);
}
