
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_node_iter {int node_map; } ;
struct dlm_lock_resource {int dummy; } ;
struct dlm_ctxt {int node_num; int name; int key; int spinlock; int domain_map; } ;
struct dlm_begin_reco {int node_idx; int dead_node; } ;
typedef int br ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct dlm_lock_resource*) ;
 struct dlm_lock_resource* FUNC_3 (struct dlm_ctxt*,int ,int ) ;
 int FUNC_4 (int ,struct dlm_node_iter*) ;
 int FUNC_5 (struct dlm_node_iter*) ;
 int FUNC_6 (struct dlm_lock_resource*) ;
 int FUNC_7 (struct dlm_begin_reco*,int ,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,struct dlm_begin_reco*,int,int,int*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct dlm_ctxt *VAR_7, u8 VAR_8)
{
 struct dlm_begin_reco VAR_9;
 int VAR_10 = 0;
 struct dlm_node_iter VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_8(0, "%s: dead node is %u\n", VAR_7->name, VAR_8);

 FUNC_12(&VAR_7->spinlock);
 FUNC_4(VAR_7->domain_map, &VAR_11);
 FUNC_13(&VAR_7->spinlock);

 FUNC_0(VAR_8, VAR_11.node_map);

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.node_idx = VAR_7->node_num;
 VAR_9.dead_node = VAR_8;

 while ((VAR_12 = FUNC_5(&VAR_11)) >= 0) {
  VAR_10 = 0;
  if (VAR_12 == VAR_8) {
   FUNC_8(0, "not sending begin reco to dead node "
      "%u\n", VAR_8);
   continue;
  }
  if (VAR_12 == VAR_7->node_num) {
   FUNC_8(0, "not sending begin reco to self\n");
   continue;
  }
retry:
  VAR_10 = -VAR_4;
  FUNC_8(0, "attempting to send begin reco msg to %d\n",
     VAR_12);
  VAR_10 = FUNC_11(VAR_0, VAR_7->key,
      &VAR_9, sizeof(VAR_9), VAR_12, &VAR_13);

  if (VAR_10 >= 0)
   VAR_10 = VAR_13;
  if (FUNC_1(VAR_10)) {


   FUNC_8(VAR_6, "%s: node %u was down when sending "
        "begin reco msg (%d)\n", VAR_7->name, VAR_12, VAR_10);
   VAR_10 = 0;
  }






  if (VAR_10 == -VAR_3 || VAR_10 == VAR_3) {
   FUNC_8(0, "%s: trying to start recovery of node "
        "%u, but node %u is waiting for last recovery "
        "to complete, backoff for a bit\n", VAR_7->name,
        VAR_8, VAR_12);
   FUNC_10(100);
   goto retry;
  }
  if (VAR_10 < 0) {
   struct dlm_lock_resource *VAR_14;



   FUNC_9(VAR_10);
   FUNC_8(VAR_5, "begin reco of dlm %s to node %u "
        "returned %d\n", VAR_7->name, VAR_12, VAR_10);
   VAR_14 = FUNC_3(VAR_7, VAR_1,
       VAR_2);
   if (VAR_14) {
    FUNC_6(VAR_14);
    FUNC_2(VAR_14);
   } else {
    FUNC_8(VAR_5, "recovery lock not found\n");
   }


   FUNC_10(100);
   goto retry;
  }
 }

 return VAR_10;
}
