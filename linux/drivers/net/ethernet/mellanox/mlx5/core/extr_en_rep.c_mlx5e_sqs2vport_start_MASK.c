
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_rep_sq {int list; struct mlx5_flow_handle* send_to_vport_rule; } ;
struct mlx5e_rep_priv {int vport_sqs_list; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_eswitch_rep {int vport; } ;
struct mlx5_eswitch {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_handle*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mlx5_flow_handle*) ;
 int FUNC_2 (struct mlx5e_rep_sq*) ;
 struct mlx5e_rep_sq* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct mlx5_flow_handle* FUNC_5 (struct mlx5_eswitch*,int ,int ) ;
 struct mlx5e_rep_priv* FUNC_6 (struct mlx5_eswitch_rep*) ;
 int FUNC_7 (struct mlx5_eswitch*,struct mlx5_eswitch_rep*) ;

__attribute__((used)) static int FUNC_8(struct mlx5_eswitch *VAR_3,
     struct mlx5_eswitch_rep *VAR_4,
     u32 *VAR_5, int VAR_6)
{
 struct mlx5_flow_handle *VAR_7;
 struct mlx5e_rep_priv *VAR_8;
 struct mlx5e_rep_sq *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_3->mode != VAR_2)
  return 0;

 VAR_8 = FUNC_6(VAR_4);
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
  if (!VAR_9) {
   VAR_10 = -VAR_0;
   goto out_err;
  }


  VAR_7 = FUNC_5(VAR_3,
        VAR_4->vport,
        VAR_5[VAR_11]);
  if (FUNC_0(VAR_7)) {
   VAR_10 = FUNC_1(VAR_7);
   FUNC_2(VAR_9);
   goto out_err;
  }
  VAR_9->send_to_vport_rule = VAR_7;
  FUNC_4(&VAR_9->list, &VAR_8->vport_sqs_list);
 }
 return 0;

out_err:
 FUNC_7(VAR_3, VAR_4);
 return VAR_10;
}
