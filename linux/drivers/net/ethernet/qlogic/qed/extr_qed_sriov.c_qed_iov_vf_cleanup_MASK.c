
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_vf_queue {TYPE_1__* cids; } ;
struct qed_vf_info {int relative_vf_id; int acquire; int shadow_config; struct qed_vf_queue* vf_queues; scalar_t__ num_active_rxqs; int num_sbs; int num_txqs; int num_rxqs; scalar_t__ configured_features; scalar_t__ vport_instance; scalar_t__ vf_bulletin; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_2__ {int * p_cid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,int *) ;
 int FUNC_2 (struct qed_hwfn*,int ) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_2,
          struct qed_vf_info *VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_3->vf_bulletin = 0;
 VAR_3->vport_instance = 0;
 VAR_3->configured_features = 0;


 VAR_3->num_rxqs = VAR_3->num_sbs;
 VAR_3->num_txqs = VAR_3->num_sbs;

 VAR_3->num_active_rxqs = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct qed_vf_queue *VAR_6 = &VAR_3->vf_queues[VAR_4];

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (!VAR_6->cids[VAR_5].p_cid)
    continue;

   FUNC_1(VAR_2,
        VAR_6->cids[VAR_5].p_cid);
   VAR_6->cids[VAR_5].p_cid = ((void*)0);
  }
 }

 FUNC_0(&VAR_3->shadow_config, 0, sizeof(VAR_3->shadow_config));
 FUNC_0(&VAR_3->acquire, 0, sizeof(VAR_3->acquire));
 FUNC_2(VAR_2, VAR_3->relative_vf_id);
}
