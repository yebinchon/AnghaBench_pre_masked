
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int FUNC_0 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

bool FUNC_2(struct pci_dev *VAR_0,
     struct pci_dev *VAR_1, u16 VAR_2)
{
 struct pci_dev *VAR_3, *VAR_4 = VAR_0;

 do {
  VAR_3 = VAR_4;

  if (!FUNC_0(VAR_3, VAR_2))
   return 0;

  if (FUNC_1(VAR_3->bus))
   return (VAR_1 == ((void*)0));

  VAR_4 = VAR_3->bus->self;
 } while (VAR_3 != VAR_1);

 return 1;
}
