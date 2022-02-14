
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_priv {int pgdir_mutex; } ;
struct mlx4_dev {TYPE_2__* persist; } ;
struct TYPE_7__ {TYPE_4__* pgdir; } ;
struct mlx4_db {int order; int index; TYPE_3__ u; } ;
struct TYPE_8__ {int list; int db_dma; int db_page; int order1; int * bits; int order0; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int,int ) ;

void FUNC_10(struct mlx4_dev *VAR_2, struct mlx4_db *VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;
 int VAR_6;

 FUNC_6(&VAR_4->pgdir_mutex);

 VAR_5 = VAR_3->order;
 VAR_6 = VAR_3->index;

 if (VAR_3->order == 0 && FUNC_9(VAR_6 ^ 1, VAR_3->u.pgdir->order0)) {
  FUNC_1(VAR_6 ^ 1, VAR_3->u.pgdir->order0);
  ++VAR_5;
 }
 VAR_6 >>= VAR_5;
 FUNC_8(VAR_6, VAR_3->u.pgdir->bits[VAR_5]);

 if (FUNC_0(VAR_3->u.pgdir->order1, VAR_0 / 2)) {
  FUNC_2(&VAR_2->persist->pdev->dev, VAR_1,
      VAR_3->u.pgdir->db_page, VAR_3->u.pgdir->db_dma);
  FUNC_4(&VAR_3->u.pgdir->list);
  FUNC_3(VAR_3->u.pgdir);
 }

 FUNC_7(&VAR_4->pgdir_mutex);
}
