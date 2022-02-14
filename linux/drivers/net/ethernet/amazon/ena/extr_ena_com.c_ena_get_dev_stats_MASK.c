
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_admin_acq_get_stats_resp {int dummy; } ;
struct TYPE_2__ {scalar_t__ flags; int opcode; } ;
struct ena_admin_aq_get_stats_cmd {int type; TYPE_1__ aq_common_descriptor; } ;
struct ena_com_stats_ctx {struct ena_admin_acq_get_stats_resp get_resp; struct ena_admin_aq_get_stats_cmd get_cmd; } ;
struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;
typedef enum ena_admin_get_stats_type { ____Placeholder_ena_admin_get_stats_type } ena_admin_get_stats_type ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ena_com_dev *VAR_1,
        struct ena_com_stats_ctx *VAR_2,
        enum ena_admin_get_stats_type VAR_3)
{
 struct ena_admin_aq_get_stats_cmd *VAR_4 = &VAR_2->get_cmd;
 struct ena_admin_acq_get_stats_resp *VAR_5 = &VAR_2->get_resp;
 struct ena_com_admin_queue *VAR_6;
 int VAR_7;

 VAR_6 = &VAR_1->admin_queue;

 VAR_4->aq_common_descriptor.opcode = VAR_0;
 VAR_4->aq_common_descriptor.flags = 0;
 VAR_4->type = VAR_3;

 VAR_7 = FUNC_0(VAR_6,
          (struct ena_admin_aq_entry *)VAR_4,
          sizeof(*VAR_4),
          (struct ena_admin_acq_entry *)VAR_5,
          sizeof(*VAR_5));

 if (FUNC_2(VAR_7))
  FUNC_1("Failed to get stats. error: %d\n", VAR_7);

 return VAR_7;
}
