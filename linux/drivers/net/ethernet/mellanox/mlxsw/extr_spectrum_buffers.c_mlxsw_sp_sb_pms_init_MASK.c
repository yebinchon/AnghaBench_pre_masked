
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp_sb_pool_des {scalar_t__ dir; } ;
struct mlxsw_sp_sb_pm {int max_buff; int min_buff; } ;
struct mlxsw_sp {TYPE_1__* sb_vals; } ;
struct TYPE_2__ {int pool_count; struct mlxsw_sp_sb_pool_des* pool_dess; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp*,int) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_1, u8 VAR_2,
    const struct mlxsw_sp_sb_pm *VAR_3,
    bool VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1->sb_vals->pool_count; VAR_5++) {
  const struct mlxsw_sp_sb_pm *VAR_7 = &VAR_3[VAR_5];
  const struct mlxsw_sp_sb_pool_des *VAR_8;
  u32 VAR_9;
  u32 VAR_10;

  VAR_8 = &VAR_1->sb_vals->pool_dess[VAR_5];
  if (VAR_4 && VAR_8->dir == VAR_0)
   continue;

  VAR_10 = FUNC_0(VAR_1, VAR_7->min_buff);
  VAR_9 = VAR_7->max_buff;
  if (FUNC_2(VAR_1, VAR_5))
   VAR_9 = FUNC_0(VAR_1, VAR_9);
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_10,
        VAR_9);
  if (VAR_6)
   return VAR_6;
 }
 return 0;
}
