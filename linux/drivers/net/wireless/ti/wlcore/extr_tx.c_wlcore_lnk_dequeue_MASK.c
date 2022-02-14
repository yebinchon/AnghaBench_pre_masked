
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wl1271_link {TYPE_1__* wlvif; int * tx_queue; } ;
struct wl1271 {scalar_t__* tx_queue_count; int wl_lock; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__* tx_queue_count; } ;


 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct wl1271 *VAR_0,
       struct wl1271_link *VAR_1, u8 VAR_2)
{
 struct sk_buff *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_1(&VAR_1->tx_queue[VAR_2]);
 if (VAR_3) {
  FUNC_2(&VAR_0->wl_lock, VAR_4);
  FUNC_0(VAR_0->tx_queue_count[VAR_2] <= 0);
  VAR_0->tx_queue_count[VAR_2]--;
  if (VAR_1->wlvif) {
   FUNC_0(VAR_1->wlvif->tx_queue_count[VAR_2] <= 0);
   VAR_1->wlvif->tx_queue_count[VAR_2]--;
  }
  FUNC_3(&VAR_0->wl_lock, VAR_4);
 }

 return VAR_3;
}
