
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tg3_napi {int * rx_rcb_prod_idx; struct tg3_hw_status* hw_status; int status_mapping; } ;
struct tg3_hw_status {TYPE_2__* idx; int rx_mini_consumer; int reserved; int rx_jumbo_consumer; } ;
struct tg3_hw_stats {int dummy; } ;
struct tg3 {int irq_cnt; TYPE_1__* pdev; struct tg3_napi* napi; void* hw_stats; int stats_mapping; } ;
struct TYPE_4__ {int rx_producer; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 scalar_t__ FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*) ;
 scalar_t__ FUNC_3 (struct tg3*) ;
 scalar_t__ FUNC_4 (struct tg3*) ;

__attribute__((used)) static int FUNC_5(struct tg3 *VAR_4)
{
 int VAR_5;

 VAR_4->hw_stats = FUNC_0(&VAR_4->pdev->dev,
       sizeof(struct tg3_hw_stats),
       &VAR_4->stats_mapping, VAR_2);
 if (!VAR_4->hw_stats)
  goto err_out;

 for (VAR_5 = 0; VAR_5 < VAR_4->irq_cnt; VAR_5++) {
  struct tg3_napi *VAR_6 = &VAR_4->napi[VAR_5];
  struct tg3_hw_status *VAR_7;

  VAR_6->hw_status = FUNC_0(&VAR_4->pdev->dev,
            VAR_3,
            &VAR_6->status_mapping,
            VAR_2);
  if (!VAR_6->hw_status)
   goto err_out;

  VAR_7 = VAR_6->hw_status;

  if (FUNC_1(VAR_4, VAR_0)) {
   u16 *VAR_8 = ((void*)0);







   switch (VAR_5) {
   case 1:
    VAR_8 = &VAR_7->idx[0].rx_producer;
    break;
   case 2:
    VAR_8 = &VAR_7->rx_jumbo_consumer;
    break;
   case 3:
    VAR_8 = &VAR_7->reserved;
    break;
   case 4:
    VAR_8 = &VAR_7->rx_mini_consumer;
    break;
   }
   VAR_6->rx_rcb_prod_idx = VAR_8;
  } else {
   VAR_6->rx_rcb_prod_idx = &VAR_7->idx[0].rx_producer;
  }
 }

 if (FUNC_4(VAR_4) || FUNC_3(VAR_4))
  goto err_out;

 return 0;

err_out:
 FUNC_2(VAR_4);
 return -VAR_1;
}
