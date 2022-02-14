
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp_sb_pool_des {int pool; } ;
struct mlxsw_sp_sb_mm {size_t pool_index; int max_buff; int min_buff; } ;
struct mlxsw_sp {int core; TYPE_1__* sb_vals; } ;
struct TYPE_2__ {int mms_count; struct mlxsw_sp_sb_pool_des* pool_dess; struct mlxsw_sp_sb_mm* mms; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mlxsw_sp*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_2)
{
 char VAR_3[VAR_0];
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->sb_vals->mms_count; VAR_4++) {
  const struct mlxsw_sp_sb_pool_des *VAR_6;
  const struct mlxsw_sp_sb_mm *VAR_7;
  u32 VAR_8;

  VAR_7 = &VAR_2->sb_vals->mms[VAR_4];
  VAR_6 = &VAR_2->sb_vals->pool_dess[VAR_7->pool_index];



  VAR_8 = FUNC_3(VAR_2, VAR_7->min_buff);
  FUNC_1(VAR_3, VAR_4, VAR_8, VAR_7->max_buff,
        VAR_6->pool);
  VAR_5 = FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_3);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
