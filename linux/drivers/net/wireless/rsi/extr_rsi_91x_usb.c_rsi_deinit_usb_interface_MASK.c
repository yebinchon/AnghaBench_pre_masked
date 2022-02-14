
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsi_hw {TYPE_1__* priv; scalar_t__ rsi_dev; } ;
struct rsi_91x_usbdev {int tx_buffer; TYPE_2__* rx_cb; int rx_thread; } ;
struct TYPE_4__ {int rx_urb; } ;
struct TYPE_3__ {int coex_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rsi_hw *VAR_0)
{
 struct rsi_91x_usbdev *VAR_1 = (struct rsi_91x_usbdev *)VAR_0->rsi_dev;

 FUNC_1(&VAR_1->rx_thread);

 FUNC_2(VAR_1->rx_cb[0].rx_urb);
 if (VAR_0->priv->coex_mode > 1)
  FUNC_2(VAR_1->rx_cb[1].rx_urb);

 FUNC_0(VAR_1->tx_buffer);
}
