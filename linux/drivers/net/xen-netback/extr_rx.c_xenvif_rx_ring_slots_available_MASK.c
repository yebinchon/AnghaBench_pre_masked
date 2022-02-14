
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ req_cons; TYPE_1__* sring; } ;
struct xenvif_queue {TYPE_2__ rx; int rx_queue; } ;
struct sk_buff {scalar_t__ sw_hash; int len; } ;
struct TYPE_3__ {scalar_t__ req_prod; scalar_t__ req_event; } ;
typedef scalar_t__ RING_IDX ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct xenvif_queue *VAR_1)
{
 RING_IDX VAR_2, VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(&VAR_1->rx_queue);
 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_0(VAR_4->len, VAR_0);
 if (FUNC_2(VAR_4))
  VAR_5++;
 if (VAR_4->sw_hash)
  VAR_5++;

 do {
  VAR_2 = VAR_1->rx.sring->req_prod;
  VAR_3 = VAR_1->rx.req_cons;

  if (VAR_2 - VAR_3 >= VAR_5)
   return 1;

  VAR_1->rx.sring->req_event = VAR_2 + 1;




  FUNC_1();
 } while (VAR_1->rx.sring->req_prod != VAR_2);

 return 0;
}
