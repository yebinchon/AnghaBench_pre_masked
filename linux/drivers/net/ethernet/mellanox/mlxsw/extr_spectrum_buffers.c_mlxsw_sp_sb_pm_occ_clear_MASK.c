
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct mlxsw_sp_sb_pool_des {scalar_t__ dir; int pool; } ;
struct mlxsw_sp {int core; TYPE_1__* sb_vals; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct mlxsw_sp_sb_pool_des* pool_dess; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ,int ,scalar_t__,int,int ,int ) ;
 int FUNC_2 (int ,int ,char*,struct list_head*,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_4, u8 VAR_5,
        u16 VAR_6, struct list_head *VAR_7)
{
 const struct mlxsw_sp_sb_pool_des *VAR_8 =
  &VAR_4->sb_vals->pool_dess[VAR_6];
 char VAR_9[VAR_1];

 if (VAR_5 == VAR_0 &&
     VAR_8->dir == VAR_2)
  return 0;

 FUNC_1(VAR_9, VAR_5, VAR_8->pool, VAR_8->dir,
       1, 0, 0);
 return FUNC_2(VAR_4->core, FUNC_0(VAR_3), VAR_9,
         VAR_7, ((void*)0), 0);
}
