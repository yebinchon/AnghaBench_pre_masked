
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct mlxsw_sp_sb_pool_des {scalar_t__ dir; int pool; } ;
struct mlxsw_sp_sb_pm {int dummy; } ;
struct mlxsw_sp {int core; TYPE_1__* sb_vals; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct mlxsw_sp_sb_pool_des* pool_dess; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ,int ,scalar_t__,int,int ,int ) ;
 int FUNC_2 (int ,int ,char*,struct list_head*,int ,unsigned long) ;
 struct mlxsw_sp_sb_pm* FUNC_3 (struct mlxsw_sp*,int ,size_t) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_5, u8 VAR_6,
        u16 VAR_7, struct list_head *VAR_8)
{
 const struct mlxsw_sp_sb_pool_des *VAR_9 =
  &VAR_5->sb_vals->pool_dess[VAR_7];
 char VAR_10[VAR_1];
 struct mlxsw_sp_sb_pm *VAR_11;

 if (VAR_6 == VAR_0 &&
     VAR_9->dir == VAR_2)
  return 0;

 VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_10, VAR_6, VAR_9->pool, VAR_9->dir,
       0, 0, 0);
 return FUNC_2(VAR_5->core, FUNC_0(VAR_4), VAR_10,
         VAR_8,
         VAR_3,
         (unsigned long) VAR_11);
}
