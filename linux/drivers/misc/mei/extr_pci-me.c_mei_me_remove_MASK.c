
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
 scalar_t__ FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct mei_device*) ;
 struct mei_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct mei_device *VAR_1;

 VAR_1 = FUNC_7(VAR_0);
 if (!VAR_1)
  return;

 if (FUNC_5(VAR_1))
  FUNC_8(&VAR_0->dev);

 FUNC_0(&VAR_0->dev, "stop\n");
 FUNC_6(VAR_1);

 FUNC_4(VAR_1);

 FUNC_3(VAR_1);

 FUNC_1(VAR_0->irq, VAR_1);

 FUNC_2(VAR_1);
}
