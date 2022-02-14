
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct mlxsw_sp_sb_pr {scalar_t__ mode; int size; } ;
struct mlxsw_sp {TYPE_1__* sb; TYPE_2__* sb_vals; } ;
struct mlxsw_core {int dummy; } ;
struct devlink_sb_pool_info {int pool_type; int threshold_type; int cell_size; int size; } ;
typedef enum mlxsw_reg_sbxx_dir { ____Placeholder_mlxsw_reg_sbxx_dir } mlxsw_reg_sbxx_dir ;
typedef enum devlink_sb_threshold_type { ____Placeholder_devlink_sb_threshold_type } devlink_sb_threshold_type ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;
struct TYPE_6__ {int dir; } ;
struct TYPE_5__ {TYPE_3__* pool_dess; } ;
struct TYPE_4__ {int cell_size; } ;


 struct mlxsw_sp* FUNC_0 (struct mlxsw_core*) ;
 int FUNC_1 (struct mlxsw_sp*,int ) ;
 struct mlxsw_sp_sb_pr* FUNC_2 (struct mlxsw_sp*,size_t) ;

int FUNC_3(struct mlxsw_core *VAR_0,
    unsigned int VAR_1, u16 VAR_2,
    struct devlink_sb_pool_info *VAR_3)
{
 struct mlxsw_sp *VAR_4 = FUNC_0(VAR_0);
 enum mlxsw_reg_sbxx_dir VAR_5;
 struct mlxsw_sp_sb_pr *VAR_6;

 VAR_5 = VAR_4->sb_vals->pool_dess[VAR_2].dir;
 VAR_6 = FUNC_2(VAR_4, VAR_2);
 VAR_3->pool_type = (enum devlink_sb_pool_type) VAR_5;
 VAR_3->size = FUNC_1(VAR_4, VAR_6->size);
 VAR_3->threshold_type = (enum devlink_sb_threshold_type) VAR_6->mode;
 VAR_3->cell_size = VAR_4->sb->cell_size;
 return 0;
}
