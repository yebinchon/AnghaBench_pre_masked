
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_mem {char const* name; int addr; int offs; int size; int internal_addr; int memtype; } ;
struct pci_dev {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_4, int VAR_5, struct uio_mem *VAR_6, const char *VAR_7)
{
 resource_size_t VAR_8 = FUNC_2(VAR_4, VAR_5);
 resource_size_t VAR_9 = FUNC_1(VAR_4, VAR_5);

 VAR_6->name = VAR_7;
 VAR_6->addr = VAR_8 & VAR_1;
 VAR_6->offs = VAR_8 & ~VAR_1;
 if (!VAR_6->addr)
  return -VAR_0;
 VAR_6->size = ((VAR_8 & ~VAR_1) + VAR_9 + VAR_2 - 1) & VAR_1;
 VAR_6->memtype = VAR_3;
 VAR_6->internal_addr = FUNC_0(VAR_4, VAR_5);
 if (!VAR_6->internal_addr)
  return -VAR_0;
 return 0;
}
