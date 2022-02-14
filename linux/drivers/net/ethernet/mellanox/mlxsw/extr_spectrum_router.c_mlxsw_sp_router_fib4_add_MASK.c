
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_fib_node {int dummy; } ;
typedef struct mlxsw_sp_fib_node mlxsw_sp_fib4_entry ;
struct mlxsw_sp {TYPE_2__* bus_info; TYPE_1__* router; } ;
struct fib_entry_notifier_info {int dst_len; int dst; int tb_id; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ aborted; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_fib_node*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_sp_fib_node*) ;
 int FUNC_2 (int ,char*) ;
 struct mlxsw_sp_fib_node* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*,struct fib_entry_notifier_info const*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*,int) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*,int,int) ;
 struct mlxsw_sp_fib_node* FUNC_7 (struct mlxsw_sp*,int ,int *,int,int ,int ) ;
 int FUNC_8 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;

__attribute__((used)) static int
FUNC_9(struct mlxsw_sp *VAR_1,
    const struct fib_entry_notifier_info *VAR_2,
    bool VAR_3, bool VAR_4)
{
 struct mlxsw_sp_fib4_entry *VAR_5;
 struct mlxsw_sp_fib_node *VAR_6;
 int VAR_7;

 if (VAR_1->router->aborted)
  return 0;

 VAR_6 = FUNC_7(VAR_1, VAR_2->tb_id,
      &VAR_2->dst, sizeof(VAR_2->dst),
      VAR_2->dst_len,
      VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_1->bus_info->dev, "Failed to get FIB node\n");
  return FUNC_1(VAR_6);
 }

 VAR_5 = FUNC_3(VAR_1, VAR_6, VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_1->bus_info->dev, "Failed to create FIB entry\n");
  VAR_7 = FUNC_1(VAR_5);
  goto err_fib4_entry_create;
 }

 VAR_7 = FUNC_6(VAR_1, VAR_5, VAR_3,
         VAR_4);
 if (VAR_7) {
  FUNC_2(VAR_1->bus_info->dev, "Failed to link FIB entry to node\n");
  goto err_fib4_node_entry_link;
 }

 FUNC_5(VAR_1, VAR_5, VAR_3);

 return 0;

err_fib4_node_entry_link:
 FUNC_4(VAR_1, VAR_5);
err_fib4_entry_create:
 FUNC_8(VAR_1, VAR_6);
 return VAR_7;
}
