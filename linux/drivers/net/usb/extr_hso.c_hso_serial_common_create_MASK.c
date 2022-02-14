
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hso_serial {int minor; int num_rx_urbs; int rx_data_length; int tx_data_length; void* tx_buffer; void* tx_data; scalar_t__ tx_buffer_count; scalar_t__ tx_data_count; TYPE_3__* tx_urb; void** rx_data; TYPE_2__** rx_urb; int serial_lock; int magic; TYPE_4__* parent; int port; } ;
struct TYPE_8__ {TYPE_1__* interface; int dev; } ;
struct TYPE_7__ {scalar_t__ transfer_buffer_length; int * transfer_buffer; } ;
struct TYPE_6__ {scalar_t__ transfer_buffer_length; int * transfer_buffer; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct hso_serial*) ;
 int VAR_2 ;
 int FUNC_2 (struct hso_serial*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int,int *,TYPE_4__*,int ) ;
 void* FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct hso_serial *VAR_4, int VAR_5,
        int VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;

 FUNC_5(&VAR_4->port);

 VAR_8 = FUNC_0();
 if (VAR_8 < 0)
  goto exit;


 VAR_4->parent->dev = FUNC_6(&VAR_4->port,
   VAR_3, VAR_8, &VAR_4->parent->interface->dev,
   VAR_4->parent, VAR_2);


 VAR_4->minor = VAR_8;
 VAR_4->magic = VAR_1;
 FUNC_4(&VAR_4->serial_lock);
 VAR_4->num_rx_urbs = VAR_5;




 VAR_4->rx_data_length = VAR_6;
 for (VAR_9 = 0; VAR_9 < VAR_4->num_rx_urbs; VAR_9++) {
  VAR_4->rx_urb[VAR_9] = FUNC_7(0, VAR_0);
  if (!VAR_4->rx_urb[VAR_9])
   goto exit;
  VAR_4->rx_urb[VAR_9]->transfer_buffer = ((void*)0);
  VAR_4->rx_urb[VAR_9]->transfer_buffer_length = 0;
  VAR_4->rx_data[VAR_9] = FUNC_3(VAR_4->rx_data_length,
          VAR_0);
  if (!VAR_4->rx_data[VAR_9])
   goto exit;
 }


 VAR_4->tx_urb = FUNC_7(0, VAR_0);
 if (!VAR_4->tx_urb)
  goto exit;
 VAR_4->tx_urb->transfer_buffer = ((void*)0);
 VAR_4->tx_urb->transfer_buffer_length = 0;

 VAR_4->tx_data_count = 0;
 VAR_4->tx_buffer_count = 0;
 VAR_4->tx_data_length = VAR_7;
 VAR_4->tx_data = FUNC_3(VAR_4->tx_data_length, VAR_0);
 if (!VAR_4->tx_data)
  goto exit;

 VAR_4->tx_buffer = FUNC_3(VAR_4->tx_data_length, VAR_0);
 if (!VAR_4->tx_buffer)
  goto exit;

 return 0;
exit:
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 return -1;
}
