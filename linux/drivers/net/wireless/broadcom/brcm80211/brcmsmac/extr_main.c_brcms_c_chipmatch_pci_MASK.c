
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;
struct bcma_device {TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* host_pci; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct bcma_device *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_9->bus->host_pci;
 u16 VAR_11 = VAR_10->vendor;
 u16 VAR_12 = VAR_10->device;

 if (VAR_11 != VAR_8) {
  FUNC_0("unknown vendor id %04x\n", VAR_11);
  return 0;
 }

 if (VAR_12 == VAR_4 || VAR_12 == VAR_2)
  return 1;
 if ((VAR_12 == VAR_3) || (VAR_12 == VAR_5))
  return 1;
 if (VAR_12 == VAR_1 || VAR_12 == VAR_0)
  return 1;
 if ((VAR_12 == VAR_7) || (VAR_12 == VAR_6))
  return 1;

 FUNC_0("unknown device id %04x\n", VAR_12);
 return 0;
}
