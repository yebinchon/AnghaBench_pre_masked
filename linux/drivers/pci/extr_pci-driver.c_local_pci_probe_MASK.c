
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int (* probe ) (struct pci_dev*,int ) ;} ;
struct device {int dummy; } ;
struct pci_dev {struct pci_driver* driver; struct device dev; } ;
struct drv_dev_and_id {int id; struct pci_driver* drv; struct pci_dev* dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static long FUNC_4(void *VAR_0)
{
 struct drv_dev_and_id *VAR_1 = VAR_0;
 struct pci_dev *VAR_2 = VAR_1->dev;
 struct pci_driver *VAR_3 = VAR_1->drv;
 struct device *VAR_4 = &VAR_2->dev;
 int VAR_5;
 FUNC_1(VAR_4);
 VAR_2->driver = VAR_3;
 VAR_5 = VAR_3->probe(VAR_2, VAR_1->id);
 if (!VAR_5)
  return VAR_5;
 if (VAR_5 < 0) {
  VAR_2->driver = ((void*)0);
  FUNC_2(VAR_4);
  return VAR_5;
 }




 FUNC_0(VAR_4, "Driver probe function unexpectedly returned %d\n", VAR_5);
 return 0;
}
