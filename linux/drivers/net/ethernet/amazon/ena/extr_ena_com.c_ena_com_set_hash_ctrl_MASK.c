
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ena_rss {int hash_ctrl_dma_addr; struct ena_admin_feature_rss_hash_control* hash_ctrl; } ;
struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_rss rss; struct ena_com_admin_queue admin_queue; } ;
struct ena_admin_set_feat_resp {int dummy; } ;
struct TYPE_10__ {int length; int address; } ;
struct TYPE_8__ {int enabled_input_sort; } ;
struct TYPE_9__ {TYPE_3__ flow_hash_input; } ;
struct TYPE_7__ {int feature_id; } ;
struct TYPE_6__ {int flags; int opcode; } ;
struct ena_admin_set_feat_cmd {TYPE_5__ control_buffer; TYPE_4__ u; TYPE_2__ feat_common; TYPE_1__ aq_common_descriptor; } ;
struct ena_admin_feature_rss_hash_control {int dummy; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ena_com_dev*,int ) ;
 int FUNC_1 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_2 (struct ena_com_dev*,int *,int ) ;
 int FUNC_3 (struct ena_admin_set_feat_cmd*,int,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ena_com_dev *VAR_6)
{
 struct ena_com_admin_queue *VAR_7 = &VAR_6->admin_queue;
 struct ena_rss *VAR_8 = &VAR_6->rss;
 struct ena_admin_feature_rss_hash_control *VAR_9 = VAR_8->hash_ctrl;
 struct ena_admin_set_feat_cmd VAR_10;
 struct ena_admin_set_feat_resp VAR_11;
 int VAR_12;

 if (!FUNC_0(VAR_6,
      VAR_3)) {
  FUNC_4("Feature %d isn't supported\n",
    VAR_3);
  return -VAR_5;
 }

 FUNC_3(&VAR_10, 0x0, sizeof(VAR_10));

 VAR_10.aq_common_descriptor.opcode = VAR_4;
 VAR_10.aq_common_descriptor.flags =
  VAR_0;
 VAR_10.feat_common.feature_id = VAR_3;
 VAR_10.u.flow_hash_input.enabled_input_sort =
  VAR_1 |
  VAR_2;

 VAR_12 = FUNC_2(VAR_6,
       &VAR_10.control_buffer.address,
       VAR_8->hash_ctrl_dma_addr);
 if (FUNC_6(VAR_12)) {
  FUNC_5("memory address set failed\n");
  return VAR_12;
 }
 VAR_10.control_buffer.length = sizeof(*VAR_9);

 VAR_12 = FUNC_1(VAR_7,
         (struct ena_admin_aq_entry *)&VAR_10,
         sizeof(VAR_10),
         (struct ena_admin_acq_entry *)&VAR_11,
         sizeof(VAR_11));
 if (FUNC_6(VAR_12))
  FUNC_5("Failed to set hash input. error: %d\n", VAR_12);

 return VAR_12;
}
