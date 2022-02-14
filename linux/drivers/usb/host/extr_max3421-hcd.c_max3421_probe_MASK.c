
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int flags; } ;
struct device {struct max3421_hcd_platform_data* platform_data; scalar_t__ of_node; } ;
struct spi_device {int irq; struct device dev; } ;
struct max3421_hcd_platform_data {int vbus_active_level; int vbus_gpout; } ;
struct max3421_hcd {scalar_t__ spi_thread; void* rx; void* tx; int ep_list; struct max3421_hcd* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct max3421_hcd_platform_data*) ;
 struct max3421_hcd_platform_data* FUNC_6 (struct device*,int,int ) ;
 struct max3421_hcd* FUNC_7 (struct usb_hcd*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ,struct usb_hcd*,char*) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_8 ;
 struct max3421_hcd* VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct device*,struct max3421_hcd_platform_data*) ;
 int VAR_11 ;
 int FUNC_13 (int,int ,int ,char*,struct usb_hcd*) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (struct spi_device*) ;
 int FUNC_16 (struct usb_hcd*,int ,int ) ;
 struct usb_hcd* FUNC_17 (int *,struct device*,int ) ;
 int FUNC_18 (struct usb_hcd*) ;

__attribute__((used)) static int
FUNC_19(struct spi_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct max3421_hcd *VAR_14;
 struct usb_hcd *VAR_15 = ((void*)0);
 struct max3421_hcd_platform_data *VAR_16 = ((void*)0);
 int VAR_17 = -VAR_3;

 if (FUNC_15(VAR_12) < 0) {
  FUNC_3(&VAR_12->dev, "Unable to setup SPI bus");
  return -VAR_1;
 }

 if (!VAR_12->irq) {
  FUNC_3(VAR_13, "Failed to get SPI IRQ");
  return -VAR_1;
 }

 if (FUNC_2(VAR_0) && VAR_13->of_node) {
  VAR_16 = FUNC_6(&VAR_12->dev, sizeof(*VAR_16), VAR_4);
  if (!VAR_16) {
   VAR_17 = -VAR_3;
   goto error;
  }
  VAR_17 = FUNC_12(VAR_13, VAR_16);
  if (VAR_17)
   goto error;

  VAR_12->dev.platform_data = VAR_16;
 }

 VAR_16 = VAR_12->dev.platform_data;
 if (!VAR_16) {
  FUNC_3(&VAR_12->dev, "driver configuration data is not provided\n");
  VAR_17 = -VAR_1;
  goto error;
 }
 if (VAR_16->vbus_active_level > 1) {
  FUNC_3(&VAR_12->dev, "vbus active level value %d is out of range (0/1)\n", VAR_16->vbus_active_level);
  VAR_17 = -VAR_2;
  goto error;
 }
 if (VAR_16->vbus_gpout < 1 || VAR_16->vbus_gpout > VAR_7) {
  FUNC_3(&VAR_12->dev, "vbus gpout value %d is out of range (1..8)\n", VAR_16->vbus_gpout);
  VAR_17 = -VAR_2;
  goto error;
 }

 VAR_15 = FUNC_17(&VAR_8, &VAR_12->dev,
        FUNC_4(&VAR_12->dev));
 if (!VAR_15) {
  FUNC_3(&VAR_12->dev, "failed to create HCD structure\n");
  goto error;
 }
 FUNC_14(VAR_5, &VAR_15->flags);
 VAR_14 = FUNC_7(VAR_15);
 VAR_14->next = VAR_9;
 VAR_9 = VAR_14;
 FUNC_1(&VAR_14->ep_list);

 VAR_14->tx = FUNC_9(sizeof(*VAR_14->tx), VAR_4);
 if (!VAR_14->tx)
  goto error;
 VAR_14->rx = FUNC_9(sizeof(*VAR_14->rx), VAR_4);
 if (!VAR_14->rx)
  goto error;

 VAR_14->spi_thread = FUNC_10(VAR_11, VAR_15,
           "max3421_spi_thread");
 if (VAR_14->spi_thread == FUNC_0(-VAR_3)) {
  FUNC_3(&VAR_12->dev,
   "failed to create SPI thread (out of memory)\n");
  goto error;
 }

 VAR_17 = FUNC_16(VAR_15, 0, 0);
 if (VAR_17) {
  FUNC_3(&VAR_12->dev, "failed to add HCD\n");
  goto error;
 }

 VAR_17 = FUNC_13(VAR_12->irq, VAR_10,
        VAR_6, "max3421", VAR_15);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_12->dev, "failed to request irq %d\n", VAR_12->irq);
  goto error;
 }
 return 0;

error:
 if (FUNC_2(VAR_0) && VAR_13->of_node && VAR_16) {
  FUNC_5(&VAR_12->dev, VAR_16);
  VAR_12->dev.platform_data = ((void*)0);
 }

 if (VAR_15) {
  FUNC_8(VAR_14->tx);
  FUNC_8(VAR_14->rx);
  if (VAR_14->spi_thread)
   FUNC_11(VAR_14->spi_thread);
  FUNC_18(VAR_15);
 }
 return VAR_17;
}
