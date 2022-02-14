
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epc_mem {unsigned long* bitmap; size_t page_size; int pages; size_t size; int phys_base; } ;
struct pci_epc {struct pci_epc_mem* mem; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_1 (size_t) ;
 int FUNC_2 (struct pci_epc_mem*) ;
 void* FUNC_3 (int,int ) ;

int FUNC_4(struct pci_epc *VAR_3, phys_addr_t VAR_4, size_t VAR_5,
         size_t VAR_6)
{
 int VAR_7;
 struct pci_epc_mem *VAR_8;
 unsigned long *VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_6 < VAR_2)
  VAR_6 = VAR_2;

 VAR_10 = FUNC_1(VAR_6);
 VAR_11 = VAR_5 >> VAR_10;
 VAR_12 = FUNC_0(VAR_11) * sizeof(long);

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_9 = FUNC_3(VAR_12, VAR_1);
 if (!VAR_9) {
  VAR_7 = -VAR_0;
  goto err_mem;
 }

 VAR_8->bitmap = VAR_9;
 VAR_8->phys_base = VAR_4;
 VAR_8->page_size = VAR_6;
 VAR_8->pages = VAR_11;
 VAR_8->size = VAR_5;

 VAR_3->mem = VAR_8;

 return 0;

err_mem:
 FUNC_2(VAR_8);

err:
return VAR_7;
}
