
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ hdr_type; int dev_flags; TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3)
{
 if (!FUNC_1(VAR_3->bus) &&
     VAR_3->hdr_type == VAR_2 &&
     !FUNC_0(VAR_3) && FUNC_0(VAR_3->bus->self) &&
     FUNC_2(VAR_3->bus->self) != VAR_1)
  VAR_3->dev_flags |= VAR_0;
}
