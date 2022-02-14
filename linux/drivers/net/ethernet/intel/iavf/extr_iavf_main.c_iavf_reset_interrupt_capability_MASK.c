
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_adapter {int * msix_entries; int pdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct iavf_adapter *VAR_0)
{
 if (!VAR_0->msix_entries)
  return;

 FUNC_1(VAR_0->pdev);
 FUNC_0(VAR_0->msix_entries);
 VAR_0->msix_entries = ((void*)0);
}
