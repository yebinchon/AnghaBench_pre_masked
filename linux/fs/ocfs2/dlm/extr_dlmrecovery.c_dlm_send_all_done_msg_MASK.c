
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_reco_data_done {int dead_node; int node_idx; } ;
struct dlm_ctxt {int name; int key; int node_num; } ;
typedef int done_msg ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dlm_reco_data_done*,int ,int) ;
 int FUNC_3 (int ,char*,int ,int,int ,...) ;
 int FUNC_4 (int ,int ,struct dlm_reco_data_done*,int,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct dlm_ctxt *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5, VAR_6;
 struct dlm_reco_data_done VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.node_idx = VAR_2->node_num;
 VAR_7.dead_node = VAR_3;
 FUNC_3(0, "sending DATA DONE message to %u, "
      "my node=%u, dead node=%u\n", VAR_4, VAR_7.node_idx,
      VAR_7.dead_node);

 VAR_5 = FUNC_4(VAR_0, VAR_2->key, &VAR_7,
     sizeof(VAR_7), VAR_4, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_3(VAR_1, "%s: Error %d send RECO_DATA_DONE to node %u "
       "to recover dead node %u\n", VAR_2->name, VAR_5, VAR_4,
       VAR_3);
  if (!FUNC_1(VAR_5)) {
   FUNC_0();
  }
 } else
  VAR_5 = VAR_6;
 return VAR_5;
}
