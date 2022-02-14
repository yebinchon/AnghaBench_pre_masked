
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int complete; } ;
struct mlx5_fpga_tls_command_context {int list; TYPE_1__ buf; int (* complete ) (int ,struct mlx5_fpga_device*,struct mlx5_fpga_tls_command_context*,int *) ;int ref; } ;
struct mlx5_fpga_tls {int pending_cmds_lock; int conn; int pending_cmds; } ;
struct mlx5_fpga_device {struct mlx5_fpga_tls* tls; } ;
typedef int (* mlx5_fpga_tls_command_complete ) (int ,struct mlx5_fpga_device*,struct mlx5_fpga_tls_command_context*,int *) ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct mlx5_fpga_device *VAR_1,
       struct mlx5_fpga_tls_command_context *VAR_2,
       mlx5_fpga_tls_command_complete VAR_3)
{
 struct mlx5_fpga_tls *VAR_4 = VAR_1->tls;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_3(&VAR_2->ref, 2);
 VAR_2->complete = VAR_3;
 VAR_2->buf.complete = VAR_0;

 FUNC_4(&VAR_4->pending_cmds_lock, VAR_5);




 VAR_6 = FUNC_2(VAR_4->conn, &VAR_2->buf);
 if (FUNC_0(!VAR_6))
  FUNC_1(&VAR_2->list, &VAR_4->pending_cmds);
 else
  VAR_3(VAR_4->conn, VAR_1, VAR_2, ((void*)0));
 FUNC_5(&VAR_4->pending_cmds_lock, VAR_5);
}
