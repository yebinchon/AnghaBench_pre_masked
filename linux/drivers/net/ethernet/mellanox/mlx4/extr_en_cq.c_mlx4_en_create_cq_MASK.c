
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_6__* dev; } ;
struct TYPE_11__ {scalar_t__ buf; } ;
struct TYPE_12__ {TYPE_4__ direct; } ;
struct TYPE_14__ {TYPE_5__ buf; } ;
struct mlx4_en_cq {int size; int buf_size; int ring; int type; TYPE_7__ wqres; struct mlx4_cqe* buf; int vector; } ;
struct mlx4_cqe {int dummy; } ;
typedef enum cq_type { ____Placeholder_cq_type } cq_type ;
struct TYPE_8__ {int cqe_size; int num_comp_vectors; } ;
struct TYPE_13__ {int numa_node; TYPE_3__* persist; TYPE_1__ caps; } ;
struct TYPE_10__ {TYPE_2__* pdev; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_cq*) ;
 struct mlx4_en_cq* FUNC_2 (int,int ,int) ;
 int FUNC_3 (TYPE_6__*,TYPE_7__*,int) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(struct mlx4_en_priv *VAR_2,
        struct mlx4_en_cq **VAR_3,
        int VAR_4, int VAR_5, enum cq_type VAR_6,
        int VAR_7)
{
 struct mlx4_en_dev *VAR_8 = VAR_2->mdev;
 struct mlx4_en_cq *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1, VAR_7);
 if (!VAR_9) {
  FUNC_0(VAR_2, "Failed to allocate CQ structure\n");
  return -VAR_0;
 }

 VAR_9->size = VAR_4;
 VAR_9->buf_size = VAR_9->size * VAR_8->dev->caps.cqe_size;

 VAR_9->ring = VAR_5;
 VAR_9->type = VAR_6;
 VAR_9->vector = VAR_8->dev->caps.num_comp_vectors;




 FUNC_4(&VAR_8->dev->persist->pdev->dev, VAR_7);
 VAR_10 = FUNC_3(VAR_8->dev, &VAR_9->wqres,
    VAR_9->buf_size);
 FUNC_4(&VAR_8->dev->persist->pdev->dev, VAR_8->dev->numa_node);
 if (VAR_10)
  goto err_cq;

 VAR_9->buf = (struct mlx4_cqe *)VAR_9->wqres.buf.direct.buf;
 *VAR_3 = VAR_9;

 return 0;

err_cq:
 FUNC_1(VAR_9);
 *VAR_3 = ((void*)0);
 return VAR_10;
}
