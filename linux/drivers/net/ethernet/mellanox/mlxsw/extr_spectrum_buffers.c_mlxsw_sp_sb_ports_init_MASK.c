
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_sb_pr {int dummy; } ;
struct mlxsw_sp_sb_port {int dummy; } ;
struct mlxsw_sp {TYPE_2__* sb; TYPE_1__* sb_vals; int core; } ;
struct TYPE_4__ {struct mlxsw_sp_sb_pr* ports; struct mlxsw_sp_sb_pr* prs; } ;
struct TYPE_3__ {unsigned int pool_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct mlxsw_sp_sb_pr*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct mlxsw_sp_sb_pr*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_sb_pr*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_2)
{
 unsigned int VAR_3 = FUNC_2(VAR_2->core);
 struct mlxsw_sp_sb_pr *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_2->sb->ports = FUNC_0(VAR_3,
          sizeof(struct mlxsw_sp_sb_port),
          VAR_1);
 if (!VAR_2->sb->ports)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2->sb_vals->pool_count, sizeof(*VAR_4),
        VAR_1);
 if (!VAR_4) {
  VAR_6 = -VAR_0;
  goto err_alloc_prs;
 }
 VAR_2->sb->prs = VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = FUNC_4(VAR_2, &VAR_2->sb->ports[VAR_5]);
  if (VAR_6)
   goto err_sb_port_init;
 }

 return 0;

err_sb_port_init:
 for (VAR_5--; VAR_5 >= 0; VAR_5--)
  FUNC_3(&VAR_2->sb->ports[VAR_5]);
 FUNC_1(VAR_2->sb->prs);
err_alloc_prs:
 FUNC_1(VAR_2->sb->ports);
 return VAR_6;
}
