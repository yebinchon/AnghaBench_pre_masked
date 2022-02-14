
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3_napi {int rx_rcb; int rx_rcb_mapping; int prodring; } ;
struct tg3 {unsigned int rxq_cnt; TYPE_1__* pdev; struct tg3_napi* napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tg3*) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*) ;
 scalar_t__ FUNC_4 (struct tg3*,int *) ;

__attribute__((used)) static int FUNC_5(struct tg3 *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_5 = VAR_3->rxq_cnt;




 if (FUNC_2(VAR_3, VAR_0))
  VAR_5++;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  struct tg3_napi *VAR_6 = &VAR_3->napi[VAR_4];

  if (FUNC_4(VAR_3, &VAR_6->prodring))
   goto err_out;





  if (!VAR_4 && FUNC_2(VAR_3, VAR_0))
   continue;

  VAR_6->rx_rcb = FUNC_1(&VAR_3->pdev->dev,
         FUNC_0(VAR_3),
         &VAR_6->rx_rcb_mapping,
         VAR_2);
  if (!VAR_6->rx_rcb)
   goto err_out;
 }

 return 0;

err_out:
 FUNC_3(VAR_3);
 return -VAR_1;
}
