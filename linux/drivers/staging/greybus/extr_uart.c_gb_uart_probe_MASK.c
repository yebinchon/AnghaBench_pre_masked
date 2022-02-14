
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gbphy_device_id {int dummy; } ;
struct gbphy_device {int dev; TYPE_1__* cport_desc; int bundle; } ;
struct gb_uart_send_data_request {int dummy; } ;
struct TYPE_7__ {int * ops; } ;
struct TYPE_6__ {int data_bits; int parity; int format; int rate; } ;
struct gb_tty {size_t buffer_payload_max; int minor; struct gb_tty* buffer; int write_fifo; TYPE_3__ port; TYPE_2__ line_coding; int ctrlout; struct gbphy_device* gbphy_dev; struct gb_connection* connection; int mutex; int wioctl; int read_lock; int write_lock; int credits_complete; int credits; int tx_work; } ;
struct gb_connection {int dummy; } ;
typedef struct gb_connection device ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_tty*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;
 struct gb_connection* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct gb_connection*) ;
 int FUNC_8 (struct gb_connection*) ;
 int FUNC_9 (struct gb_connection*) ;
 int FUNC_10 (struct gb_connection*) ;
 int FUNC_11 (struct gb_connection*,struct gb_tty*) ;
 int FUNC_12 (struct gbphy_device*,struct gb_tty*) ;
 size_t FUNC_13 (struct gb_connection*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (struct gbphy_device*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct gb_tty*) ;
 void* FUNC_20 (int,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct gb_tty*) ;
 int FUNC_24 (struct gb_tty*,int ) ;
 int FUNC_25 (struct gb_tty*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (TYPE_3__*) ;
 struct gb_connection* FUNC_28 (TYPE_3__*,int ,int,int *) ;

__attribute__((used)) static int FUNC_29(struct gbphy_device *VAR_13,
    const struct gbphy_device_id *VAR_14)
{
 struct gb_connection *VAR_15;
 size_t VAR_16;
 struct gb_tty *VAR_17;
 struct device *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_17 = FUNC_20(sizeof(*VAR_17), VAR_8);
 if (!VAR_17)
  return -VAR_2;

 VAR_15 = FUNC_6(VAR_13->bundle,
       FUNC_21(VAR_13->cport_desc->id),
       VAR_11);
 if (FUNC_1(VAR_15)) {
  VAR_19 = FUNC_2(VAR_15);
  goto exit_tty_free;
 }

 VAR_16 = FUNC_13(VAR_15);
 if (VAR_16 < sizeof(struct gb_uart_send_data_request)) {
  VAR_19 = -VAR_0;
  goto exit_connection_destroy;
 }

 VAR_17->buffer_payload_max = VAR_16 -
   sizeof(struct gb_uart_send_data_request);

 VAR_17->buffer = FUNC_20(VAR_17->buffer_payload_max, VAR_8);
 if (!VAR_17->buffer) {
  VAR_19 = -VAR_2;
  goto exit_connection_destroy;
 }

 FUNC_0(&VAR_17->tx_work, VAR_12);

 VAR_19 = FUNC_17(&VAR_17->write_fifo, VAR_7,
        VAR_8);
 if (VAR_19)
  goto exit_buf_free;

 VAR_17->credits = VAR_6;
 FUNC_15(&VAR_17->credits_complete);

 VAR_20 = FUNC_3(VAR_17);
 if (VAR_20 < 0) {
  if (VAR_20 == -VAR_3) {
   FUNC_5(&VAR_13->dev,
    "no more free minor numbers\n");
   VAR_19 = -VAR_1;
  } else {
   VAR_19 = VAR_20;
  }
  goto exit_kfifo_free;
 }

 VAR_17->minor = VAR_20;
 FUNC_26(&VAR_17->write_lock);
 FUNC_26(&VAR_17->read_lock);
 FUNC_16(&VAR_17->wioctl);
 FUNC_22(&VAR_17->mutex);

 FUNC_27(&VAR_17->port);
 VAR_17->port.ops = &VAR_9;

 VAR_17->connection = VAR_15;
 VAR_17->gbphy_dev = VAR_13;
 FUNC_11(VAR_15, VAR_17);
 FUNC_12(VAR_13, VAR_17);

 VAR_19 = FUNC_10(VAR_15);
 if (VAR_19)
  goto exit_release_minor;

 FUNC_24(VAR_17, VAR_17->ctrlout);


 VAR_17->line_coding.rate = FUNC_4(9600);
 VAR_17->line_coding.format = VAR_4;
 VAR_17->line_coding.parity = VAR_5;
 VAR_17->line_coding.data_bits = 8;
 FUNC_25(VAR_17);

 VAR_19 = FUNC_9(VAR_15);
 if (VAR_19)
  goto exit_connection_disable;

 VAR_18 = FUNC_28(&VAR_17->port, VAR_10, VAR_20,
        &VAR_13->dev);
 if (FUNC_1(VAR_18)) {
  VAR_19 = FUNC_2(VAR_18);
  goto exit_connection_disable;
 }

 FUNC_14(VAR_13);
 return 0;

exit_connection_disable:
 FUNC_8(VAR_15);
exit_release_minor:
 FUNC_23(VAR_17);
exit_kfifo_free:
 FUNC_18(&VAR_17->write_fifo);
exit_buf_free:
 FUNC_19(VAR_17->buffer);
exit_connection_destroy:
 FUNC_7(VAR_15);
exit_tty_free:
 FUNC_19(VAR_17);

 return VAR_19;
}
