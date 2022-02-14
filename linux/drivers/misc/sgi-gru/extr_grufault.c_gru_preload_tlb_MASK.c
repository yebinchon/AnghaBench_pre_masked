
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_tlb_fault_handle {int dummy; } ;
struct gru_thread_state {int dummy; } ;
struct gru_state {int gs_gid; } ;
struct gru_control_block_extended {scalar_t__ opccpy; unsigned long cbe_baddr0; unsigned long cbe_src_cl; unsigned long cbe_baddr1; int xtypecpy; int cbe_nelemcur; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,int ,struct gru_thread_state*,struct gru_tlb_fault_handle*,unsigned long,int,int,int,unsigned long) ;
 int FUNC_3 (struct gru_thread_state*,unsigned long,int,int,unsigned long*,int*) ;
 int VAR_5 ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (struct gru_tlb_fault_handle*,unsigned long,int ,unsigned long,int,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct gru_state *VAR_7,
   struct gru_thread_state *VAR_8, int VAR_9,
   unsigned long VAR_10, int VAR_11, int VAR_12,
   unsigned char VAR_13,
   struct gru_tlb_fault_handle *VAR_14,
   struct gru_control_block_extended *VAR_15)
{
 unsigned long VAR_16 = 0, VAR_17;
 int VAR_18, VAR_19;

 if (VAR_15->opccpy != VAR_2)
  return;

 if (VAR_10 == VAR_15->cbe_baddr0)
  VAR_16 = VAR_10 + VAR_1 * VAR_15->cbe_src_cl - 1;
 else if (VAR_10 == VAR_15->cbe_baddr1)
  VAR_16 = VAR_10 + (1 << VAR_15->xtypecpy) * VAR_15->cbe_nelemcur - 1;

 VAR_10 &= VAR_3;
 VAR_16 &= VAR_3;
 VAR_16 = FUNC_4(VAR_16, VAR_10 + VAR_13 * VAR_4);

 while (VAR_16 > VAR_10) {
  VAR_18 = FUNC_3(VAR_8, VAR_16, VAR_12, VAR_9, &VAR_17, &VAR_19);
  if (VAR_18 || FUNC_5(VAR_14, VAR_17, VAR_0, VAR_16, VAR_11, VAR_12,
       FUNC_0(VAR_19)))
   return;
  FUNC_2(VAR_5,
   "%s: gid %d, gts 0x%p, tfh 0x%p, vaddr 0x%lx, asid 0x%x, rw %d, ps %d, gpa 0x%lx\n",
   VAR_9 ? "atomic" : "non-atomic", VAR_7->gs_gid, VAR_8, VAR_14,
   VAR_16, VAR_11, VAR_12, VAR_19, VAR_17);
  VAR_16 -= VAR_4;
  FUNC_1(VAR_6);
 }
}
