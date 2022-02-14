
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmacdma {int * sbdma_ctxtable; int * sbdma_dscrtable; int * sbdma_dscrtable_unaligned; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sbmacdma *VAR_0)
{
 FUNC_0(VAR_0->sbdma_dscrtable_unaligned);
 VAR_0->sbdma_dscrtable_unaligned = VAR_0->sbdma_dscrtable = ((void*)0);

 FUNC_0(VAR_0->sbdma_ctxtable);
 VAR_0->sbdma_ctxtable = ((void*)0);
}
