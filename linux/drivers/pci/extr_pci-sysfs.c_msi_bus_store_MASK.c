
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int no_msi; struct pci_bus* subordinate; } ;
struct pci_bus {int dev; int bus_flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (struct pci_dev*,char*,char*) ;
 struct pci_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4, struct device_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_4(VAR_4);
 struct pci_bus *VAR_9 = VAR_8->subordinate;
 unsigned long VAR_10;

 if (FUNC_2(VAR_6, 0, &VAR_10) < 0)
  return -VAR_1;

 if (!FUNC_0(VAR_0))
  return -VAR_2;






 if (!VAR_9) {
  VAR_8->no_msi = !VAR_10;
  FUNC_3(VAR_8, "MSI/MSI-X %s for future drivers\n",
    VAR_10 ? "allowed" : "disallowed");
  return VAR_7;
 }

 if (VAR_10)
  VAR_9->bus_flags &= ~VAR_3;
 else
  VAR_9->bus_flags |= VAR_3;

 FUNC_1(&VAR_9->dev, "MSI/MSI-X %s for future drivers of devices on this bus\n",
   VAR_10 ? "allowed" : "disallowed");
 return VAR_7;
}
