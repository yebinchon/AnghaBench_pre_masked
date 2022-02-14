
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ context; } ;
struct rtl8xxxu_rx_urb {TYPE_1__ urb; int list; } ;
struct rtl8xxxu_priv {int rx_urb_pending_count; int rx_urb_wq; int rx_urb_lock; int rx_urb_pending_list; int shutdown; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct rtl8xxxu_priv *VAR_1,
      struct rtl8xxxu_rx_urb *VAR_2)
{
 struct sk_buff *VAR_3;
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_3(&VAR_1->rx_urb_lock, VAR_4);

 if (!VAR_1->shutdown) {
  FUNC_1(&VAR_2->list, &VAR_1->rx_urb_pending_list);
  VAR_1->rx_urb_pending_count++;
  VAR_5 = VAR_1->rx_urb_pending_count;
 } else {
  VAR_3 = (struct sk_buff *)VAR_2->urb.context;
  FUNC_0(VAR_3);
  FUNC_5(&VAR_2->urb);
 }

 FUNC_4(&VAR_1->rx_urb_lock, VAR_4);

 if (VAR_5 > VAR_0)
  FUNC_2(&VAR_1->rx_urb_wq);
}
