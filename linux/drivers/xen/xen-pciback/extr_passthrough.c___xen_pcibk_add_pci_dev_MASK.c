
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {struct passthrough_dev_data* pci_dev_data; } ;
struct pci_dev_entry {int list; struct pci_dev* dev; } ;
struct pci_dev {unsigned int devfn; TYPE_1__* bus; } ;
struct passthrough_dev_data {int lock; int dev_list; } ;
typedef int (* publish_pci_dev_cb ) (struct xen_pcibk_device*,unsigned int,unsigned int,unsigned int,int) ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct xen_pcibk_device *VAR_2,
       struct pci_dev *VAR_3,
       int VAR_4, publish_pci_dev_cb VAR_5)
{
 struct passthrough_dev_data *VAR_6 = VAR_2->pci_dev_data;
 struct pci_dev_entry *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->dev = VAR_3;

 FUNC_2(&VAR_6->lock);
 FUNC_1(&VAR_7->list, &VAR_6->dev_list);
 FUNC_3(&VAR_6->lock);


 VAR_8 = (unsigned int)FUNC_4(VAR_3->bus);
 VAR_9 = (unsigned int)VAR_3->bus->number;
 VAR_10 = VAR_3->devfn;
 VAR_11 = VAR_5(VAR_2, VAR_8, VAR_9, VAR_10, VAR_4);

 return VAR_11;
}
