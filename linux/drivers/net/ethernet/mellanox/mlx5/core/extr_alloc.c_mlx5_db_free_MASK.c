
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_3__* pgdir; } ;
struct mlx5_db {TYPE_1__ u; int index; } ;
struct TYPE_5__ {int pgdir_mutex; } ;
struct mlx5_core_dev {TYPE_2__ priv; int device; } ;
struct TYPE_6__ {int bitmap; int list; int db_dma; int db_page; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct mlx5_core_dev *VAR_1, struct mlx5_db *VAR_2)
{
 u32 VAR_3 = VAR_0 / FUNC_3();

 FUNC_7(&VAR_1->priv.pgdir_mutex);

 FUNC_0(VAR_2->index, VAR_2->u.pgdir->bitmap);

 if (FUNC_2(VAR_2->u.pgdir->bitmap, VAR_3)) {
  FUNC_4(VAR_1->device, VAR_0,
      VAR_2->u.pgdir->db_page, VAR_2->u.pgdir->db_dma);
  FUNC_6(&VAR_2->u.pgdir->list);
  FUNC_1(VAR_2->u.pgdir->bitmap);
  FUNC_5(VAR_2->u.pgdir);
 }

 FUNC_8(&VAR_1->priv.pgdir_mutex);
}
