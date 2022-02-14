
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_tlb_fault_map {unsigned long* fault_bits; unsigned long* done_bits; } ;
struct gru_state {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 struct gru_tlb_fault_map* FUNC_1 (struct gru_state*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gru_tlb_fault_map*) ;
 int FUNC_4 (struct gru_tlb_fault_map*) ;
 unsigned long FUNC_5 (unsigned long*,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct gru_state *VAR_1,
    struct gru_tlb_fault_map *VAR_2,
    struct gru_tlb_fault_map *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 struct gru_tlb_fault_map *VAR_6;

 VAR_6 = FUNC_1(VAR_1, FUNC_2());
 FUNC_4(VAR_6);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_5 = VAR_6->fault_bits[VAR_4];
  if (VAR_5)
   VAR_5 = FUNC_5(&VAR_6->fault_bits[VAR_4], 0UL);
  VAR_2->fault_bits[VAR_4] = VAR_5;
  VAR_5 = VAR_6->done_bits[VAR_4];
  if (VAR_5)
   VAR_5 = FUNC_5(&VAR_6->done_bits[VAR_4], 0UL);
  VAR_3->fault_bits[VAR_4] = VAR_5;
 }





 FUNC_3(VAR_6);
}
