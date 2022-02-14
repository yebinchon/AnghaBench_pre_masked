
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_tlb_fault_handle {int fillasid; unsigned long fillvaddr; unsigned long pfn; int gaa; int dirty; int pagesize; int opc; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gru_tlb_fault_handle*) ;

void FUNC_1(struct gru_tlb_fault_handle *VAR_2,
         unsigned long VAR_3, int VAR_4,
         unsigned long VAR_5, int VAR_6, int VAR_7,
         int VAR_8)
{
 VAR_2->fillasid = VAR_6;
 VAR_2->fillvaddr = VAR_5;
 VAR_2->pfn = VAR_3 >> VAR_0;
 VAR_2->gaa = VAR_4;
 VAR_2->dirty = VAR_7;
 VAR_2->pagesize = VAR_8;
 VAR_2->opc = VAR_1;
 FUNC_0(VAR_2);
}
