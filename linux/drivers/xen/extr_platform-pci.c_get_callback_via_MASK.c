
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u8 ;
struct pci_dev {int irq; int pin; int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static uint64_t FUNC_1(struct pci_dev *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_3 = VAR_1->irq;
 if (VAR_3 < 16)
  return VAR_3;

 VAR_2 = VAR_1->pin;


 return ((uint64_t)0x01 << VAR_0) |
  ((uint64_t)FUNC_0(VAR_1->bus) << 32) |
  ((uint64_t)VAR_1->bus->number << 16) |
  ((uint64_t)(VAR_1->devfn & 0xff) << 8) |
  ((uint64_t)(VAR_2 - 1) & 3);
}
