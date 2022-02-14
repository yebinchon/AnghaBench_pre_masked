
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi721_device {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct tsi721_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct tsi721_device*) ;
 int FUNC_4 (struct tsi721_device*) ;
 int FUNC_5 (int ,int *,char*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct tsi721_device *VAR_2 = FUNC_2(VAR_1);

 FUNC_5(VAR_0, &VAR_1->dev, "enter");

 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
