
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta2x11_mfd_setup_data {TYPE_2__* bars; } ;
struct pci_dev {int dummy; } ;
typedef int pdev ;
struct TYPE_4__ {int ncells; TYPE_1__* cells; } ;
struct TYPE_3__ {int pdata_size; struct pci_dev** platform_data; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0,
         struct sta2x11_mfd_setup_data *VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->bars); VAR_2++)
  for (VAR_3 = 0; VAR_3 < VAR_1->bars[VAR_2].ncells; VAR_3++) {
   VAR_1->bars[VAR_2].cells[VAR_3].pdata_size = sizeof(VAR_0);
   VAR_1->bars[VAR_2].cells[VAR_3].platform_data = &VAR_0;
  }
}
