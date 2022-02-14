
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_5__ {int features; int map_size; scalar_t__ pci_irq; struct pd6729_socket* driver_data; TYPE_1__ dev; int * resource_ops; int * ops; int owner; struct pci_dev* cb_dev; scalar_t__ irq_mask; } ;
struct pd6729_socket {int number; int poll_timer; TYPE_2__ socket; scalar_t__ io_base; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,unsigned long long,scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (scalar_t__,struct pd6729_socket*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 struct pd6729_socket* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct pd6729_socket*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int VAR_14 ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ,char*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,struct pd6729_socket*) ;
 int FUNC_16 (struct pci_dev*,int ,char) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_19 () ;
 int VAR_17 ;
 int FUNC_20 (scalar_t__,int ,int ,char*,struct pd6729_socket*) ;
 int FUNC_21 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_22(struct pci_dev *VAR_18,
          const struct pci_device_id *VAR_19)
{
 int VAR_20, VAR_21, VAR_22;
 u_int VAR_23;
 char VAR_24;
 struct pd6729_socket *VAR_25;

 VAR_25 = FUNC_6(VAR_5, sizeof(struct pd6729_socket),
    VAR_2);
 if (!VAR_25) {
  FUNC_4(&VAR_18->dev, "failed to kzalloc socket.\n");
  return -VAR_1;
 }

 VAR_22 = FUNC_10(VAR_18);
 if (VAR_22) {
  FUNC_4(&VAR_18->dev, "failed to enable pci_device.\n");
  goto err_out_free_mem;
 }

 if (!FUNC_14(VAR_18, 0)) {
  FUNC_4(&VAR_18->dev, "refusing to load the driver as the "
   "io_base is NULL.\n");
  VAR_22 = -VAR_1;
  goto err_out_disable;
 }

 FUNC_3(&VAR_18->dev, "Cirrus PD6729 PCI to PCMCIA Bridge at 0x%llx "
  "on irq %d\n",
  (unsigned long long)FUNC_14(VAR_18, 0), VAR_18->irq);




 FUNC_11(VAR_18, VAR_7, &VAR_24);
 if (!(VAR_24 & VAR_8)) {
  FUNC_1(&VAR_18->dev, "pd6729: Enabling PCI_COMMAND_MEMORY.\n");
  VAR_24 |= VAR_8;
  FUNC_16(VAR_18, VAR_7, VAR_24);
 }

 VAR_22 = FUNC_13(VAR_18, "pd6729");
 if (VAR_22) {
  FUNC_4(&VAR_18->dev, "pci request region failed.\n");
  goto err_out_disable;
 }

 if (VAR_18->irq == VAR_6)
  VAR_12 = 0;

 VAR_23 = FUNC_19();
 if (VAR_12 == 0 && VAR_23 == 0) {
  FUNC_4(&VAR_18->dev, "no ISA interrupt is available.\n");
  VAR_22 = -VAR_0;
  goto err_out_free_res;
 }

 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
  VAR_25[VAR_20].io_base = FUNC_14(VAR_18, 0);
  VAR_25[VAR_20].socket.features |= VAR_9 | VAR_10;
  VAR_25[VAR_20].socket.map_size = 0x1000;
  VAR_25[VAR_20].socket.irq_mask = VAR_23;
  VAR_25[VAR_20].socket.pci_irq = VAR_18->irq;
  VAR_25[VAR_20].socket.cb_dev = VAR_18;
  VAR_25[VAR_20].socket.owner = VAR_11;

  VAR_25[VAR_20].number = VAR_20;

  VAR_25[VAR_20].socket.ops = &VAR_17;
  VAR_25[VAR_20].socket.resource_ops = &VAR_14;
  VAR_25[VAR_20].socket.dev.parent = &VAR_18->dev;
  VAR_25[VAR_20].socket.driver_data = &VAR_25[VAR_20];
 }

 FUNC_15(VAR_18, VAR_25);
 if (VAR_12 == 1) {

  VAR_22 = FUNC_20(VAR_18->irq, VAR_15, VAR_4,
      "pd6729", VAR_25);
  if (VAR_22) {
   FUNC_2(&VAR_18->dev, "Failed to register irq %d\n",
    VAR_18->irq);
   goto err_out_free_res;
  }
 } else {

  FUNC_21(&VAR_25->poll_timer, VAR_16, 0);
  FUNC_8(&VAR_25->poll_timer, VAR_13 + VAR_3);
 }

 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
  VAR_22 = FUNC_17(&VAR_25[VAR_20].socket);
  if (VAR_22) {
   FUNC_4(&VAR_18->dev, "pcmcia_register_socket failed.\n");
   for (VAR_21 = 0; VAR_21 < VAR_20 ; VAR_21++)
    FUNC_18(&VAR_25[VAR_21].socket);
   goto err_out_free_res2;
  }
 }

 return 0;

err_out_free_res2:
 if (VAR_12 == 1)
  FUNC_5(VAR_18->irq, VAR_25);
 else
  FUNC_0(&VAR_25->poll_timer);
err_out_free_res:
 FUNC_12(VAR_18);
err_out_disable:
 FUNC_9(VAR_18);

err_out_free_mem:
 FUNC_7(VAR_25);
 return VAR_22;
}
