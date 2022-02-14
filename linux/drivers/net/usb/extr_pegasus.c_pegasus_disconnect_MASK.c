
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct pegasus {int net; int * rx_skb; int carrier_check; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pegasus*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct pegasus*) ;
 int FUNC_7 (int ) ;
 struct pegasus* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_1)
{
 struct pegasus *VAR_2 = FUNC_8(VAR_1);

 FUNC_9(VAR_1, ((void*)0));
 if (!VAR_2) {
  FUNC_1(&VAR_1->dev, "unregistering non-bound device?\n");
  return;
 }

 VAR_2->flags |= VAR_0;
 FUNC_0(&VAR_2->carrier_check);
 FUNC_7(VAR_2->net);
 FUNC_6(VAR_2);
 FUNC_3(VAR_2);
 if (VAR_2->rx_skb != ((void*)0)) {
  FUNC_2(VAR_2->rx_skb);
  VAR_2->rx_skb = ((void*)0);
 }
 FUNC_4(VAR_2->net);
 FUNC_5();
}
