
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd_layout {int dummy; } ;
struct mlx5_cmd {int log_stride; struct mlx5_cmd_layout* cmd_buf; } ;



__attribute__((used)) static struct mlx5_cmd_layout *FUNC_0(struct mlx5_cmd *VAR_0, int VAR_1)
{
 return VAR_0->cmd_buf + (VAR_1 << VAR_0->log_stride);
}
