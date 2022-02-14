
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {scalar_t__ context; } ;
struct queue_entry_priv_usb_bcn {struct urb* urb; struct urb* guardian_urb; } ;
struct queue_entry {int * skb; TYPE_2__* queue; struct queue_entry_priv_usb_bcn* priv_data; } ;
struct TYPE_4__ {TYPE_1__* rt2x00dev; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_2)
{
 struct queue_entry *VAR_3 = (struct queue_entry *)VAR_2->context;
 struct queue_entry_priv_usb_bcn *VAR_4 = VAR_3->priv_data;

 if (!FUNC_1(VAR_0, &VAR_3->queue->rt2x00dev->flags))
  return;







 if (VAR_4->guardian_urb == VAR_2) {
  FUNC_2(VAR_4->urb, VAR_1);
 } else if (VAR_4->urb == VAR_2) {
  FUNC_0(VAR_3->skb);
  VAR_3->skb = ((void*)0);
 }
}
