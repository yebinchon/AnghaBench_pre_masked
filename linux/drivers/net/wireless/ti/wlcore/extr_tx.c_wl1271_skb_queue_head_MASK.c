
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wl12xx_vif {size_t last_tx_hlid; int * tx_queue_count; } ;
struct wl1271 {size_t num_links; int wl_lock; int * tx_queue_count; TYPE_1__* links; int flags; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int * tx_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct wl1271*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2,
      struct sk_buff *VAR_3, u8 VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = FUNC_5(FUNC_1(VAR_3));

 if (FUNC_6(VAR_1, VAR_3)) {
  FUNC_0(VAR_0, &VAR_1->flags);
 } else {
  FUNC_2(&VAR_1->links[VAR_4].tx_queue[VAR_6], VAR_3);


  VAR_2->last_tx_hlid = (VAR_4 + VAR_1->num_links - 1) %
          VAR_1->num_links;
 }

 FUNC_3(&VAR_1->wl_lock, VAR_5);
 VAR_1->tx_queue_count[VAR_6]++;
 if (VAR_2)
  VAR_2->tx_queue_count[VAR_6]++;
 FUNC_4(&VAR_1->wl_lock, VAR_5);
}
