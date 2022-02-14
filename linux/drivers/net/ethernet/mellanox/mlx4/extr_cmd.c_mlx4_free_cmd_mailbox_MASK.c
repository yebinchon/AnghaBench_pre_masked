
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int buf; } ;
struct TYPE_3__ {int pool; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 TYPE_2__* FUNC_2 (struct mlx4_dev*) ;

void FUNC_3(struct mlx4_dev *VAR_0,
      struct mlx4_cmd_mailbox *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(FUNC_2(VAR_0)->cmd.pool, VAR_1->buf, VAR_1->dma);
 FUNC_1(VAR_1);
}
