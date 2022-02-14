
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int devfn; int bus; } ;
struct physdev_pci_device_add {unsigned long long* optarr; int is_virtfn; int is_extfn; int devfn; int bus; TYPE_1__ physfn; int flags; scalar_t__ seg; } ;
struct physdev_manage_pci_ext {unsigned long long* optarr; int is_virtfn; int is_extfn; int devfn; int bus; TYPE_1__ physfn; int flags; scalar_t__ seg; } ;
struct physdev_manage_pci {unsigned long long* optarr; int is_virtfn; int is_extfn; int devfn; int bus; TYPE_1__ physfn; int flags; scalar_t__ seg; } ;
struct pci_dev {int devfn; struct pci_bus* bus; scalar_t__ is_virtfn; int dev; struct pci_dev* physfn; } ;
struct pci_bus {int number; struct pci_bus* parent; int * bridge; } ;
struct device {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct physdev_pci_device_add*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,char*,int *,unsigned long long*) ;
 int FUNC_5 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct pci_bus*) ;
 scalar_t__ FUNC_7 (struct pci_bus*) ;
 scalar_t__ FUNC_8 (struct pci_bus*) ;
 int VAR_7 ;
 struct pci_dev* FUNC_9 (struct device*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct device *VAR_8)
{
 int VAR_9;
 struct pci_dev *VAR_10 = FUNC_9(VAR_8);
 if (VAR_7) {
  struct {
   struct physdev_pci_device_add add;
   uint32_t pxm;
  } VAR_11 = {
   .add.seg = FUNC_8(VAR_10->bus),
   .add.bus = VAR_10->bus->number,
   .add.devfn = VAR_10->devfn
  };
  struct physdev_pci_device_add *VAR_12 = &VAR_11.add;
  if (FUNC_7(VAR_10->bus) && FUNC_3(VAR_10->devfn))
   VAR_12->flags = VAR_4;
  VAR_9 = FUNC_2(VAR_3, VAR_12);
  if (VAR_9 != -VAR_0)
   return VAR_9;
  VAR_7 = 0;
 }

 if (FUNC_8(VAR_10->bus))
  VAR_9 = -VAR_0;
 else if (FUNC_7(VAR_10->bus) && FUNC_3(VAR_10->devfn)) {
  struct physdev_manage_pci_ext VAR_13 = {
   .bus = VAR_10->bus->number,
   .devfn = VAR_10->devfn,
   .is_extfn = 1,
  };

  VAR_9 = FUNC_2(VAR_2,
   &VAR_13);
 } else {
  struct physdev_manage_pci VAR_14 = {
   .bus = VAR_10->bus->number,
   .devfn = VAR_10->devfn,
  };

  VAR_9 = FUNC_2(VAR_1,
   &VAR_14);
 }

 return VAR_9;
}
