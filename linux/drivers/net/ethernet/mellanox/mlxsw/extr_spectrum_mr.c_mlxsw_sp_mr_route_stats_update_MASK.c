
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mlxsw_sp_mr_route {scalar_t__ route_action; TYPE_4__* mfc; int route_priv; } ;
struct mlxsw_sp_mr {TYPE_1__* mr_ops; } ;
struct mlxsw_sp {struct mlxsw_sp_mr* mr; } ;
struct TYPE_6__ {scalar_t__ pkt; scalar_t__ bytes; int lastuse; } ;
struct TYPE_7__ {TYPE_2__ res; } ;
struct TYPE_8__ {TYPE_3__ mfc_un; } ;
struct TYPE_5__ {int (* route_stats ) (struct mlxsw_sp*,int ,scalar_t__*,scalar_t__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp *VAR_2,
        struct mlxsw_sp_mr_route *VAR_3)
{
 struct mlxsw_sp_mr *VAR_4 = VAR_2->mr;
 u64 VAR_5, VAR_6;

 if (VAR_3->route_action == VAR_0)
  return;

 VAR_4->mr_ops->route_stats(VAR_2, VAR_3->route_priv, &VAR_5,
    &VAR_6);

 if (VAR_3->mfc->mfc_un.res.pkt != VAR_5)
  VAR_3->mfc->mfc_un.res.lastuse = VAR_1;
 VAR_3->mfc->mfc_un.res.pkt = VAR_5;
 VAR_3->mfc->mfc_un.res.bytes = VAR_6;
}
