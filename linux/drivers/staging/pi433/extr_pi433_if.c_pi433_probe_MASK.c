
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct spi_device {int mode; int bits_per_word; int dev; int max_speed_hz; } ;
struct pi433_device {int rx_active; int tx_active; int interrupt_rx_allowed; struct pi433_device* rx_buffer; int devt; int * tx_task_struct; TYPE_1__* cdev; int * dev; int minor; int rx_lock; int tx_fifo_lock; int tx_fifo; int fifo_wait_queue; int rx_wait_queue; int tx_wait_queue; struct spi_device* spi; } ;
struct TYPE_5__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *,char*,...) ;
 int * FUNC_10 (int ,int *,int ,struct pi433_device*,char*,int ) ;
 int FUNC_11 (int ,int ) ;
 int VAR_9 ;
 int FUNC_12 (struct pi433_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct pi433_device*) ;
 struct pi433_device* FUNC_15 (int ,int ) ;
 int * FUNC_16 (int ,struct pi433_device*,char*,int ) ;
 int FUNC_17 (int *) ;
 struct pi433_device* FUNC_18 (int,int ) ;
 int FUNC_19 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_20 (struct pi433_device*) ;
 int FUNC_21 (struct pi433_device*) ;
 int VAR_13 ;
 int FUNC_22 (char*) ;
 int FUNC_23 (struct spi_device*,int ) ;
 int FUNC_24 (struct spi_device*,int ) ;
 int FUNC_25 (struct spi_device*,int ) ;
 int FUNC_26 (struct spi_device*,int ) ;
 int FUNC_27 (struct spi_device*,int ) ;
 int FUNC_28 (struct spi_device*,int) ;
 int FUNC_29 (struct pi433_device*) ;
 int FUNC_30 (struct spi_device*,struct pi433_device*) ;
 int FUNC_31 (struct spi_device*) ;
 int FUNC_32 (struct spi_device*,int) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_33(struct spi_device *VAR_15)
{
 struct pi433_device *VAR_16;
 int VAR_17;


 VAR_15->mode = 0x00;
 VAR_15->bits_per_word = 8;





 VAR_17 = FUNC_31(VAR_15);
 if (VAR_17) {
  FUNC_9(&VAR_15->dev, "configuration of SPI interface failed!\n");
  return VAR_17;
 }

 FUNC_9(&VAR_15->dev,
  "spi interface setup: mode 0x%2x, %d bits per word, %dhz max speed",
  VAR_15->mode, VAR_15->bits_per_word, VAR_15->max_speed_hz);


 VAR_17 = FUNC_32(VAR_15, 0x10);
 if (VAR_17 < 0)
  return VAR_17;

 switch (VAR_17) {
 case 0x24:
  FUNC_9(&VAR_15->dev, "found pi433 (ver. 0x%x)", VAR_17);
  break;
 default:
  FUNC_9(&VAR_15->dev, "unknown chip version: 0x%x", VAR_17);
  return -VAR_1;
 }


 VAR_16 = FUNC_18(sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;


 VAR_16->spi = VAR_15;
 VAR_16->rx_active = 0;
 VAR_16->tx_active = 0;
 VAR_16->interrupt_rx_allowed = 0;


 VAR_16->rx_buffer = FUNC_15(VAR_7, VAR_3);
 if (!VAR_16->rx_buffer) {
  VAR_17 = -VAR_2;
  goto RX_failed;
 }


 FUNC_13(&VAR_16->tx_wait_queue);
 FUNC_13(&VAR_16->rx_wait_queue);
 FUNC_13(&VAR_16->fifo_wait_queue);


 FUNC_0(VAR_16->tx_fifo);


 FUNC_19(&VAR_16->tx_fifo_lock);
 FUNC_19(&VAR_16->rx_lock);


 VAR_17 = FUNC_29(VAR_16);
 if (VAR_17) {
  FUNC_9(&VAR_15->dev, "setup of GPIOs failed");
  goto GPIO_failed;
 }


 VAR_17 = FUNC_27(VAR_15, VAR_14);
 if (VAR_17 < 0)
  goto minor_failed;
 VAR_17 = FUNC_26(VAR_15, VAR_0);
 if (VAR_17 < 0)
  goto minor_failed;
 VAR_17 = FUNC_24(VAR_15, VAR_4);
 if (VAR_17 < 0)
  goto minor_failed;
 VAR_17 = FUNC_23(VAR_15, VAR_5);
 if (VAR_17 < 0)
  goto minor_failed;
 VAR_17 = FUNC_23(VAR_15, VAR_6);
 if (VAR_17 < 0)
  goto minor_failed;
 VAR_17 = FUNC_28(VAR_15, 13);
 if (VAR_17 < 0)
  goto minor_failed;
 VAR_17 = FUNC_25(VAR_15, VAR_9);
 if (VAR_17 < 0)
  goto minor_failed;


 VAR_17 = FUNC_21(VAR_16);
 if (VAR_17) {
  FUNC_9(&VAR_15->dev, "get of minor number failed");
  goto minor_failed;
 }


 VAR_16->devt = FUNC_3(FUNC_2(VAR_11), VAR_16->minor);
 VAR_16->dev = FUNC_10(VAR_10,
        &VAR_15->dev,
        VAR_16->devt,
        VAR_16,
        "pi433.%d",
        VAR_16->minor);
 if (FUNC_1(VAR_16->dev)) {
  FUNC_22("pi433: device register failed\n");
  VAR_17 = FUNC_4(VAR_16->dev);
  goto device_create_failed;
 } else {
  FUNC_9(VAR_16->dev,
   "created device for major %d, minor %d\n",
   FUNC_2(VAR_11),
   VAR_16->minor);
 }


 VAR_16->tx_task_struct = FUNC_16(VAR_13,
          VAR_16,
          "pi433.%d_tx_task",
          VAR_16->minor);
 if (FUNC_1(VAR_16->tx_task_struct)) {
  FUNC_9(VAR_16->dev, "start of send thread failed");
  VAR_17 = FUNC_4(VAR_16->tx_task_struct);
  goto send_thread_failed;
 }


 VAR_16->cdev = FUNC_6();
 if (!VAR_16->cdev) {
  FUNC_9(VAR_16->dev, "allocation of cdev failed");
  goto cdev_failed;
 }
 VAR_16->cdev->owner = VAR_8;
 FUNC_8(VAR_16->cdev, &VAR_12);
 VAR_17 = FUNC_5(VAR_16->cdev, VAR_16->devt, 1);
 if (VAR_17) {
  FUNC_9(VAR_16->dev, "register of cdev failed");
  goto del_cdev;
 }


 FUNC_30(VAR_15, VAR_16);

 return 0;

del_cdev:
 FUNC_7(VAR_16->cdev);
cdev_failed:
 FUNC_17(VAR_16->tx_task_struct);
send_thread_failed:
 FUNC_11(VAR_10, VAR_16->devt);
device_create_failed:
 FUNC_20(VAR_16);
minor_failed:
 FUNC_12(VAR_16);
GPIO_failed:
 FUNC_14(VAR_16->rx_buffer);
RX_failed:
 FUNC_14(VAR_16);

 return VAR_17;
}
