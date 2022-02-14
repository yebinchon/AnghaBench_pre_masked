
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvaser_usb_net_priv {TYPE_2__* tx_contexts; scalar_t__ active_tx_contexts; TYPE_1__* dev; } ;
struct TYPE_4__ {int echo_index; } ;
struct TYPE_3__ {int max_tx_urbs; } ;



__attribute__((used)) static void FUNC_0(struct kvaser_usb_net_priv *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = VAR_0->dev->max_tx_urbs;

 VAR_0->active_tx_contexts = 0;
 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  VAR_0->tx_contexts[VAR_1].echo_index = VAR_2;
}
