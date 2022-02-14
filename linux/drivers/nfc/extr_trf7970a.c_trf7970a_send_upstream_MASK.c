
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct trf7970a {int aborting; TYPE_1__* rx_skb; int cb_arg; int ddev; int (* cb ) (int ,int ,TYPE_1__*) ;int dev; int state; int * tx_skb; } ;
struct TYPE_5__ {int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int ,int,int,int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct trf7970a *VAR_3)
{
 FUNC_3(VAR_3->tx_skb);
 VAR_3->tx_skb = ((void*)0);

 if (VAR_3->rx_skb && !FUNC_1(VAR_3->rx_skb) && !VAR_3->aborting)
  FUNC_5("trf7970a rx data: ", VAR_0,
         16, 1, VAR_3->rx_skb->data, VAR_3->rx_skb->len,
         0);

 VAR_3->state = VAR_2;

 if (VAR_3->aborting) {
  FUNC_2(VAR_3->dev, "Abort process complete\n");

  if (!FUNC_1(VAR_3->rx_skb)) {
   FUNC_4(VAR_3->rx_skb);
   VAR_3->rx_skb = FUNC_0(-VAR_1);
  }

  VAR_3->aborting = 0;
 }

 VAR_3->cb(VAR_3->ddev, VAR_3->cb_arg, VAR_3->rx_skb);

 VAR_3->rx_skb = ((void*)0);
}
