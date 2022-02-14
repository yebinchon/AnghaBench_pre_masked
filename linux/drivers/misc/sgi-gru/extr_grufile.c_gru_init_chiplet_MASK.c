
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_state {unsigned long gs_gru_base_paddr; int gs_gid; int gs_blade_id; int gs_chiplet_id; unsigned long gs_cbr_map; unsigned long gs_dsr_map; void* gs_gru_base_vaddr; int gs_asid_limit; int gs_blade; int gs_asid_lock; int gs_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,char*,int,int,void*,unsigned long) ;
 int VAR_5 ;
 int FUNC_1 (struct gru_state*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gru_state *VAR_7, unsigned long VAR_8,
        void *VAR_9, int VAR_10, int VAR_11)
{
 FUNC_2(&VAR_7->gs_lock);
 FUNC_2(&VAR_7->gs_asid_lock);
 VAR_7->gs_gru_base_paddr = VAR_8;
 VAR_7->gs_gru_base_vaddr = VAR_9;
 VAR_7->gs_gid = VAR_10 * VAR_1 + VAR_11;
 VAR_7->gs_blade = VAR_4[VAR_10];
 VAR_7->gs_blade_id = VAR_10;
 VAR_7->gs_chiplet_id = VAR_11;
 VAR_7->gs_cbr_map = (VAR_0 == 64) ? ~0 : (1UL << VAR_0) - 1;
 VAR_7->gs_dsr_map = (1UL << VAR_2) - 1;
 VAR_7->gs_asid_limit = VAR_3;
 FUNC_1(VAR_7);
 if (VAR_7->gs_gid >= VAR_5)
  VAR_5 = VAR_7->gs_gid + 1;
 FUNC_0(VAR_6, "bid %d, gid %d, vaddr %p (0x%lx)\n",
  VAR_10, VAR_7->gs_gid, VAR_7->gs_gru_base_vaddr,
  VAR_7->gs_gru_base_paddr);
}
