
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd_work_ent {int uout_size; int page_queue; struct mlx5_cmd* cmd; void* context; scalar_t__ callback; void* uout; struct mlx5_cmd_msg* out; struct mlx5_cmd_msg* in; } ;
struct mlx5_cmd_msg {int dummy; } ;
struct mlx5_cmd {int dummy; } ;
typedef scalar_t__ mlx5_cmd_cbk_t ;
typedef int gfp_t ;


 int VAR_0 ;
 struct mlx5_cmd_work_ent* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_cmd_work_ent* FUNC_1 (int,int ) ;

__attribute__((used)) static struct mlx5_cmd_work_ent *FUNC_2(struct mlx5_cmd *VAR_3,
        struct mlx5_cmd_msg *VAR_4,
        struct mlx5_cmd_msg *VAR_5,
        void *VAR_6, int VAR_7,
        mlx5_cmd_cbk_t VAR_8,
        void *VAR_9, int VAR_10)
{
 gfp_t VAR_11 = VAR_8 ? VAR_1 : VAR_2;
 struct mlx5_cmd_work_ent *VAR_12;

 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_11);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 VAR_12->in = VAR_4;
 VAR_12->out = VAR_5;
 VAR_12->uout = VAR_6;
 VAR_12->uout_size = VAR_7;
 VAR_12->callback = VAR_8;
 VAR_12->context = VAR_9;
 VAR_12->cmd = VAR_3;
 VAR_12->page_queue = VAR_10;

 return VAR_12;
}
