
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; } ;
struct ena_admin_set_feat_resp {int dummy; } ;
struct TYPE_11__ {int enabled_groups; } ;
struct TYPE_12__ {TYPE_5__ aenq; } ;
struct TYPE_10__ {int feature_id; } ;
struct TYPE_9__ {scalar_t__ flags; int opcode; } ;
struct ena_admin_set_feat_cmd {TYPE_6__ u; TYPE_4__ feat_common; TYPE_3__ aq_common_descriptor; } ;
struct TYPE_7__ {int supported_groups; } ;
struct TYPE_8__ {TYPE_1__ aenq; } ;
struct ena_admin_get_feat_resp {TYPE_2__ u; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_1 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,int ) ;
 int FUNC_2 (struct ena_admin_set_feat_cmd*,int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ena_com_dev *VAR_3, u32 VAR_4)
{
 struct ena_com_admin_queue *VAR_5;
 struct ena_admin_set_feat_cmd VAR_6;
 struct ena_admin_set_feat_resp VAR_7;
 struct ena_admin_get_feat_resp VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_3, &VAR_8, VAR_0, 0);
 if (VAR_9) {
  FUNC_4("Can't get aenq configuration\n");
  return VAR_9;
 }

 if ((VAR_8.u.aenq.supported_groups & VAR_4) != VAR_4) {
  FUNC_5("Trying to set unsupported aenq events. supported flag: 0x%x asked flag: 0x%x\n",
   VAR_8.u.aenq.supported_groups, VAR_4);
  return -VAR_2;
 }

 FUNC_2(&VAR_6, 0x0, sizeof(VAR_6));
 VAR_5 = &VAR_3->admin_queue;

 VAR_6.aq_common_descriptor.opcode = VAR_1;
 VAR_6.aq_common_descriptor.flags = 0;
 VAR_6.feat_common.feature_id = VAR_0;
 VAR_6.u.aenq.enabled_groups = VAR_4;

 VAR_9 = FUNC_0(VAR_5,
         (struct ena_admin_aq_entry *)&VAR_6,
         sizeof(VAR_6),
         (struct ena_admin_acq_entry *)&VAR_7,
         sizeof(VAR_7));

 if (FUNC_6(VAR_9))
  FUNC_3("Failed to config AENQ ret: %d\n", VAR_9);

 return VAR_9;
}
