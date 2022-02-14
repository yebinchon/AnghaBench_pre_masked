
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device {TYPE_2__* pci_dev; scalar_t__ octeon_id; } ;
struct TYPE_4__ {int devfn; TYPE_1__* bus; } ;
struct TYPE_3__ {int number; } ;


 int FUNC_0 (int ) ;
 struct octeon_device* FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct octeon_device *FUNC_2(struct octeon_device *VAR_0)
{
 struct octeon_device *VAR_1;

 VAR_1 = FUNC_1(VAR_0->octeon_id + 1);

 if (VAR_1 && VAR_1->pci_dev) {
  int VAR_2, VAR_3;

  VAR_2 = VAR_0->pci_dev->bus->number;
  VAR_3 = VAR_1->pci_dev->bus->number;

  if (VAR_2 == VAR_3) {
   int VAR_4, VAR_5;

   VAR_4 = FUNC_0(VAR_0->pci_dev->devfn);
   VAR_5 = FUNC_0(VAR_1->pci_dev->devfn);

   if (VAR_4 == VAR_5)
    return VAR_1;
  }
 }

 return ((void*)0);
}
