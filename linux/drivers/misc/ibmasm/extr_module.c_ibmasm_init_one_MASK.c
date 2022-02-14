
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct service_processor {int number; int base_address; int irq; int * dev; int devname; int dirname; int command_queue; int lock; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; TYPE_1__* bus; int dev; } ;
struct TYPE_2__ {int number; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (struct service_processor*) ;
 int FUNC_6 (struct service_processor*) ;
 int FUNC_7 (struct service_processor*) ;
 int FUNC_8 (struct service_processor*) ;
 int FUNC_9 (struct service_processor*) ;
 int FUNC_10 (struct service_processor*) ;
 int VAR_7 ;
 int FUNC_11 (struct service_processor*) ;
 int FUNC_12 (struct service_processor*) ;
 int FUNC_13 (struct service_processor*,int ) ;
 int FUNC_14 (struct service_processor*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct service_processor*) ;
 struct service_processor* FUNC_17 (int,int ) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*,char*) ;
 int FUNC_23 (struct pci_dev*,void*) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (int ,int ,int ,int ,void*) ;
 int FUNC_26 (int ,int ,char*,...) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int FUNC_28(struct pci_dev *VAR_8, const struct pci_device_id *VAR_9)
{
 int VAR_10;
 struct service_processor *VAR_11;

 if ((VAR_10 = FUNC_19(VAR_8))) {
  FUNC_1(&VAR_8->dev, "Failed to enable PCI device\n");
  return VAR_10;
 }
 if ((VAR_10 = FUNC_22(VAR_8, VAR_0))) {
  FUNC_1(&VAR_8->dev, "Failed to allocate PCI resources\n");
  goto error_resources;
 }

 FUNC_24(VAR_8);

 VAR_11 = FUNC_17(sizeof(struct service_processor), VAR_3);
 if (VAR_11 == ((void*)0)) {
  FUNC_1(&VAR_8->dev, "Failed to allocate memory\n");
  VAR_10 = -VAR_2;
  goto error_kmalloc;
 }

 FUNC_27(&VAR_11->lock);
 FUNC_0(&VAR_11->command_queue);

 FUNC_23(VAR_8, (void *)VAR_11);
 VAR_11->dev = &VAR_8->dev;
 VAR_11->number = VAR_8->bus->number;
 FUNC_26(VAR_11->dirname, VAR_4, "%d", VAR_11->number);
 FUNC_26(VAR_11->devname, VAR_4, "%s%d", VAR_0, VAR_11->number);

 VAR_10 = FUNC_6(VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_11->dev, "Failed to allocate event buffer\n");
  goto error_eventbuffer;
 }

 VAR_10 = FUNC_9(VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_11->dev, "Failed to allocate heartbeat command\n");
  goto error_heartbeat;
 }

 VAR_11->irq = VAR_8->irq;
 VAR_11->base_address = FUNC_20(VAR_8, 0);
 if (!VAR_11->base_address) {
  FUNC_1(VAR_11->dev, "Failed to ioremap pci memory\n");
  VAR_10 = -VAR_1;
  goto error_ioremap;
 }

 VAR_10 = FUNC_25(VAR_11->irq, VAR_7, VAR_5, VAR_11->devname, (void*)VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_11->dev, "Failed to register interrupt handler\n");
  goto error_request_irq;
 }

 FUNC_3(VAR_11->base_address);

 VAR_10 = FUNC_10(VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_11->dev, "Failed to initialize remote queue\n");
  goto error_send_message;
 }

 VAR_10 = FUNC_12(VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_11->dev, "Failed to send driver VPD to service processor\n");
  goto error_send_message;
 }
 VAR_10 = FUNC_13(VAR_11, VAR_6);
 if (VAR_10) {
  FUNC_1(VAR_11->dev, "Failed to send OS state to service processor\n");
  goto error_send_message;
 }
 FUNC_14(VAR_11);

 FUNC_11(VAR_11);

 return 0;

error_send_message:
 FUNC_2(VAR_11->base_address);
 FUNC_7(VAR_11);
 FUNC_4(VAR_11->irq, (void *)VAR_11);
error_request_irq:
 FUNC_15(VAR_11->base_address);
error_ioremap:
 FUNC_8(VAR_11);
error_heartbeat:
 FUNC_5(VAR_11);
error_eventbuffer:
 FUNC_16(VAR_11);
error_kmalloc:
        FUNC_21(VAR_8);
error_resources:
        FUNC_18(VAR_8);

 return VAR_10;
}
