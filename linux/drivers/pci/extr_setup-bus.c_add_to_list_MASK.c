
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int end; int start; } ;
struct pci_dev_resource {int list; void* min_align; void* add_size; int flags; int end; int start; struct pci_dev* dev; struct resource* res; } ;
struct pci_dev {int dummy; } ;
struct list_head {int dummy; } ;
typedef void* resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev_resource* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_2(struct list_head *VAR_2, struct pci_dev *VAR_3,
         struct resource *VAR_4, resource_size_t VAR_5,
         resource_size_t VAR_6)
{
 struct pci_dev_resource *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->res = VAR_4;
 VAR_7->dev = VAR_3;
 VAR_7->start = VAR_4->start;
 VAR_7->end = VAR_4->end;
 VAR_7->flags = VAR_4->flags;
 VAR_7->add_size = VAR_5;
 VAR_7->min_align = VAR_6;

 FUNC_1(&VAR_7->list, VAR_2);

 return 0;
}
