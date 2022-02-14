
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_nexthop {struct mlxsw_sp_ipip_entry* ipip_entry; TYPE_1__* nh_grp; } ;
struct mlxsw_sp_ipip_entry {TYPE_2__* ol_lb; int ol_dev; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_4__ {int common; } ;
struct TYPE_3__ {int gateway; } ;


 int FUNC_0 (struct mlxsw_sp_nexthop*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp_nexthop*,int *) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_0,
           struct mlxsw_sp_nexthop *VAR_1,
           struct mlxsw_sp_ipip_entry *VAR_2)
{
 bool VAR_3;

 if (!VAR_1->nh_grp->gateway || VAR_1->ipip_entry)
  return;

 VAR_1->ipip_entry = VAR_2;
 VAR_3 = !FUNC_1(VAR_2->ol_dev);
 FUNC_0(VAR_1, VAR_3);
 FUNC_2(VAR_1, &VAR_2->ol_lb->common);
}
