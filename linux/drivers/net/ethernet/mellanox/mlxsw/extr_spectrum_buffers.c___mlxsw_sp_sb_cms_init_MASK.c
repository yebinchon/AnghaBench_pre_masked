
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct mlxsw_sp_sb_vals {TYPE_1__* pool_dess; } ;
struct mlxsw_sp_sb_cm {size_t pool_index; scalar_t__ min_buff; scalar_t__ max_buff; } ;
struct mlxsw_sp {struct mlxsw_sp_sb_vals* sb_vals; } ;
typedef enum mlxsw_reg_sbxx_dir { ____Placeholder_mlxsw_reg_sbxx_dir } mlxsw_reg_sbxx_dir ;
struct TYPE_2__ {int dir; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp*,scalar_t__) ;
 int FUNC_2 (struct mlxsw_sp*,int ,int,scalar_t__,scalar_t__,int,size_t) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp*,size_t) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_2, u8 VAR_3,
      enum mlxsw_reg_sbxx_dir VAR_4,
      const struct mlxsw_sp_sb_cm *VAR_5,
      size_t VAR_6)
{
 const struct mlxsw_sp_sb_vals *VAR_7 = VAR_2->sb_vals;
 int VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  const struct mlxsw_sp_sb_cm *VAR_10;
  u32 VAR_11;
  u32 VAR_12;

  if (VAR_8 == 8 && VAR_4 == VAR_0)
   continue;
  VAR_10 = &VAR_5[VAR_8];
  if (FUNC_0(VAR_7->pool_dess[VAR_10->pool_index].dir != VAR_4))
   continue;

  VAR_11 = FUNC_1(VAR_2, VAR_10->min_buff);
  VAR_12 = VAR_10->max_buff;
  if (VAR_12 == VAR_1) {
   VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_8,
         VAR_11, 0,
         1, VAR_10->pool_index);
  } else {
   if (FUNC_3(VAR_2,
             VAR_10->pool_index))
    VAR_12 = FUNC_1(VAR_2,
        VAR_12);
   VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_8,
         VAR_11, VAR_12,
         0, VAR_10->pool_index);
  }
  if (VAR_9)
   return VAR_9;
 }
 return 0;
}
