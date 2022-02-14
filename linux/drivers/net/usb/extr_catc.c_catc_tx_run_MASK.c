
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct catc {int tx_ptr; size_t tx_idx; int netdev; TYPE_1__* usbdev; TYPE_2__* tx_urb; int * tx_buf; scalar_t__ is_f5u011; } ;
struct TYPE_4__ {int transfer_buffer_length; TYPE_1__* dev; int transfer_buffer; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct catc *VAR_1)
{
 int VAR_2;

 if (VAR_1->is_f5u011)
  VAR_1->tx_ptr = (VAR_1->tx_ptr + 63) & ~63;

 VAR_1->tx_urb->transfer_buffer_length = VAR_1->tx_ptr;
 VAR_1->tx_urb->transfer_buffer = VAR_1->tx_buf[VAR_1->tx_idx];
 VAR_1->tx_urb->dev = VAR_1->usbdev;

 if ((VAR_2 = FUNC_2(VAR_1->tx_urb, VAR_0)) < 0)
  FUNC_0(&VAR_1->usbdev->dev, "submit(tx_urb), status %d\n",
   VAR_2);

 VAR_1->tx_idx = !VAR_1->tx_idx;
 VAR_1->tx_ptr = 0;

 FUNC_1(VAR_1->netdev);
 return VAR_2;
}
