
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct switchtec_dev {TYPE_3__* pdev; TYPE_2__* mmio_mrpc; int dma_mrpc; TYPE_1__* mmio_part_cfg; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int dma_vector; } ;
struct TYPE_5__ {int vep_vector_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ,int ,int ,struct switchtec_dev*) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct switchtec_dev *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_5 < 4)
  VAR_5 = 4;

 VAR_9 = FUNC_2(VAR_8->pdev, 1, VAR_5,
          VAR_3 | VAR_2 |
          VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = FUNC_1(&VAR_8->mmio_part_cfg->vep_vector_number);
 if (VAR_10 < 0 || VAR_10 >= VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_8->pdev, VAR_10);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_12 = FUNC_0(&VAR_8->pdev->dev, VAR_10,
    VAR_7, 0,
    VAR_1, VAR_8);

 if (VAR_12)
  return VAR_12;

 if (!VAR_8->dma_mrpc)
  return VAR_12;

 VAR_11 = FUNC_1(&VAR_8->mmio_mrpc->dma_vector);
 if (VAR_11 < 0 || VAR_11 >= VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_8->pdev, VAR_11);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = FUNC_0(&VAR_8->pdev->dev, VAR_11,
    VAR_6, 0,
    VAR_1, VAR_8);

 return VAR_12;
}
