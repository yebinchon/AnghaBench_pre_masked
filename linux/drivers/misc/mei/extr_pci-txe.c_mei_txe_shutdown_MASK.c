
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; int dev; } ;
struct mei_device {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct mei_device*) ;
 int FUNC_2 (struct mei_device*) ;
 int FUNC_3 (struct mei_device*) ;
 int FUNC_4 (struct mei_device*) ;
 struct mei_device* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct mei_device *VAR_1;

 VAR_1 = FUNC_5(VAR_0);
 if (!VAR_1)
  return;

 FUNC_0(&VAR_0->dev, "shutdown\n");
 FUNC_3(VAR_1);

 FUNC_4(VAR_1);

 FUNC_2(VAR_1);
 FUNC_1(VAR_0->irq, VAR_1);
}
