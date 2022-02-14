
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_node_iter {int curnode; } ;
struct dlm_finalize_reco {int node_idx; int flags; int dead_node; } ;
struct TYPE_2__ {int dead_node; } ;
struct dlm_ctxt {int node_num; int key; TYPE_1__ reco; int spinlock; int domain_map; int name; } ;
typedef int fr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct dlm_node_iter*) ;
 int FUNC_2 (struct dlm_node_iter*) ;
 int FUNC_3 (struct dlm_finalize_reco*,int ,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int ,int ,struct dlm_finalize_reco*,int,int,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dlm_ctxt *VAR_3)
{
 int VAR_4 = 0;
 struct dlm_finalize_reco VAR_5;
 struct dlm_node_iter VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 1;

 FUNC_4(0, "finishing recovery for node %s:%u, "
      "stage %d\n", VAR_3->name, VAR_3->reco.dead_node, VAR_9);

 FUNC_6(&VAR_3->spinlock);
 FUNC_1(VAR_3->domain_map, &VAR_6);
 FUNC_7(&VAR_3->spinlock);

stage2:
 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.node_idx = VAR_3->node_num;
 VAR_5.dead_node = VAR_3->reco.dead_node;
 if (VAR_9 == 2)
  VAR_5.flags |= VAR_1;

 while ((VAR_7 = FUNC_2(&VAR_6)) >= 0) {
  if (VAR_7 == VAR_3->node_num)
   continue;
  VAR_4 = FUNC_5(VAR_0, VAR_3->key,
      &VAR_5, sizeof(VAR_5), VAR_7, &VAR_8);
  if (VAR_4 >= 0)
   VAR_4 = VAR_8;
  if (VAR_4 < 0) {
   FUNC_4(VAR_2, "Error %d when sending message %u (key "
        "0x%x) to node %u\n", VAR_4, VAR_0,
        VAR_3->key, VAR_7);
   if (FUNC_0(VAR_4)) {



    FUNC_4(VAR_2, "node %u went down after this "
         "node finished recovery.\n", VAR_7);
    VAR_4 = 0;
    continue;
   }
   break;
  }
 }
 if (VAR_9 == 1) {

  VAR_6.curnode = -1;
  VAR_9 = 2;
  goto stage2;
 }

 return VAR_4;
}
