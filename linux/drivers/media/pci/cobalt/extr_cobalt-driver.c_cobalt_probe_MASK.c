
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int name; int notify; } ;
struct cobalt {int instance; TYPE_1__ v4l2_dev; int * irq_work_queues; struct pci_dev* pci_dev; int hdl_info; int irq_work_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct cobalt*) ;
 int FUNC_4 (struct cobalt*,struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct cobalt*) ;
 int FUNC_6 (struct cobalt*) ;
 int FUNC_7 (struct cobalt*) ;
 int FUNC_8 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct cobalt*) ;
 int VAR_7 ;
 int FUNC_10 (struct cobalt*,struct pci_dev*) ;
 int FUNC_11 (struct cobalt*,int ) ;
 int FUNC_12 (struct cobalt*,int ,int ) ;
 int FUNC_13 (struct cobalt*,int) ;
 int FUNC_14 (struct cobalt*,struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_15 (struct cobalt*) ;
 int FUNC_16 (struct cobalt*) ;
 int FUNC_17 (struct cobalt*) ;
 int VAR_8 ;
 int * FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int VAR_9 ;
 int FUNC_20 (struct cobalt*) ;
 struct cobalt* FUNC_21 (int,int ) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (char*,int) ;
 int FUNC_25 (int ,int,char*,int) ;
 int FUNC_26 (TYPE_1__*,int ,int ,int ,int ,int *) ;
 int FUNC_27 (int *,TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_29(struct pci_dev *VAR_10,
      const struct pci_device_id *VAR_11)
{
 struct cobalt *VAR_12;
 int VAR_13 = 0;
 int VAR_14;


 VAR_14 = FUNC_1(&VAR_5) - 1;

 VAR_12 = FUNC_21(sizeof(struct cobalt), VAR_4);
 if (VAR_12 == ((void*)0))
  return -VAR_3;
 VAR_12->pci_dev = VAR_10;
 VAR_12->instance = VAR_14;

 VAR_13 = FUNC_27(&VAR_10->dev, &VAR_12->v4l2_dev);
 if (VAR_13) {
  FUNC_24("cobalt: v4l2_device_register of card %d failed\n",
    VAR_12->instance);
  FUNC_20(VAR_12);
  return VAR_13;
 }
 FUNC_25(VAR_12->v4l2_dev.name, sizeof(VAR_12->v4l2_dev.name),
   "cobalt-%d", VAR_12->instance);
 VAR_12->v4l2_dev.notify = VAR_7;
 FUNC_8("Initializing card %d\n", VAR_12->instance);

 VAR_12->irq_work_queues =
  FUNC_18(VAR_12->v4l2_dev.name);
 if (VAR_12->irq_work_queues == ((void*)0)) {
  FUNC_2("Could not create workqueue\n");
  VAR_13 = -VAR_3;
  goto err;
 }

 FUNC_0(&VAR_12->irq_work_queue, VAR_6);


 VAR_13 = FUNC_14(VAR_12, VAR_10, VAR_11);
 if (VAR_13 != 0)
  goto err_wq;


 if (FUNC_5(VAR_12))
  FUNC_8("Not able to read the HDL info\n");
 else
  FUNC_8("%s", VAR_12->hdl_info);

 VAR_13 = FUNC_7(VAR_12);
 if (VAR_13)
  goto err_pci;

 FUNC_15(VAR_12);

 VAR_13 = FUNC_17(VAR_12);
 if (VAR_13)
  goto err_i2c;

 if (!(FUNC_11(VAR_12, VAR_2) &
   VAR_0)) {
  VAR_13 = FUNC_16(VAR_12);
  if (VAR_13)
   goto err_i2c;
 }

 VAR_13 = FUNC_9(VAR_12);
 if (VAR_13) {
  FUNC_2("Error %d registering device nodes\n", VAR_13);
  goto err_i2c;
 }
 FUNC_13(VAR_12, 1);
 FUNC_26(&VAR_12->v4l2_dev, 0, VAR_8,
     VAR_9, 0, ((void*)0));

 FUNC_8("Initialized cobalt card\n");

 FUNC_3(VAR_12);

 return 0;

err_i2c:
 FUNC_6(VAR_12);
 FUNC_12(VAR_12, VAR_1, 0);
err_pci:
 FUNC_4(VAR_12, VAR_10);
 FUNC_10(VAR_12, VAR_10);
 FUNC_23(VAR_12->pci_dev);
 FUNC_22(VAR_12->pci_dev);
err_wq:
 FUNC_19(VAR_12->irq_work_queues);
err:
 FUNC_2("error %d on initialization\n", VAR_13);

 FUNC_28(&VAR_12->v4l2_dev);
 FUNC_20(VAR_12);
 return VAR_13;
}
