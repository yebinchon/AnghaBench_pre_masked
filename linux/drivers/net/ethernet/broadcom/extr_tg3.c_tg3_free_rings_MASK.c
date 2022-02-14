
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tg3_napi {TYPE_1__* tx_buffers; int prodring; } ;
struct tg3 {int irq_cnt; int dev; struct tg3_napi* napi; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ nr_frags; } ;
struct TYPE_3__ {struct sk_buff* skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct tg3*,int *) ;
 int FUNC_5 (struct tg3_napi*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->irq_cnt; VAR_3++) {
  struct tg3_napi *VAR_4 = &VAR_1->napi[VAR_3];

  FUNC_4(VAR_1, &VAR_4->prodring);

  if (!VAR_4->tx_buffers)
   continue;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   struct sk_buff *VAR_5 = VAR_4->tx_buffers[VAR_2].skb;

   if (!VAR_5)
    continue;

   FUNC_5(VAR_4, VAR_2,
      FUNC_3(VAR_5)->nr_frags - 1);

   FUNC_0(VAR_5);
  }
  FUNC_2(FUNC_1(VAR_1->dev, VAR_3));
 }
}
