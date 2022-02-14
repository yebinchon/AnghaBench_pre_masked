
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct netfront_queue {int* grant_rx_ref; int rx_lock; struct sk_buff** rx_skbs; } ;
struct TYPE_2__ {int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int,int ,unsigned long) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct netfront_queue *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_6(&VAR_2->rx_lock);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct sk_buff *VAR_5;
  struct page *VAR_6;

  VAR_5 = VAR_2->rx_skbs[VAR_3];
  if (!VAR_5)
   continue;

  VAR_4 = VAR_2->grant_rx_ref[VAR_3];
  if (VAR_4 == VAR_0)
   continue;

  VAR_6 = FUNC_4(&FUNC_5(VAR_5)->frags[0]);




  FUNC_0(VAR_6);
  FUNC_1(VAR_4, 0,
       (unsigned long)FUNC_3(VAR_6));
  VAR_2->grant_rx_ref[VAR_3] = VAR_0;

  FUNC_2(VAR_5);
 }

 FUNC_7(&VAR_2->rx_lock);
}
