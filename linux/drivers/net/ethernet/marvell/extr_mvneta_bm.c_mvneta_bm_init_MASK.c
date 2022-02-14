
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvneta_bm_pool {int dummy; } ;
struct mvneta_bm {int bm_pools; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (struct mvneta_bm*) ;
 int FUNC_2 (struct mvneta_bm*) ;

__attribute__((used)) static int FUNC_3(struct mvneta_bm *VAR_3)
{
 FUNC_1(VAR_3);


 VAR_3->bm_pools = FUNC_0(&VAR_3->pdev->dev, VAR_2,
          sizeof(struct mvneta_bm_pool),
          VAR_1);
 if (!VAR_3->bm_pools)
  return -VAR_0;

 FUNC_2(VAR_3);

 return 0;
}
