
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct TYPE_2__ {int socket; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_3)
{
 int VAR_4;

 FUNC_0("i82092aa_pci_remove");

 FUNC_1(VAR_3->irq, VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_3(&VAR_2[VAR_4].socket);

 FUNC_2("i82092aa_pci_remove");
}
