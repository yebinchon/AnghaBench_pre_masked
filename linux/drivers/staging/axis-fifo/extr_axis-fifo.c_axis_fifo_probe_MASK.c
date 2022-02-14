
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; } ;
struct device {int kobj; } ;
struct platform_device {struct device dev; } ;
struct axis_fifo {unsigned int rx_fifo_depth; unsigned int tx_fifo_depth; unsigned int has_rx_fifo; unsigned int has_tx_fifo; struct resource* mem; int base_addr; int irq; int devt; int char_device; struct device* dt_device; struct device* device; int write_queue_lock; int read_queue_lock; int write_queue; int read_queue; } ;
typedef int device_name ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *,int ,int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct device*,char*,char*,...) ;
 int FUNC_9 (struct device*,char*,...) ;
 int FUNC_10 (struct device*,char*,int *,int *,int ,int *,int *) ;
 int FUNC_11 (struct device*,struct axis_fifo*) ;
 struct device* FUNC_12 (int ,int *,int ,int *,char*) ;
 int FUNC_13 (int ,int ) ;
 struct axis_fifo* FUNC_14 (struct device*,int,int ) ;
 int VAR_11 ;
 int FUNC_15 (int ,struct axis_fifo*) ;
 int FUNC_16 (struct axis_fifo*,char*,unsigned int*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int *,int ,char*,struct axis_fifo*) ;
 int FUNC_23 (int ,int ,char*) ;
 int FUNC_24 (struct axis_fifo*) ;
 int FUNC_25 (struct resource*) ;
 int FUNC_26 (char*,int,char*,char*,int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,int *) ;
 int FUNC_29 (int ,int) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_12)
{
 struct resource *VAR_13;
 struct resource *VAR_14;
 struct device *VAR_15 = &VAR_12->dev;
 struct axis_fifo *VAR_16 = ((void*)0);

 char VAR_17[32];

 int VAR_18 = 0;


 unsigned int VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;
 unsigned int VAR_27;
 unsigned int VAR_28;
 unsigned int VAR_29;
 unsigned int VAR_30;
 unsigned int VAR_31;
 unsigned int VAR_32;
 unsigned int VAR_33;
 unsigned int VAR_34;
 unsigned int VAR_35;
 unsigned int VAR_36;
 unsigned int VAR_37;
 unsigned int VAR_38;
 unsigned int VAR_39;
 unsigned int VAR_40;
 unsigned int VAR_41;
 unsigned int VAR_42;
 unsigned int VAR_43;
 unsigned int VAR_44;







 VAR_16 = FUNC_14(VAR_15, sizeof(*VAR_16), VAR_5);
 if (!VAR_16)
  return -VAR_4;

 FUNC_11(VAR_15, VAR_16);
 VAR_16->dt_device = VAR_15;

 FUNC_17(&VAR_16->read_queue);
 FUNC_17(&VAR_16->write_queue);

 FUNC_27(&VAR_16->read_queue_lock);
 FUNC_27(&VAR_16->write_queue_lock);







 VAR_14 = FUNC_20(VAR_12, VAR_7, 0);
 if (!VAR_14) {
  FUNC_9(VAR_16->dt_device, "invalid address\n");
  VAR_18 = -VAR_3;
  goto err_initial;
 }

 VAR_16->mem = VAR_14;


 if (!FUNC_23(VAR_16->mem->start, FUNC_25(VAR_16->mem),
    VAR_0)) {
  FUNC_9(VAR_16->dt_device,
   "couldn't lock memory region at 0x%pa\n",
   &VAR_16->mem->start);
  VAR_18 = -VAR_1;
  goto err_initial;
 }
 FUNC_8(VAR_16->dt_device, "got memory location [0x%pa - 0x%pa]\n",
  &VAR_16->mem->start, &VAR_16->mem->end);


 VAR_16->base_addr = FUNC_18(VAR_16->mem->start, FUNC_25(VAR_16->mem));
 if (!VAR_16->base_addr) {
  FUNC_9(VAR_16->dt_device, "couldn't map physical memory\n");
  VAR_18 = -VAR_4;
  goto err_mem;
 }
 FUNC_8(VAR_16->dt_device, "remapped memory to 0x%p\n", VAR_16->base_addr);


 FUNC_26(VAR_17, sizeof(VAR_17), "%s_%pa",
   VAR_0, &VAR_16->mem->start);

 FUNC_8(VAR_16->dt_device, "device name [%s]\n", VAR_17);







 VAR_18 = FUNC_16(VAR_16, "xlnx,axi-str-rxd-tdata-width",
         &VAR_19);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,axi-str-txc-tdata-width",
         &VAR_20);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,axi-str-txd-tdata-width",
         &VAR_21);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,axis-tdest-width", &VAR_22);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,axis-tid-width", &VAR_23);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,axis-tuser-width", &VAR_24);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,data-interface-type",
         &VAR_25);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,has-axis-tdest", &VAR_26);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,has-axis-tid", &VAR_27);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,has-axis-tkeep", &VAR_28);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,has-axis-tstrb", &VAR_29);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,has-axis-tuser", &VAR_30);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,rx-fifo-depth", &VAR_31);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,rx-fifo-pe-threshold",
         &VAR_32);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,rx-fifo-pf-threshold",
         &VAR_33);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,s-axi-id-width", &VAR_34);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,s-axi4-data-width", &VAR_35);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,select-xpm", &VAR_36);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,tx-fifo-depth", &VAR_37);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,tx-fifo-pe-threshold",
         &VAR_38);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,tx-fifo-pf-threshold",
         &VAR_39);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,use-rx-cut-through",
         &VAR_40);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,use-rx-data", &VAR_41);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,use-tx-ctrl", &VAR_42);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,use-tx-cut-through",
         &VAR_43);
 if (VAR_18)
  goto err_unmap;
 VAR_18 = FUNC_16(VAR_16, "xlnx,use-tx-data", &VAR_44);
 if (VAR_18)
  goto err_unmap;


 if (VAR_19 != 32) {
  FUNC_9(VAR_16->dt_device,
   "rxd_tdata_width width [%u] unsupported\n",
   VAR_19);
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 if (VAR_21 != 32) {
  FUNC_9(VAR_16->dt_device,
   "txd_tdata_width width [%u] unsupported\n",
   VAR_21);
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 if (VAR_26) {
  FUNC_9(VAR_16->dt_device, "tdest not supported\n");
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 if (VAR_27) {
  FUNC_9(VAR_16->dt_device, "tid not supported\n");
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 if (VAR_28) {
  FUNC_9(VAR_16->dt_device, "tkeep not supported\n");
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 if (VAR_29) {
  FUNC_9(VAR_16->dt_device, "tstrb not supported\n");
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 if (VAR_30) {
  FUNC_9(VAR_16->dt_device, "tuser not supported\n");
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 if (VAR_40) {
  FUNC_9(VAR_16->dt_device, "rx cut-through not supported\n");
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 if (VAR_43) {
  FUNC_9(VAR_16->dt_device, "tx cut-through not supported\n");
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 if (VAR_42) {
  FUNC_9(VAR_16->dt_device, "tx control not supported\n");
  VAR_18 = -VAR_2;
  goto err_unmap;
 }
 VAR_16->rx_fifo_depth = VAR_31;

 VAR_16->tx_fifo_depth = VAR_37 - 4;
 VAR_16->has_rx_fifo = VAR_41;
 VAR_16->has_tx_fifo = VAR_44;

 FUNC_24(VAR_16);







 VAR_13 = FUNC_20(VAR_12, VAR_6, 0);
 if (!VAR_13) {
  FUNC_9(VAR_16->dt_device, "no IRQ found for 0x%pa\n",
   &VAR_16->mem->start);
  VAR_18 = -VAR_2;
  goto err_unmap;
 }


 VAR_16->irq = VAR_13->start;
 VAR_18 = FUNC_22(VAR_16->irq, &VAR_10, 0, VAR_0, VAR_16);
 if (VAR_18) {
  FUNC_9(VAR_16->dt_device, "couldn't allocate interrupt %i\n",
   VAR_16->irq);
  goto err_unmap;
 }







 VAR_18 = FUNC_4(&VAR_16->devt, 0, 1, VAR_0);
 if (VAR_18 < 0)
  goto err_irq;
 FUNC_8(VAR_16->dt_device, "allocated device number major %i minor %i\n",
  FUNC_1(VAR_16->devt), FUNC_2(VAR_16->devt));


 VAR_16->device = FUNC_12(VAR_9, ((void*)0), VAR_16->devt,
         ((void*)0), VAR_17);
 if (FUNC_0(VAR_16->device)) {
  FUNC_9(VAR_16->dt_device,
   "couldn't create driver file\n");
  VAR_18 = FUNC_3(VAR_16->device);
  goto err_chrdev_region;
 }
 FUNC_11(VAR_16->device, VAR_16);


 FUNC_7(&VAR_16->char_device, &VAR_11);
 VAR_18 = FUNC_5(&VAR_16->char_device, VAR_16->devt, 1);
 if (VAR_18 < 0) {
  FUNC_9(VAR_16->dt_device, "couldn't create character device\n");
  goto err_dev;
 }


 VAR_18 = FUNC_28(&VAR_16->device->kobj, &VAR_8);
 if (VAR_18 < 0) {
  FUNC_9(VAR_16->dt_device, "couldn't register sysfs group\n");
  goto err_cdev;
 }

 FUNC_10(VAR_16->dt_device, "axis-fifo created at %pa mapped to 0x%pa, irq=%i, major=%i, minor=%i\n",
   &VAR_16->mem->start, &VAR_16->base_addr, VAR_16->irq,
   FUNC_1(VAR_16->devt), FUNC_2(VAR_16->devt));

 return 0;

err_cdev:
 FUNC_6(&VAR_16->char_device);
err_dev:
 FUNC_13(VAR_9, VAR_16->devt);
err_chrdev_region:
 FUNC_29(VAR_16->devt, 1);
err_irq:
 FUNC_15(VAR_16->irq, VAR_16);
err_unmap:
 FUNC_19(VAR_16->base_addr);
err_mem:
 FUNC_21(VAR_16->mem->start, FUNC_25(VAR_16->mem));
err_initial:
 FUNC_11(VAR_15, ((void*)0));
 return VAR_18;
}
