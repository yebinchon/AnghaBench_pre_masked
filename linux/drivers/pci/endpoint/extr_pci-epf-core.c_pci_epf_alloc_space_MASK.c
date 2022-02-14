
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_epf {TYPE_3__* bar; TYPE_2__* epc; } ;
struct device {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;
typedef int dma_addr_t ;
struct TYPE_6__ {size_t size; int barno; int flags; int phys_addr; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,size_t,int *,int ) ;
 size_t FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t) ;

void *FUNC_5(struct pci_epf *VAR_3, size_t VAR_4, enum pci_barno VAR_5,
     size_t VAR_6)
{
 void *VAR_7;
 struct device *VAR_8 = VAR_3->epc->dev.parent;
 dma_addr_t VAR_9;

 if (VAR_4 < 128)
  VAR_4 = 128;

 if (VAR_6)
  VAR_4 = FUNC_0(VAR_4, VAR_6);
 else
  VAR_4 = FUNC_3(VAR_4);

 VAR_7 = FUNC_2(VAR_8, VAR_4, &VAR_9, VAR_0);
 if (!VAR_7) {
  FUNC_1(VAR_8, "failed to allocate mem space\n");
  return ((void*)0);
 }

 VAR_3->bar[VAR_5].phys_addr = VAR_9;
 VAR_3->bar[VAR_5].size = VAR_4;
 VAR_3->bar[VAR_5].barno = VAR_5;
 VAR_3->bar[VAR_5].flags |= FUNC_4(VAR_4) ?
    VAR_2 :
    VAR_1;

 return VAR_7;
}
