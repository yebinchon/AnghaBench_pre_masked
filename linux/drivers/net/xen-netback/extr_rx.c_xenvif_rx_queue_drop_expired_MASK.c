
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenvif_queue {int rx_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int expires; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct xenvif_queue*) ;

__attribute__((used)) static void FUNC_5(struct xenvif_queue *VAR_1)
{
 struct sk_buff *VAR_2;

 for (;;) {
  VAR_2 = FUNC_2(&VAR_1->rx_queue);
  if (!VAR_2)
   break;
  if (FUNC_3(VAR_0, FUNC_0(VAR_2)->expires))
   break;
  FUNC_4(VAR_1);
  FUNC_1(VAR_2);
 }
}
