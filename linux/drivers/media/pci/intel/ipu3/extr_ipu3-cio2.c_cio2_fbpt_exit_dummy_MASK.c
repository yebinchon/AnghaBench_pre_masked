
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cio2_device {int * dummy_page; int dummy_page_bus_addr; TYPE_1__* pci_dev; int * dummy_lop; int dummy_lop_bus_addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct cio2_device *VAR_1)
{
 if (VAR_1->dummy_lop) {
  FUNC_0(&VAR_1->pci_dev->dev, VAR_0,
      VAR_1->dummy_lop, VAR_1->dummy_lop_bus_addr);
  VAR_1->dummy_lop = ((void*)0);
 }
 if (VAR_1->dummy_page) {
  FUNC_0(&VAR_1->pci_dev->dev, VAR_0,
      VAR_1->dummy_page, VAR_1->dummy_page_bus_addr);
  VAR_1->dummy_page = ((void*)0);
 }
}
