
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {int ts_ctxnum; struct gru_mm_struct* ts_gms; } ;
struct gru_state {size_t gs_gid; int gs_asid_lock; } ;
struct gru_mm_tracker {unsigned short mt_ctxbitmap; } ;
struct gru_mm_struct {int ms_asid_lock; int * ms_asidmap; struct gru_mm_tracker* ms_asids; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,size_t,struct gru_thread_state*,struct gru_mm_struct*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gru_state *VAR_1,
     struct gru_thread_state *VAR_2)
{
 struct gru_mm_struct *VAR_3 = VAR_2->ts_gms;
 struct gru_mm_tracker *VAR_4;
 unsigned short VAR_5;

 VAR_4 = &VAR_3->ms_asids[VAR_1->gs_gid];
 VAR_5 = (1 << VAR_2->ts_ctxnum);
 FUNC_2(&VAR_3->ms_asid_lock);
 FUNC_2(&VAR_1->gs_asid_lock);
 FUNC_0((VAR_4->mt_ctxbitmap & VAR_5) != VAR_5);
 VAR_4->mt_ctxbitmap ^= VAR_5;
 FUNC_1(VAR_0, "gid %d, gts %p, gms %p, ctxnum %d, asidmap 0x%lx\n",
  VAR_1->gs_gid, VAR_2, VAR_3, VAR_2->ts_ctxnum, VAR_3->ms_asidmap[0]);
 FUNC_3(&VAR_1->gs_asid_lock);
 FUNC_3(&VAR_3->ms_asid_lock);
}
