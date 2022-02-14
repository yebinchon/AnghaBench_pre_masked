
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_termtbl_handle {int termtbl; int rule; int dest; } ;
struct mlx5_flow_spec {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
struct mlx5_flow_act {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int FUNC_2 (int ,struct mlx5_flow_spec const*,struct mlx5_flow_act*,int *,int) ;
 int FUNC_3 (struct mlx5_flow_namespace*,int,int,int,int ,int) ;
 int FUNC_4 (int ) ;
 struct mlx5_flow_namespace* FUNC_5 (struct mlx5_core_dev*,int ) ;

__attribute__((used)) static int
FUNC_6(struct mlx5_core_dev *VAR_4,
       struct mlx5_termtbl_handle *VAR_5,
       struct mlx5_flow_act *VAR_6)
{
 static const struct mlx5_flow_spec VAR_7 = {};
 struct mlx5_flow_namespace *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = FUNC_5(VAR_4, VAR_2);
 if (!VAR_8) {
  FUNC_1(VAR_4, "Failed to get FDB flow namespace\n");
  return -VAR_0;
 }




 VAR_9 = VAR_1;
 VAR_10 = VAR_3;
 VAR_5->termtbl = FUNC_3(VAR_8, VAR_9, 1, 1,
         0, VAR_10);
 if (FUNC_0(VAR_5->termtbl)) {
  FUNC_1(VAR_4, "Failed to create termination table\n");
  return -VAR_0;
 }

 VAR_5->rule = FUNC_2(VAR_5->termtbl, &VAR_7, VAR_6,
           &VAR_5->dest, 1);

 if (FUNC_0(VAR_5->rule)) {
  FUNC_1(VAR_4, "Failed to create termination table rule\n");
  goto add_flow_err;
 }
 return 0;

add_flow_err:
 VAR_11 = FUNC_4(VAR_5->termtbl);
 if (VAR_11)
  FUNC_1(VAR_4, "Failed to destroy termination table\n");

 return -VAR_0;
}
