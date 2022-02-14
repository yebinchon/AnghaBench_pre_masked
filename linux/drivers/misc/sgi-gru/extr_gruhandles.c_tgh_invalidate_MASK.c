
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_tlb_global_handle {unsigned long vaddr; int asid; int pagesize; int n; int global; unsigned long vaddrmask; unsigned short ctxbitmap; int opc; } ;


 int VAR_0 ;
 int FUNC_0 (struct gru_tlb_global_handle*) ;
 int VAR_1 ;
 int FUNC_1 (struct gru_tlb_global_handle*,int ) ;

int FUNC_2(struct gru_tlb_global_handle *VAR_2,
     unsigned long VAR_3, unsigned long VAR_4,
     int VAR_5, int VAR_6, int VAR_7, int VAR_8,
     unsigned short VAR_9)
{
 VAR_2->vaddr = VAR_3;
 VAR_2->asid = VAR_5;
 VAR_2->pagesize = VAR_6;
 VAR_2->n = VAR_8;
 VAR_2->global = VAR_7;
 VAR_2->vaddrmask = VAR_4;
 VAR_2->ctxbitmap = VAR_9;
 VAR_2->opc = VAR_0;
 FUNC_0(VAR_2);
 return FUNC_1(VAR_2, VAR_1);
}
