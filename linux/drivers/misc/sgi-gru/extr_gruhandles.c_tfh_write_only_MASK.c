
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_tlb_fault_handle {int fillasid; unsigned long fillvaddr; unsigned long pfn; int gaa; int dirty; int pagesize; int opc; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gru_tlb_fault_handle*) ;
 int VAR_2 ;
 int FUNC_1 (struct gru_tlb_fault_handle*,int ) ;

int FUNC_2(struct gru_tlb_fault_handle *VAR_3,
      unsigned long VAR_4, int VAR_5,
      unsigned long VAR_6, int VAR_7, int VAR_8,
      int VAR_9)
{
 VAR_3->fillasid = VAR_7;
 VAR_3->fillvaddr = VAR_6;
 VAR_3->pfn = VAR_4 >> VAR_0;
 VAR_3->gaa = VAR_5;
 VAR_3->dirty = VAR_8;
 VAR_3->pagesize = VAR_9;
 VAR_3->opc = VAR_1;
 FUNC_0(VAR_3);
 return FUNC_1(VAR_3, VAR_2);
}
