
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r592_device {int mmio; int io_thread; int dummy_dma_page_physical_address; scalar_t__ dummy_dma_page; int irq; int detect_timer; int pio_fifo; int dma_done; int io_thread_lock; int irq_lock; struct pci_dev* pci_dev; struct memstick_host* host; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct memstick_host {int set_param; int request; int caps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,struct r592_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct r592_device*,char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct memstick_host*) ;
 struct memstick_host* FUNC_13 (int,int *) ;
 int FUNC_14 (struct memstick_host*) ;
 struct r592_device* FUNC_15 (struct memstick_host*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int ) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*,struct r592_device*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct r592_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_25 (struct r592_device*,int ) ;
 int VAR_10 ;
 int FUNC_26 (struct r592_device*) ;
 scalar_t__ FUNC_27 (int ,int *,int ,int ,struct r592_device*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_30(struct pci_dev *VAR_11, const struct pci_device_id *VAR_12)
{
 int VAR_13 = -VAR_1;
 struct memstick_host *VAR_14;
 struct r592_device *VAR_15;


 VAR_14 = FUNC_13(sizeof(struct r592_device), &VAR_11->dev);
 if (!VAR_14)
  goto error1;

 VAR_15 = FUNC_15(VAR_14);
 VAR_15->host = VAR_14;
 VAR_15->pci_dev = VAR_11;
 FUNC_22(VAR_11, VAR_15);


 VAR_13 = FUNC_18(VAR_11);
 if (VAR_13)
  goto error2;

 FUNC_23(VAR_11);
 VAR_13 = FUNC_6(&VAR_11->dev, FUNC_0(32));
 if (VAR_13)
  goto error3;

 VAR_13 = FUNC_21(VAR_11, VAR_0);
 if (VAR_13)
  goto error3;

 VAR_15->mmio = FUNC_19(VAR_11, 0);
 if (!VAR_15->mmio)
  goto error4;

 VAR_15->irq = VAR_11->irq;
 FUNC_28(&VAR_15->irq_lock);
 FUNC_28(&VAR_15->io_thread_lock);
 FUNC_8(&VAR_15->dma_done);
 FUNC_1(VAR_15->pio_fifo);
 FUNC_29(&VAR_15->detect_timer, VAR_6, 0);


 VAR_14->caps = VAR_4;
 VAR_14->request = VAR_10;
 VAR_14->set_param = VAR_9;
 FUNC_24(VAR_15);

 VAR_15->io_thread = FUNC_10(VAR_8, VAR_15, "r592_io");
 if (FUNC_2(VAR_15->io_thread)) {
  VAR_13 = FUNC_3(VAR_15->io_thread);
  goto error5;
 }


 VAR_15->dummy_dma_page = FUNC_4(&VAR_11->dev, VAR_5,
  &VAR_15->dummy_dma_page_physical_address, VAR_2);
 FUNC_25(VAR_15 , 0);

 if (FUNC_27(VAR_15->irq, &VAR_7, VAR_3,
     VAR_0, VAR_15))
  goto error6;

 FUNC_26(VAR_15);
 if (FUNC_12(VAR_14))
  goto error7;

 FUNC_16("driver successfully loaded");
 return 0;
error7:
 FUNC_7(VAR_15->irq, VAR_15);
error6:
 if (VAR_15->dummy_dma_page)
  FUNC_5(&VAR_11->dev, VAR_5, VAR_15->dummy_dma_page,
   VAR_15->dummy_dma_page_physical_address);

 FUNC_11(VAR_15->io_thread);
error5:
 FUNC_9(VAR_15->mmio);
error4:
 FUNC_20(VAR_11);
error3:
 FUNC_17(VAR_11);
error2:
 FUNC_14(VAR_14);
error1:
 return VAR_13;
}
