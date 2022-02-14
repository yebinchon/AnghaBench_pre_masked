
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_hba {int * pci_base; int pdev; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int ,int,int *) ;

__attribute__((used)) static void FUNC_1(struct mvumi_hba *VAR_1)
{
 unsigned char VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->pdev, 0x10 + VAR_2 * 4,
      &VAR_1->pci_base[VAR_2]);
 }
}
