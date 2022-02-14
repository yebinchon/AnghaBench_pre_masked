
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_com_io_cq {int idx; } ;
struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct TYPE_2__ {int opcode; } ;
struct ena_admin_aq_destroy_cq_cmd {TYPE_1__ aq_common_descriptor; int cq_idx; } ;
struct ena_admin_acq_entry {int dummy; } ;
struct ena_admin_acq_destroy_cq_resp_desc {int dummy; } ;
typedef int destroy_resp ;
typedef int destroy_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_1 (struct ena_admin_aq_destroy_cq_cmd*,int,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ena_com_dev *VAR_2,
     struct ena_com_io_cq *VAR_3)
{
 struct ena_com_admin_queue *VAR_4 = &VAR_2->admin_queue;
 struct ena_admin_aq_destroy_cq_cmd VAR_5;
 struct ena_admin_acq_destroy_cq_resp_desc VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5, 0x0, sizeof(VAR_5));

 VAR_5.cq_idx = VAR_3->idx;
 VAR_5.aq_common_descriptor.opcode = VAR_0;

 VAR_7 = FUNC_0(VAR_4,
         (struct ena_admin_aq_entry *)&VAR_5,
         sizeof(VAR_5),
         (struct ena_admin_acq_entry *)&VAR_6,
         sizeof(VAR_6));

 if (FUNC_3(VAR_7 && (VAR_7 != -VAR_1)))
  FUNC_2("Failed to destroy IO CQ. error: %d\n", VAR_7);

 return VAR_7;
}
