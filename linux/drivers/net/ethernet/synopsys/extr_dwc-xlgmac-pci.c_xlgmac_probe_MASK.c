
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_resources {int addr; int irq; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; int irq; } ;
typedef int res ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct xlgmac_resources*,int ,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int ) ;
 int * FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct device*,struct xlgmac_resources*) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_2, const struct pci_device_id *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 struct xlgmac_resources VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_5(VAR_2);
 if (VAR_7) {
  FUNC_1(VAR_4, "ERROR: failed to enable device\n");
  return VAR_7;
 }

 for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {
  if (FUNC_3(VAR_2, VAR_6) == 0)
   continue;
  VAR_7 = FUNC_6(VAR_2, FUNC_0(VAR_6), VAR_1);
  if (VAR_7)
   return VAR_7;
  break;
 }

 FUNC_4(VAR_2);

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.irq = VAR_2->irq;
 VAR_5.addr = FUNC_7(VAR_2)[VAR_6];

 return FUNC_8(&VAR_2->dev, &VAR_5);
}
