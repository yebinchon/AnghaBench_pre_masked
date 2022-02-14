
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
typedef size_t u16 ;
struct mlxsw_sp_sb_pool_des {int dir; int pool; } ;
struct mlxsw_sp_sb_pm {void* max_buff; void* min_buff; } ;
struct mlxsw_sp {int core; TYPE_1__* sb_vals; } ;
struct TYPE_2__ {struct mlxsw_sp_sb_pool_des* pool_dess; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ,int,void*,void*) ;
 int FUNC_2 (int ,int ,char*) ;
 struct mlxsw_sp_sb_pm* FUNC_3 (struct mlxsw_sp*,int ,size_t) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_2, u8 VAR_3,
    u16 VAR_4, u32 VAR_5, u32 VAR_6)
{
 const struct mlxsw_sp_sb_pool_des *VAR_7 =
  &VAR_2->sb_vals->pool_dess[VAR_4];
 char VAR_8[VAR_0];
 struct mlxsw_sp_sb_pm *VAR_9;
 int VAR_10;

 FUNC_1(VAR_8, VAR_3, VAR_7->pool, VAR_7->dir, 0,
       VAR_5, VAR_6);
 VAR_10 = FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4);
 VAR_9->min_buff = VAR_5;
 VAR_9->max_buff = VAR_6;
 return 0;
}
