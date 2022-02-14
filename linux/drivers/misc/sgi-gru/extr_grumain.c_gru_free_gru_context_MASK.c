
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_thread_state {size_t ts_ctxnum; int ts_blade; struct gru_state* ts_gru; } ;
struct gru_state {int gs_lock; int gs_context_map; int ** gs_gts; int gs_gid; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct gru_state*,struct gru_thread_state*) ;
 int FUNC_4 (int ,char*,struct gru_thread_state*,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct gru_thread_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (size_t,int *) ;

__attribute__((used)) static void FUNC_9(struct gru_thread_state *VAR_3)
{
 struct gru_state *VAR_4;

 VAR_4 = VAR_3->ts_gru;
 FUNC_4(VAR_2, "gts %p, gid %d\n", VAR_3, VAR_4->gs_gid);

 FUNC_6(&VAR_4->gs_lock);
 VAR_4->gs_gts[VAR_3->ts_ctxnum] = ((void*)0);
 FUNC_3(VAR_4, VAR_3);
 FUNC_0(FUNC_8(VAR_3->ts_ctxnum, &VAR_4->gs_context_map) == 0);
 FUNC_2(VAR_3->ts_ctxnum, &VAR_4->gs_context_map);
 VAR_3->ts_ctxnum = VAR_0;
 VAR_3->ts_gru = ((void*)0);
 VAR_3->ts_blade = -1;
 FUNC_7(&VAR_4->gs_lock);

 FUNC_5(VAR_3);
 FUNC_1(VAR_1);
}
