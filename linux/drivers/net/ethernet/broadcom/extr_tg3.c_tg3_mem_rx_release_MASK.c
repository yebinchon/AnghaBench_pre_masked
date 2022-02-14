
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3_napi {int * rx_rcb; int rx_rcb_mapping; int prodring; } ;
struct tg3 {int irq_max; TYPE_1__* pdev; struct tg3_napi* napi; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct tg3*) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (struct tg3*,int *) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->irq_max; VAR_1++) {
  struct tg3_napi *VAR_2 = &VAR_0->napi[VAR_1];

  FUNC_2(VAR_0, &VAR_2->prodring);

  if (!VAR_2->rx_rcb)
   continue;

  FUNC_1(&VAR_0->pdev->dev,
      FUNC_0(VAR_0),
      VAR_2->rx_rcb,
      VAR_2->rx_rcb_mapping);
  VAR_2->rx_rcb = ((void*)0);
 }
}
