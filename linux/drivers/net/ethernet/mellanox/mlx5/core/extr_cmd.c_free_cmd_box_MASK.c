
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pool; } ;
struct mlx5_core_dev {TYPE_1__ cmd; } ;
struct mlx5_cmd_mailbox {int dma; int buf; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mlx5_cmd_mailbox*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0,
    struct mlx5_cmd_mailbox *VAR_1)
{
 FUNC_0(VAR_0->cmd.pool, VAR_1->buf, VAR_1->dma);
 FUNC_1(VAR_1);
}
