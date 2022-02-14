
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3_napi {int * hw_status; int status_mapping; } ;
struct tg3_hw_stats {int dummy; } ;
struct tg3 {int irq_cnt; int * hw_stats; int stats_mapping; TYPE_1__* pdev; struct tg3_napi* napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (struct tg3*) ;
 int FUNC_2 (struct tg3*) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->irq_cnt; VAR_2++) {
  struct tg3_napi *VAR_3 = &VAR_1->napi[VAR_2];

  if (VAR_3->hw_status) {
   FUNC_0(&VAR_1->pdev->dev, VAR_0,
       VAR_3->hw_status,
       VAR_3->status_mapping);
   VAR_3->hw_status = ((void*)0);
  }
 }

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);





 if (VAR_1->hw_stats) {
  FUNC_0(&VAR_1->pdev->dev, sizeof(struct tg3_hw_stats),
      VAR_1->hw_stats, VAR_1->stats_mapping);
  VAR_1->hw_stats = ((void*)0);
 }
}
