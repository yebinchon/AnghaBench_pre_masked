
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * parent; } ;
struct TYPE_7__ {int features; int map_size; struct pci_dev* cb_dev; int owner; struct yenta_socket* driver_data; TYPE_1__ dev; int * resource_ops; int * ops; } ;
struct yenta_socket {int base; int poll_timer; scalar_t__ cb_irq; TYPE_2__ socket; TYPE_4__* type; struct pci_dev* dev; } ;
struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int dev; int subordinate; scalar_t__ irq; int subsystem_device; int subsystem_vendor; } ;
struct TYPE_8__ {int (* override ) (struct yenta_socket*) ;} ;


 size_t FUNC_0 (TYPE_4__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_4__* VAR_13 ;
 int FUNC_1 (struct yenta_socket*,int ) ;
 int FUNC_2 (struct yenta_socket*,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_14 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (scalar_t__,struct yenta_socket*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (struct yenta_socket*) ;
 struct yenta_socket* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 int VAR_17 ;
 int FUNC_13 (struct pci_dev*) ;
 scalar_t__ FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,char*) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*,struct yenta_socket*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (scalar_t__,int ,int ,char*,struct yenta_socket*) ;
 int FUNC_22 (struct yenta_socket*) ;
 int FUNC_23 (int *,int ,int ) ;
 int FUNC_24 (struct yenta_socket*) ;
 int FUNC_25 (struct yenta_socket*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct yenta_socket*) ;
 int FUNC_28 (struct yenta_socket*,int ) ;
 int FUNC_29 (struct yenta_socket*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_30(struct pci_dev *VAR_21, const struct pci_device_id *VAR_22)
{
 struct yenta_socket *VAR_23;
 int VAR_24;






 if (!VAR_21->subordinate) {
  FUNC_4(&VAR_21->dev, "no bus associated! (try 'pci=assign-busses')\n");
  return -VAR_4;
 }

 VAR_23 = FUNC_11(sizeof(struct yenta_socket), VAR_6);
 if (!VAR_23)
  return -VAR_5;


 VAR_23->socket.ops = &VAR_20;
 VAR_23->socket.resource_ops = &VAR_17;
 VAR_23->socket.dev.parent = &VAR_21->dev;
 VAR_23->socket.driver_data = VAR_23;
 VAR_23->socket.owner = VAR_12;
 VAR_23->socket.features = VAR_10 | VAR_11;
 VAR_23->socket.map_size = 0x1000;
 VAR_23->socket.cb_dev = VAR_21;


 VAR_23->dev = VAR_21;
 FUNC_18(VAR_21, VAR_23);




 if (FUNC_14(VAR_21)) {
  VAR_24 = -VAR_3;
  goto free;
 }

 VAR_24 = FUNC_16(VAR_21, "yenta_socket");
 if (VAR_24)
  goto disable;

 if (!FUNC_17(VAR_21, 0)) {
  FUNC_4(&VAR_21->dev, "No cardbus resource!\n");
  VAR_24 = -VAR_4;
  goto release;
 }





 VAR_23->base = FUNC_8(FUNC_17(VAR_21, 0), 0x1000);
 if (!VAR_23->base) {
  VAR_24 = -VAR_5;
  goto release;
 }





 FUNC_5(&VAR_21->dev, "CardBus bridge found [%04x:%04x]\n",
   VAR_21->subsystem_vendor, VAR_21->subsystem_device);

 FUNC_25(VAR_23);


 FUNC_2(VAR_23, VAR_1, 0x0);


 FUNC_24(VAR_23);

 VAR_23->cb_irq = VAR_21->irq;


 if (VAR_22->driver_data != VAR_0 &&
     VAR_22->driver_data < FUNC_0(VAR_13)) {
  VAR_23->type = &VAR_13[VAR_22->driver_data];

  VAR_24 = VAR_23->type->override(VAR_23);
  if (VAR_24 < 0)
   goto unmap;
 }



 if (!VAR_23->cb_irq || FUNC_21(VAR_23->cb_irq, VAR_18, VAR_8, "yenta", VAR_23)) {

  VAR_23->cb_irq = 0;
  FUNC_23(&VAR_23->poll_timer, VAR_19, 0);
  FUNC_12(&VAR_23->poll_timer, VAR_16 + VAR_7);
  FUNC_5(&VAR_21->dev,
    "no PCI IRQ, CardBus support disabled for this socket.\n");
  FUNC_5(&VAR_21->dev,
    "check your BIOS CardBus, BIOS IRQ or ACPI settings.\n");
 } else {
  VAR_23->socket.features |= VAR_9;
 }


 FUNC_29(VAR_23);
 FUNC_28(VAR_23, VAR_15);
 FUNC_5(&VAR_21->dev, "Socket status: %08x\n",
   FUNC_1(VAR_23, VAR_2));

 FUNC_26(VAR_21->subordinate);


 VAR_24 = FUNC_19(&VAR_23->socket);
 if (VAR_24)
  goto free_irq;


 VAR_24 = FUNC_6(&VAR_21->dev, &VAR_14);
 if (VAR_24)
  goto unregister_socket;

 return VAR_24;


 unregister_socket:
 FUNC_20(&VAR_23->socket);
 free_irq:
 if (VAR_23->cb_irq)
  FUNC_7(VAR_23->cb_irq, VAR_23);
 else
  FUNC_3(&VAR_23->poll_timer);
 unmap:
 FUNC_9(VAR_23->base);
 FUNC_27(VAR_23);
 release:
 FUNC_15(VAR_21);
 disable:
 FUNC_13(VAR_21);
 free:
 FUNC_18(VAR_21, ((void*)0));
 FUNC_10(VAR_23);
 return VAR_24;
}
