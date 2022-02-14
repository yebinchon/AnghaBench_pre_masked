
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_dev_resource {int min_align; } ;
struct list_head {int dummy; } ;
typedef int resource_size_t ;


 struct pci_dev_resource* FUNC_0 (struct list_head*,struct resource*) ;

__attribute__((used)) static resource_size_t FUNC_1(struct list_head *VAR_0,
      struct resource *VAR_1)
{
 struct pci_dev_resource *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2 ? VAR_2->min_align : 0;
}
