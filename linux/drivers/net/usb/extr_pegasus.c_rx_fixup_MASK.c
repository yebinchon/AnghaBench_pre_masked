
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int rx_tl; int net; int rx_urb; TYPE_4__* rx_skb; int usb; } ;
typedef TYPE_1__ pegasus_t ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_7)
{
 pegasus_t *VAR_8;
 int VAR_9;

 VAR_8 = (pegasus_t *) VAR_7;
 if (VAR_8->flags & VAR_4)
  return;

 if (VAR_8->flags & VAR_3)
  if (VAR_8->rx_skb)
   goto try_again;
 if (VAR_8->rx_skb == ((void*)0))
  VAR_8->rx_skb = FUNC_0(VAR_8->net,
             VAR_2,
             VAR_1);
 if (VAR_8->rx_skb == ((void*)0)) {
  FUNC_2(VAR_8, VAR_6, VAR_8->net, "low on memory\n");
  FUNC_3(&VAR_8->rx_tl);
  return;
 }
 FUNC_4(VAR_8->rx_urb, VAR_8->usb,
     FUNC_5(VAR_8->usb, 1),
     VAR_8->rx_skb->data, VAR_2,
     VAR_5, VAR_8);
try_again:
 VAR_9 = FUNC_6(VAR_8->rx_urb, VAR_1);
 if (VAR_9 == -VAR_0)
  FUNC_1(VAR_8->net);
 else if (VAR_9) {
  VAR_8->flags |= VAR_3;
  FUNC_3(&VAR_8->rx_tl);
 } else {
  VAR_8->flags &= ~VAR_3;
 }
}
