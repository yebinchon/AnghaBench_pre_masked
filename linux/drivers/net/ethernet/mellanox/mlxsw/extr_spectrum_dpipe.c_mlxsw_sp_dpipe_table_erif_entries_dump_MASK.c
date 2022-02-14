
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int core; } ;
struct devlink_dpipe_value {int dummy; } ;
struct devlink_dpipe_match {int member_0; } ;
struct devlink_dpipe_entry {int member_0; } ;
struct devlink_dpipe_dump_ctx {int dummy; } ;
struct devlink_dpipe_action {int member_0; } ;
typedef int match_value ;
typedef int action_value ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct devlink_dpipe_entry*) ;
 int FUNC_2 (struct devlink_dpipe_dump_ctx*,struct devlink_dpipe_entry*) ;
 int FUNC_3 (struct devlink_dpipe_dump_ctx*) ;
 int FUNC_4 (struct devlink_dpipe_dump_ctx*) ;
 int FUNC_5 (struct devlink_dpipe_value*,int ,int) ;
 int FUNC_6 (struct mlxsw_sp*,struct devlink_dpipe_entry*,struct mlxsw_sp_rif*,int) ;
 int FUNC_7 (struct devlink_dpipe_entry*,struct devlink_dpipe_value*,struct devlink_dpipe_match*,struct devlink_dpipe_value*,struct devlink_dpipe_action*) ;
 int FUNC_8 (struct devlink_dpipe_match*,struct devlink_dpipe_action*) ;
 struct mlxsw_sp_rif* FUNC_9 (struct mlxsw_sp*,int) ;
 int FUNC_10 (struct mlxsw_sp_rif*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(void *VAR_2, bool VAR_3,
           struct devlink_dpipe_dump_ctx *VAR_4)
{
 struct devlink_dpipe_value VAR_5, VAR_6;
 struct devlink_dpipe_action VAR_7 = {0};
 struct devlink_dpipe_match VAR_8 = {0};
 struct devlink_dpipe_entry VAR_9 = {0};
 struct mlxsw_sp *VAR_10 = VAR_2;
 unsigned int VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 FUNC_5(&VAR_6, 0, sizeof(VAR_6));

 FUNC_8(&VAR_8, &VAR_7);
 VAR_14 = FUNC_7(&VAR_9, &VAR_5, &VAR_8,
       &VAR_6, &VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_11 = FUNC_0(VAR_10->core, VAR_1);
 FUNC_11();
 VAR_12 = 0;
start_again:
 VAR_14 = FUNC_4(VAR_4);
 if (VAR_14)
  return VAR_14;
 VAR_13 = 0;
 for (; VAR_12 < VAR_11; VAR_12++) {
  struct mlxsw_sp_rif *VAR_15 = FUNC_9(VAR_10, VAR_12);

  if (!VAR_15 || !FUNC_10(VAR_15))
   continue;
  VAR_14 = FUNC_6(VAR_10, &VAR_9, VAR_15,
           VAR_3);
  if (VAR_14)
   goto err_entry_get;
  VAR_14 = FUNC_2(VAR_4, &VAR_9);
  if (VAR_14) {
   if (VAR_14 == -VAR_0) {
    if (!VAR_13)
     goto err_entry_append;
    break;
   }
   goto err_entry_append;
  }
  VAR_13++;
 }

 FUNC_3(VAR_4);
 if (VAR_12 != VAR_11)
  goto start_again;
 FUNC_12();

 FUNC_1(&VAR_9);
 return 0;
err_entry_append:
err_entry_get:
 FUNC_12();
 FUNC_1(&VAR_9);
 return VAR_14;
}
