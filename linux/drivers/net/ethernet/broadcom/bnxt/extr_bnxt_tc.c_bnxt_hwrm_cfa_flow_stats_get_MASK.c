
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_cfa_flow_stats_output {int byte_0; int packet_0; } ;
struct hwrm_cfa_flow_stats_input {int num_flows; int flow_id_0; int flow_handle_0; int member_0; } ;
struct TYPE_2__ {void* bytes; void* packets; } ;
struct bnxt_tc_stats_batch {TYPE_1__ hw_stats; struct bnxt_tc_flow_node* flow_node; } ;
struct bnxt_tc_flow_node {int dummy; } ;
struct bnxt {int hwrm_cmd_lock; int dev; } ;
typedef int req ;
typedef int __le64 ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_cfa_flow_stats_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct bnxt_tc_flow_node*,int *,int *) ;
 struct hwrm_cfa_flow_stats_output* FUNC_2 (struct bnxt*,struct hwrm_cfa_flow_stats_input*) ;
 int FUNC_3 (struct bnxt*,struct hwrm_cfa_flow_stats_input*,int ,int,int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_9(struct bnxt *VAR_2, int VAR_3,
        struct bnxt_tc_stats_batch VAR_4[])
{
 struct hwrm_cfa_flow_stats_input VAR_5 = { 0 };
 struct hwrm_cfa_flow_stats_output *VAR_6;
 __le16 *VAR_7 = &VAR_5.flow_handle_0;
 __le32 *VAR_8 = &VAR_5.flow_id_0;
 int VAR_9, VAR_10;

 FUNC_3(VAR_2, &VAR_5, VAR_0, -1, -1);
 VAR_5.num_flows = FUNC_4(VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct bnxt_tc_flow_node *VAR_11 = VAR_4[VAR_10].flow_node;

  FUNC_1(VAR_2, VAR_11,
     &VAR_7[VAR_10], &VAR_8[VAR_10]);
 }

 FUNC_6(&VAR_2->hwrm_cmd_lock);
 VAR_9 = FUNC_0(VAR_2, &VAR_5, sizeof(VAR_5), VAR_1);
 if (!VAR_9) {
  __le64 *VAR_12;
  __le64 *VAR_13;

  VAR_6 = FUNC_2(VAR_2, &VAR_5);
  VAR_12 = &VAR_6->packet_0;
  VAR_13 = &VAR_6->byte_0;

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   VAR_4[VAR_10].hw_stats.packets =
      FUNC_5(VAR_12[VAR_10]);
   VAR_4[VAR_10].hw_stats.bytes =
      FUNC_5(VAR_13[VAR_10]);
  }
 } else {
  FUNC_8(VAR_2->dev, "error rc=%d", VAR_9);
 }
 FUNC_7(&VAR_2->hwrm_cmd_lock);

 return VAR_9;
}
