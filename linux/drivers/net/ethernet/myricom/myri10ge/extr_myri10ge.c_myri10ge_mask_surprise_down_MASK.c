
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->bus->self;
 int VAR_4;
 u32 VAR_5;

 if (VAR_3 == ((void*)0))
  return;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4) {



  FUNC_1(VAR_3, VAR_4 + VAR_0, &VAR_5);
  VAR_5 |= 0x20;
  FUNC_2(VAR_3, VAR_4 + VAR_0, VAR_5);
 }
}
