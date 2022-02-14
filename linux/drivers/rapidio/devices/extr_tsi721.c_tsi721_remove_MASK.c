
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi721_device {int flags; int pdev; scalar_t__ odb_base; scalar_t__ regs; int mport; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tsi721_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct tsi721_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct tsi721_device*) ;
 int FUNC_12 (struct tsi721_device*) ;
 int FUNC_13 (struct tsi721_device*) ;
 int FUNC_14 (struct tsi721_device*) ;
 int FUNC_15 (struct tsi721_device*) ;
 int FUNC_16 (struct tsi721_device*) ;
 int FUNC_17 (struct tsi721_device*) ;
 int FUNC_18 (int ,int *,char*) ;

__attribute__((used)) static void FUNC_19(struct pci_dev *VAR_3)
{
 struct tsi721_device *VAR_4 = FUNC_7(VAR_3);

 FUNC_18(VAR_0, &VAR_3->dev, "enter");

 FUNC_13(VAR_4);
 FUNC_15(VAR_4);
 FUNC_0();
 FUNC_10(&VAR_4->mport);

 FUNC_17(VAR_4);
 FUNC_11(VAR_4);
 FUNC_14(VAR_4);
 FUNC_16(VAR_4);
 FUNC_12(VAR_4);

 if (VAR_4->regs)
  FUNC_1(VAR_4->regs);
 if (VAR_4->odb_base)
  FUNC_1(VAR_4->odb_base);






 FUNC_8(VAR_3);
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 FUNC_9(VAR_3, ((void*)0));
 FUNC_2(VAR_4);
 FUNC_18(VAR_0, &VAR_3->dev, "exit");
}
