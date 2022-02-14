
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_6__ {int netdev; int intr_buff; int rx_skb; int tl; int flags; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_1)
{
 rtl8150_t *VAR_2 = FUNC_9(VAR_1);

 FUNC_10(VAR_1, ((void*)0));
 if (VAR_2) {
  FUNC_5(VAR_0, &VAR_2->flags);
  FUNC_6(&VAR_2->tl);
  FUNC_8(VAR_2->netdev);
  FUNC_7(VAR_2);
  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
  FUNC_0(VAR_2->rx_skb);
  FUNC_4(VAR_2->intr_buff);
  FUNC_2(VAR_2->netdev);
 }
}
