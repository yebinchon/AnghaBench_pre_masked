
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_1__* sb_vals; } ;
struct TYPE_2__ {int cms_egress_count; int cms_egress; int cms_ingress_count; int cms_ingress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp_port *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_2->mlxsw_sp;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3,
         VAR_2->local_port,
         VAR_1,
         VAR_3->sb_vals->cms_ingress,
         VAR_3->sb_vals->cms_ingress_count);
 if (VAR_4)
  return VAR_4;
 return FUNC_0(VAR_2->mlxsw_sp,
          VAR_2->local_port,
          VAR_0,
          VAR_3->sb_vals->cms_egress,
          VAR_3->sb_vals->cms_egress_count);
}
