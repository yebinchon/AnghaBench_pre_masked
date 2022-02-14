
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physdev_pci_device {int devfn; int bus; scalar_t__ seg; } ;
struct physdev_manage_pci {int devfn; int bus; scalar_t__ seg; } ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct physdev_pci_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4)
{
 int VAR_5;
 struct pci_dev *VAR_6 = FUNC_2(VAR_4);

 if (VAR_3) {
  struct physdev_pci_device VAR_7 = {
   .seg = FUNC_1(VAR_6->bus),
   .bus = VAR_6->bus->number,
   .devfn = VAR_6->devfn
  };

  VAR_5 = FUNC_0(VAR_2,
       &VAR_7);
 } else if (FUNC_1(VAR_6->bus))
  VAR_5 = -VAR_0;
 else {
  struct physdev_manage_pci VAR_8 = {
   .bus = VAR_6->bus->number,
   .devfn = VAR_6->devfn
  };

  VAR_5 = FUNC_0(VAR_1,
       &VAR_8);
 }

 return VAR_5;
}
