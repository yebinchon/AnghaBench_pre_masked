
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; int irq; } ;
struct mei_me_hw {scalar_t__ d0i3_supported; int mem_addr; } ;
struct mei_device {int dummy; } ;
struct mei_cfg {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,struct mei_device*) ;
 int FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_device*) ;
 struct mei_device* FUNC_10 (struct pci_dev*,struct mei_cfg const*) ;
 struct mei_cfg* FUNC_11 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct pci_dev*,struct mei_cfg const*) ;
 int FUNC_13 (struct mei_device*) ;
 scalar_t__ FUNC_14 (struct mei_device*) ;
 int FUNC_15 (struct mei_device*,int *) ;
 scalar_t__ FUNC_16 (struct mei_device*) ;
 int FUNC_17 (struct mei_device*) ;
 scalar_t__ FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,struct mei_device*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*,int ,int ) ;
 int * FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ,int ,int ,unsigned int,int ,struct mei_device*) ;
 struct mei_me_hw* FUNC_30 (struct mei_device*) ;

__attribute__((used)) static int FUNC_31(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 const struct mei_cfg *VAR_11;
 struct mei_device *VAR_12;
 struct mei_me_hw *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_11 = FUNC_11(VAR_10->driver_data);
 if (!VAR_11)
  return -VAR_1;

 if (!FUNC_12(VAR_9, VAR_11))
  return -VAR_1;


 VAR_15 = FUNC_22(VAR_9);
 if (VAR_15) {
  FUNC_3(&VAR_9->dev, "failed to enable pci device.\n");
  goto end;
 }

 FUNC_21(VAR_9);

 VAR_15 = FUNC_23(VAR_9, FUNC_0(0), VAR_5);
 if (VAR_15) {
  FUNC_3(&VAR_9->dev, "failed to get pci regions.\n");
  goto end;
 }

 if (FUNC_6(&VAR_9->dev, FUNC_1(64)) ||
     FUNC_5(&VAR_9->dev, FUNC_1(64))) {

  VAR_15 = FUNC_6(&VAR_9->dev, FUNC_1(32));
  if (VAR_15)
   VAR_15 = FUNC_5(&VAR_9->dev,
          FUNC_1(32));
 }
 if (VAR_15) {
  FUNC_3(&VAR_9->dev, "No usable DMA configuration, aborting\n");
  goto end;
 }


 VAR_12 = FUNC_10(VAR_9, VAR_11);
 if (!VAR_12) {
  VAR_15 = -VAR_2;
  goto end;
 }
 VAR_13 = FUNC_30(VAR_12);
 VAR_13->mem_addr = FUNC_24(VAR_9)[0];

 FUNC_19(VAR_9);


 VAR_14 = FUNC_18(VAR_9) ? VAR_3 : VAR_4;

 VAR_15 = FUNC_29(VAR_9->irq,
   VAR_7,
   VAR_8,
   VAR_14, VAR_5, VAR_12);
 if (VAR_15) {
  FUNC_3(&VAR_9->dev, "request_threaded_irq failure. irq = %d\n",
         VAR_9->irq);
  goto end;
 }

 if (FUNC_16(VAR_12)) {
  FUNC_3(&VAR_9->dev, "init hw failure.\n");
  VAR_15 = -VAR_1;
  goto release_irq;
 }

 FUNC_27(&VAR_9->dev, VAR_6);
 FUNC_28(&VAR_9->dev);

 VAR_15 = FUNC_15(VAR_12, &VAR_9->dev);
 if (VAR_15)
  goto stop;

 FUNC_20(VAR_9, VAR_12);





 FUNC_4(&VAR_9->dev, VAR_0);
 FUNC_13(VAR_12);

 if (FUNC_14(VAR_12)) {
  FUNC_26(&VAR_9->dev);
  if (VAR_13->d0i3_supported)
   FUNC_25(&VAR_9->dev);
 }

 FUNC_2(&VAR_9->dev, "initialization successful.\n");

 return 0;

stop:
 FUNC_17(VAR_12);
release_irq:
 FUNC_8(VAR_12);
 FUNC_9(VAR_12);
 FUNC_7(VAR_9->irq, VAR_12);
end:
 FUNC_3(&VAR_9->dev, "initialization failed.\n");
 return VAR_15;
}
