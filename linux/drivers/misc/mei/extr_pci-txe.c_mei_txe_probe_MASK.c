
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct mei_txe_hw {int mem_addr; } ;
struct mei_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,struct mei_device*) ;
 int FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct mei_device*) ;
 int FUNC_7 (struct mei_device*) ;
 int FUNC_8 (struct mei_device*,int *) ;
 scalar_t__ FUNC_9 (struct mei_device*) ;
 int FUNC_10 (struct mei_device*) ;
 struct mei_device* FUNC_11 (struct pci_dev*) ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct mei_device*) ;
 scalar_t__ FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,struct mei_device*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int const,int ) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int *,int ,int ,int ,struct mei_device*) ;
 struct mei_txe_hw* FUNC_25 (struct mei_device*) ;

__attribute__((used)) static int FUNC_26(struct pci_dev *VAR_11, const struct pci_device_id *VAR_12)
{
 struct mei_device *VAR_13;
 struct mei_txe_hw *VAR_14;
 const int VAR_15 = FUNC_0(VAR_8) | FUNC_0(VAR_0);
 int VAR_16;


 VAR_16 = FUNC_18(VAR_11);
 if (VAR_16) {
  FUNC_2(&VAR_11->dev, "failed to enable pci device.\n");
  goto end;
 }

 FUNC_17(VAR_11);

 VAR_16 = FUNC_19(VAR_11, VAR_15, VAR_6);
 if (VAR_16) {
  FUNC_2(&VAR_11->dev, "failed to get pci regions.\n");
  goto end;
 }

 VAR_16 = FUNC_15(VAR_11, FUNC_1(36));
 if (VAR_16) {
  VAR_16 = FUNC_15(VAR_11, FUNC_1(32));
  if (VAR_16) {
   FUNC_2(&VAR_11->dev, "No suitable DMA available.\n");
   goto end;
  }
 }


 VAR_13 = FUNC_11(VAR_11);
 if (!VAR_13) {
  VAR_16 = -VAR_3;
  goto end;
 }
 VAR_14 = FUNC_25(VAR_13);
 VAR_14->mem_addr = FUNC_20(VAR_11);

 FUNC_14(VAR_11);


 FUNC_6(VAR_13);


 if (FUNC_13(VAR_11))
  VAR_16 = FUNC_24(VAR_11->irq,
   ((void*)0),
   VAR_10,
   VAR_4, VAR_6, VAR_13);
 else
  VAR_16 = FUNC_24(VAR_11->irq,
   VAR_9,
   VAR_10,
   VAR_5, VAR_6, VAR_13);
 if (VAR_16) {
  FUNC_2(&VAR_11->dev, "mei: request_threaded_irq failure. irq = %d\n",
   VAR_11->irq);
  goto end;
 }

 if (FUNC_9(VAR_13)) {
  FUNC_2(&VAR_11->dev, "init hw failure.\n");
  VAR_16 = -VAR_2;
  goto release_irq;
 }

 FUNC_22(&VAR_11->dev, VAR_7);
 FUNC_23(&VAR_11->dev);

 VAR_16 = FUNC_8(VAR_13, &VAR_11->dev);
 if (VAR_16)
  goto stop;

 FUNC_16(VAR_11, VAR_13);





 FUNC_3(&VAR_11->dev, VAR_1);
 FUNC_12(VAR_13);

 FUNC_21(&VAR_11->dev);

 return 0;

stop:
 FUNC_10(VAR_13);
release_irq:
 FUNC_5(VAR_13);
 FUNC_7(VAR_13);
 FUNC_4(VAR_11->irq, VAR_13);
end:
 FUNC_2(&VAR_11->dev, "initialization failed.\n");
 return VAR_16;
}
