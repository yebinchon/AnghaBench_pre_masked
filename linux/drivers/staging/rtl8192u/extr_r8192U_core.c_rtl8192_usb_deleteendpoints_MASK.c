
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct r8192_priv {TYPE_1__** pp_rxskb; TYPE_1__** oldaddr; TYPE_1__** rx_urb; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__** transfer_buffer; } ;


 int VAR_0 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct net_device *VAR_1)
{
 int VAR_2;
 struct r8192_priv *VAR_3 = FUNC_0(VAR_1);



 if (VAR_3->rx_urb) {
  for (VAR_2 = 0; VAR_2 < (VAR_0 + 1); VAR_2++) {
   FUNC_3(VAR_3->rx_urb[VAR_2]);
   FUNC_1(VAR_3->rx_urb[VAR_2]->transfer_buffer);
   FUNC_2(VAR_3->rx_urb[VAR_2]);
  }
  FUNC_1(VAR_3->rx_urb);
  VAR_3->rx_urb = ((void*)0);
 }
}
