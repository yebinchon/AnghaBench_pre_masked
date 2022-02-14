
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pool; } ;
struct mlx5_core_dev {TYPE_1__ cmd; } ;
struct mlx5_cmd_mailbox {int * next; int buf; int dma; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct mlx5_cmd_mailbox* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct mlx5_cmd_mailbox*) ;
 struct mlx5_cmd_mailbox* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,char*) ;

__attribute__((used)) static struct mlx5_cmd_mailbox *FUNC_5(struct mlx5_core_dev *VAR_1,
           gfp_t VAR_2)
{
 struct mlx5_cmd_mailbox *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->buf = FUNC_1(VAR_1->cmd.pool, VAR_2,
           &VAR_3->dma);
 if (!VAR_3->buf) {
  FUNC_4(VAR_1, "failed allocation\n");
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }
 VAR_3->next = ((void*)0);

 return VAR_3;
}
