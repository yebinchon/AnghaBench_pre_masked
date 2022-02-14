
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pv_minor; int pv_major; } ;
struct TYPE_3__ {int pv_minor; int pv_major; } ;
struct dlm_query_join_request {int node_map; TYPE_2__ fs_proto; TYPE_1__ dlm_proto; int name_len; int domain; int node_idx; } ;
struct dlm_query_join_packet {int code; int fs_minor; int dlm_minor; } ;
struct dlm_ctxt {TYPE_2__ fs_locking_proto; TYPE_1__ dlm_locking_proto; int live_nodes_map; int name; int node_num; } ;
typedef int join_msg ;
typedef enum dlm_query_join_response_code { ____Placeholder_dlm_query_join_response_code } dlm_query_join_response_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,struct dlm_query_join_packet*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct dlm_query_join_request*,int ,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int ,int ,struct dlm_query_join_request*,int,int,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dlm_ctxt *VAR_8,
       int VAR_9,
       enum dlm_query_join_response_code *VAR_10)
{
 int VAR_11;
 struct dlm_query_join_request VAR_12;
 struct dlm_query_join_packet VAR_13;
 u32 VAR_14;

 FUNC_4(0, "querying node %d\n", VAR_9);

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.node_idx = VAR_8->node_num;
 VAR_12.name_len = FUNC_6(VAR_8->name);
 FUNC_2(VAR_12.domain, VAR_8->name, VAR_12.name_len);
 VAR_12.dlm_proto = VAR_8->dlm_locking_proto;
 VAR_12.fs_proto = VAR_8->fs_locking_proto;


 FUNC_0(VAR_12.node_map, VAR_8->live_nodes_map, VAR_7);

 VAR_11 = FUNC_5(VAR_1, VAR_0, &VAR_12,
        sizeof(VAR_12), VAR_9, &VAR_14);
 if (VAR_11 < 0 && VAR_11 != -VAR_3) {
  FUNC_4(VAR_5, "Error %d when sending message %u (key 0x%x) to "
       "node %u\n", VAR_11, VAR_1, VAR_0,
       VAR_9);
  goto bail;
 }
 FUNC_1(VAR_14, &VAR_13);





 if (VAR_11 == -VAR_3) {
  VAR_11 = 0;
  *VAR_10 = 129;
 } else {
  *VAR_10 = VAR_13.code;
  switch (VAR_13.code) {
  case 131:
  case 129:
   break;
  case 128:
   FUNC_4(VAR_6,
        "This node requested DLM locking protocol %u.%u and "
        "filesystem locking protocol %u.%u.  At least one of "
        "the protocol versions on node %d is not compatible, "
        "disconnecting\n",
        VAR_8->dlm_locking_proto.pv_major,
        VAR_8->dlm_locking_proto.pv_minor,
        VAR_8->fs_locking_proto.pv_major,
        VAR_8->fs_locking_proto.pv_minor,
        VAR_9);
   VAR_11 = -VAR_4;
   break;
  case 130:

   VAR_8->dlm_locking_proto.pv_minor = VAR_13.dlm_minor;
   VAR_8->fs_locking_proto.pv_minor = VAR_13.fs_minor;
   FUNC_4(0,
        "Node %d responds JOIN_OK with DLM locking protocol "
        "%u.%u and fs locking protocol %u.%u\n",
        VAR_9,
        VAR_8->dlm_locking_proto.pv_major,
        VAR_8->dlm_locking_proto.pv_minor,
        VAR_8->fs_locking_proto.pv_major,
        VAR_8->fs_locking_proto.pv_minor);
   break;
  default:
   VAR_11 = -VAR_2;
   FUNC_4(VAR_5, "invalid response %d from node %u\n",
        VAR_13.code, VAR_9);

   *VAR_10 = 131;
   break;
  }
 }

 FUNC_4(0, "status %d, node %d response is %d\n", VAR_11, VAR_9,
      *VAR_10);

bail:
 return VAR_11;
}
