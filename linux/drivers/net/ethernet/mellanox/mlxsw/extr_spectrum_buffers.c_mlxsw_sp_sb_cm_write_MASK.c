
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
typedef size_t u16 ;
struct mlxsw_sp_sb_pool_des {int dir; int pool; } ;
struct mlxsw_sp_sb_cm {size_t pool_index; void* max_buff; void* min_buff; } ;
struct mlxsw_sp {TYPE_2__* sb; int core; TYPE_1__* sb_vals; } ;
struct TYPE_4__ {int sb_size; } ;
struct TYPE_3__ {struct mlxsw_sp_sb_pool_des* pool_dess; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ,void*,void*,int,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 void* FUNC_3 (struct mlxsw_sp*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct mlxsw_sp_sb_cm* FUNC_5 (struct mlxsw_sp*,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp *VAR_2, u8 VAR_3,
    u8 VAR_4, u32 VAR_5, u32 VAR_6,
    bool VAR_7, u16 VAR_8)
{
 const struct mlxsw_sp_sb_pool_des *VAR_9 =
  &VAR_2->sb_vals->pool_dess[VAR_8];
 char VAR_10[VAR_0];
 struct mlxsw_sp_sb_cm *VAR_11;
 int VAR_12;

 FUNC_1(VAR_10, VAR_3, VAR_4, VAR_9->dir,
       VAR_5, VAR_6, VAR_7, VAR_9->pool);
 VAR_12 = FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_10);
 if (VAR_12)
  return VAR_12;

 if (FUNC_4(VAR_4, VAR_9->dir)) {
  if (VAR_7)
   VAR_6 = FUNC_3(VAR_2,
       VAR_2->sb->sb_size);

  VAR_11 = FUNC_5(VAR_2, VAR_3, VAR_4,
     VAR_9->dir);
  VAR_11->min_buff = VAR_5;
  VAR_11->max_buff = VAR_6;
  VAR_11->pool_index = VAR_8;
 }
 return 0;
}
