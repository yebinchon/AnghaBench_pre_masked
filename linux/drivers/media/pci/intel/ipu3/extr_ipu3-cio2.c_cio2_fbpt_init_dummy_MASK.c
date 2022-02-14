
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cio2_device {int dummy_page_bus_addr; int* dummy_lop; int dummy_lop_bus_addr; void* dummy_page; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cio2_device*) ;
 void* FUNC_1 (int *,int,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct cio2_device *VAR_4)
{
 unsigned int VAR_5;

 VAR_4->dummy_page = FUNC_1(&VAR_4->pci_dev->dev,
           VAR_0,
           &VAR_4->dummy_page_bus_addr,
           VAR_2);
 VAR_4->dummy_lop = FUNC_1(&VAR_4->pci_dev->dev,
          VAR_0,
          &VAR_4->dummy_lop_bus_addr,
          VAR_2);
 if (!VAR_4->dummy_page || !VAR_4->dummy_lop) {
  FUNC_0(VAR_4);
  return -VAR_1;
 }




 for (VAR_5 = 0; VAR_5 < VAR_0 / sizeof(*VAR_4->dummy_lop); VAR_5++)
  VAR_4->dummy_lop[VAR_5] = VAR_4->dummy_page_bus_addr >> VAR_3;

 return 0;
}
