
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;
struct pci_bus {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_bus*,struct resource*,int ,int ,int ,unsigned long,int (*) (void*,struct resource const*,int ,int ),void*,int *) ;
 int VAR_3 ;

int FUNC_1(struct pci_bus *VAR_4, struct resource *VAR_5,
  resource_size_t VAR_6, resource_size_t VAR_7,
  resource_size_t VAR_8, unsigned long VAR_9,
  resource_size_t (*VAR_10)(void *,
       const struct resource *,
       resource_size_t,
       resource_size_t),
  void *VAR_11)
{
 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_11,
      &VAR_1);
}
