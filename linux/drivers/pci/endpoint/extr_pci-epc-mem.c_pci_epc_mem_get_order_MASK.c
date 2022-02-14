
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epc_mem {int page_size; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct pci_epc_mem *VAR_0, size_t VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = FUNC_2(VAR_0->page_size);

 VAR_1--;
 VAR_1 >>= VAR_3;



 VAR_2 = FUNC_1(VAR_1);

 return VAR_2;
}
