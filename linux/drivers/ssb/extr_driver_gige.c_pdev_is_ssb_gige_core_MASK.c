
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* resource; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

bool FUNC_1(struct pci_dev *VAR_1)
{
 if (!VAR_1->resource[0].name)
  return 0;
 return (FUNC_0(VAR_1->resource[0].name, VAR_0) == 0);
}
