
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct AdapterControlBlock {int vector_count; } ;


 int FUNC_0 (int ,struct AdapterControlBlock*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0,
  struct AdapterControlBlock *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->vector_count; VAR_2++)
  FUNC_0(FUNC_2(VAR_0, VAR_2), VAR_1);
 FUNC_1(VAR_0);
}
