
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xgene_enet_pdata {int extd_stats; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct xgene_enet_pdata*) ;

int FUNC_3(struct xgene_enet_pdata *VAR_3)
{
 VAR_3->extd_stats = FUNC_0(&VAR_3->pdev->dev,
   VAR_2, sizeof(u64), VAR_1);
 if (!VAR_3->extd_stats)
  return -VAR_0;

 FUNC_2(VAR_3);
 FUNC_1(VAR_3->extd_stats, 0, VAR_2 * sizeof(u64));

 return 0;
}
