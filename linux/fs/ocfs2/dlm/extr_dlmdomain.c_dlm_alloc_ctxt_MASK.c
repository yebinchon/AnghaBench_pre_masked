
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hlist_head {int dummy; } ;
struct TYPE_2__ {void* dead_node; void* new_master; int event; scalar_t__ state; int node_data; int resources; } ;
struct dlm_ctxt {struct dlm_ctxt* name; struct hlist_head** lockres_hash; struct hlist_head** master_hash; int dlm_refs; int dlm_eviction_callbacks; int dlm_state; int dispatched_work; int work_list; int work_lock; int * mle_cur_count; int * mle_tot_count; int res_cur_count; int res_tot_count; TYPE_1__ reco; scalar_t__ migrate_done; int dlm_join_events; int joining_node; int mle_hb_events; int migration_wq; int ast_wq; int dlm_reco_thread_wq; int dlm_thread_wq; int * dlm_worker; int * dlm_reco_thread_task; int * dlm_thread_task; int * domain_map; int * live_nodes_map; int * recovery_map; int pending_basts; int pending_asts; int tracking_list; int dlm_domain_handlers; int purge_list; int dirty_list; int list; int track_lock; int ast_lock; int master_lock; int spinlock; int node_num; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 void* VAR_7 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct dlm_ctxt*) ;
 int VAR_8 ;
 int FUNC_6 (void**,int ) ;
 int FUNC_7 (struct dlm_ctxt*,int) ;
 int FUNC_8 (struct dlm_ctxt*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct dlm_ctxt*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct dlm_ctxt* FUNC_13 (char const*,int ) ;
 struct dlm_ctxt* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int ,int) ;
 int FUNC_16 (int ,char*,int ,...) ;
 int FUNC_17 (int) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;

__attribute__((used)) static struct dlm_ctxt *FUNC_20(const char *VAR_9,
    u32 VAR_10)
{
 int VAR_11;
 int VAR_12;
 struct dlm_ctxt *VAR_13 = ((void*)0);

 VAR_13 = FUNC_14(sizeof(*VAR_13), VAR_6);
 if (!VAR_13) {
  VAR_12 = -VAR_5;
  FUNC_17(VAR_12);
  goto leave;
 }

 VAR_13->name = FUNC_13(VAR_9, VAR_6);
 if (VAR_13->name == ((void*)0)) {
  VAR_12 = -VAR_5;
  FUNC_17(VAR_12);
  goto leave;
 }

 VAR_13->lockres_hash = (struct hlist_head **)FUNC_4(VAR_2);
 if (!VAR_13->lockres_hash) {
  VAR_12 = -VAR_5;
  FUNC_17(VAR_12);
  goto leave;
 }

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  FUNC_0(FUNC_7(VAR_13, VAR_11));

 VAR_13->master_hash = (struct hlist_head **)
    FUNC_4(VAR_2);
 if (!VAR_13->master_hash) {
  VAR_12 = -VAR_5;
  FUNC_17(VAR_12);
  goto leave;
 }

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  FUNC_0(FUNC_8(VAR_13, VAR_11));

 VAR_13->key = VAR_10;
 VAR_13->node_num = FUNC_18();

 FUNC_5(VAR_13);

 FUNC_19(&VAR_13->spinlock);
 FUNC_19(&VAR_13->master_lock);
 FUNC_19(&VAR_13->ast_lock);
 FUNC_19(&VAR_13->track_lock);
 FUNC_1(&VAR_13->list);
 FUNC_1(&VAR_13->dirty_list);
 FUNC_1(&VAR_13->reco.resources);
 FUNC_1(&VAR_13->reco.node_data);
 FUNC_1(&VAR_13->purge_list);
 FUNC_1(&VAR_13->dlm_domain_handlers);
 FUNC_1(&VAR_13->tracking_list);
 VAR_13->reco.state = 0;

 FUNC_1(&VAR_13->pending_asts);
 FUNC_1(&VAR_13->pending_basts);

 FUNC_16(0, "dlm->recovery_map=%p, &(dlm->recovery_map[0])=%p\n",
    *VAR_13->recovery_map, &(VAR_13->recovery_map[0]));

 FUNC_15(VAR_13->recovery_map, 0, sizeof(VAR_13->recovery_map));
 FUNC_15(VAR_13->live_nodes_map, 0, sizeof(VAR_13->live_nodes_map));
 FUNC_15(VAR_13->domain_map, 0, sizeof(VAR_13->domain_map));

 VAR_13->dlm_thread_task = ((void*)0);
 VAR_13->dlm_reco_thread_task = ((void*)0);
 VAR_13->dlm_worker = ((void*)0);
 FUNC_9(&VAR_13->dlm_thread_wq);
 FUNC_9(&VAR_13->dlm_reco_thread_wq);
 FUNC_9(&VAR_13->reco.event);
 FUNC_9(&VAR_13->ast_wq);
 FUNC_9(&VAR_13->migration_wq);
 FUNC_1(&VAR_13->mle_hb_events);

 VAR_13->joining_node = VAR_3;
 FUNC_9(&VAR_13->dlm_join_events);

 VAR_13->migrate_done = 0;

 VAR_13->reco.new_master = VAR_7;
 VAR_13->reco.dead_node = VAR_7;

 FUNC_3(&VAR_13->res_tot_count, 0);
 FUNC_3(&VAR_13->res_cur_count, 0);
 for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) {
  FUNC_3(&VAR_13->mle_tot_count[VAR_11], 0);
  FUNC_3(&VAR_13->mle_cur_count[VAR_11], 0);
 }

 FUNC_19(&VAR_13->work_lock);
 FUNC_1(&VAR_13->work_list);
 FUNC_2(&VAR_13->dispatched_work, VAR_8);

 FUNC_11(&VAR_13->dlm_refs);
 VAR_13->dlm_state = VAR_0;

 FUNC_1(&VAR_13->dlm_eviction_callbacks);

 FUNC_16(0, "context init: refcount %u\n",
    FUNC_12(&VAR_13->dlm_refs));

 VAR_12 = 0;
leave:
 if (VAR_12 < 0 && VAR_13) {
  if (VAR_13->master_hash)
   FUNC_6((void **)VAR_13->master_hash,
     VAR_2);

  if (VAR_13->lockres_hash)
   FUNC_6((void **)VAR_13->lockres_hash,
     VAR_2);

  FUNC_10(VAR_13->name);
  FUNC_10(VAR_13);
  VAR_13 = ((void*)0);
 }
 return VAR_13;
}
