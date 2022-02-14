
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;


 int FUNC_0 (int ) ;
 struct device* FUNC_1 (int *,struct device*,void*,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static struct pci_dev *FUNC_5(const struct pci_device_id *VAR_2,
      struct pci_dev *VAR_3)
{
 struct device *VAR_4;
 struct device *VAR_5 = ((void*)0);
 struct pci_dev *VAR_6 = ((void*)0);

 FUNC_0(FUNC_2());
 if (VAR_3)
  VAR_5 = &VAR_3->dev;
 VAR_4 = FUNC_1(&VAR_1, VAR_5, (void *)VAR_2,
         VAR_0);
 if (VAR_4)
  VAR_6 = FUNC_4(VAR_4);
 FUNC_3(VAR_3);
 return VAR_6;
}
