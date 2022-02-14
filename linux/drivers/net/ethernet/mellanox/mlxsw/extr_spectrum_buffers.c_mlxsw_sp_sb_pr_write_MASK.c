
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct mlxsw_sp_sb_pr {int mode; int size; } ;
struct mlxsw_sp_sb_pool_des {int dir; int pool; } ;
struct mlxsw_sp {TYPE_1__* sb; int core; TYPE_2__* sb_vals; } ;
typedef enum mlxsw_reg_sbpr_mode { ____Placeholder_mlxsw_reg_sbpr_mode } mlxsw_reg_sbpr_mode ;
struct TYPE_4__ {struct mlxsw_sp_sb_pool_des* pool_dess; } ;
struct TYPE_3__ {int sb_size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mlxsw_sp*,int ) ;
 struct mlxsw_sp_sb_pr* FUNC_4 (struct mlxsw_sp*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_2, u16 VAR_3,
    enum mlxsw_reg_sbpr_mode VAR_4,
    u32 VAR_5, bool VAR_6)
{
 const struct mlxsw_sp_sb_pool_des *VAR_7 =
  &VAR_2->sb_vals->pool_dess[VAR_3];
 char VAR_8[VAR_0];
 struct mlxsw_sp_sb_pr *VAR_9;
 int VAR_10;

 FUNC_1(VAR_8, VAR_7->pool, VAR_7->dir, VAR_4,
       VAR_5, VAR_6);
 VAR_10 = FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_8);
 if (VAR_10)
  return VAR_10;

 if (VAR_6)
  VAR_5 = FUNC_3(VAR_2, VAR_2->sb->sb_size);
 VAR_9 = FUNC_4(VAR_2, VAR_3);
 VAR_9->mode = VAR_4;
 VAR_9->size = VAR_5;
 return 0;
}
