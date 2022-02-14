
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_usb_card {int * ep_out_buf; int * rx_urb; int * tx_urb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct if_usb_card *VAR_0)
{

 FUNC_2(VAR_0->tx_urb);
 FUNC_2(VAR_0->rx_urb);

 FUNC_1(VAR_0->tx_urb);
 VAR_0->tx_urb = ((void*)0);

 FUNC_1(VAR_0->rx_urb);
 VAR_0->rx_urb = ((void*)0);

 FUNC_0(VAR_0->ep_out_buf);
 VAR_0->ep_out_buf = ((void*)0);
}
