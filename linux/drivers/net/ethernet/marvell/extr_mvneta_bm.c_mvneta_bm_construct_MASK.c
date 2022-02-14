
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mvneta_bm_pool {int buf_size; struct mvneta_bm* priv; } ;
struct mvneta_bm {TYPE_1__* pdev; } ;
struct hwbm_pool {scalar_t__ priv; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mvneta_bm*,struct mvneta_bm_pool*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct hwbm_pool *VAR_2, void *VAR_3)
{
 struct mvneta_bm_pool *VAR_4 =
  (struct mvneta_bm_pool *)VAR_2->priv;
 struct mvneta_bm *VAR_5 = VAR_4->priv;
 dma_addr_t VAR_6;





 *(u32 *)VAR_3 = (u32)VAR_3;
 VAR_6 = FUNC_0(&VAR_5->pdev->dev, VAR_3, VAR_4->buf_size,
       VAR_0);
 if (FUNC_3(FUNC_1(&VAR_5->pdev->dev, VAR_6)))
  return -VAR_1;

 FUNC_2(VAR_5, VAR_4, VAR_6);
 return 0;
}
