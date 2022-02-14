
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ena_host_attribute {int debug_area_size; int host_info_dma_addr; int debug_area_dma_addr; } ;
struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; struct ena_host_attribute host_attr; } ;
struct ena_admin_set_feat_resp {int dummy; } ;
struct TYPE_7__ {int debug_area_size; int os_info_ba; int debug_ba; } ;
struct TYPE_8__ {TYPE_3__ host_attr; } ;
struct TYPE_6__ {int feature_id; } ;
struct TYPE_5__ {int opcode; } ;
struct ena_admin_set_feat_cmd {TYPE_4__ u; TYPE_2__ feat_common; TYPE_1__ aq_common_descriptor; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_1 (struct ena_com_dev*,int *,int ) ;
 int FUNC_2 (struct ena_admin_set_feat_cmd*,int,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct ena_com_dev *VAR_2)
{
 struct ena_host_attribute *VAR_3 = &VAR_2->host_attr;
 struct ena_com_admin_queue *VAR_4;
 struct ena_admin_set_feat_cmd VAR_5;
 struct ena_admin_set_feat_resp VAR_6;

 int VAR_7;





 FUNC_2(&VAR_5, 0x0, sizeof(VAR_5));
 VAR_4 = &VAR_2->admin_queue;

 VAR_5.aq_common_descriptor.opcode = VAR_1;
 VAR_5.feat_common.feature_id = VAR_0;

 VAR_7 = FUNC_1(VAR_2,
       &VAR_5.u.host_attr.debug_ba,
       VAR_3->debug_area_dma_addr);
 if (FUNC_4(VAR_7)) {
  FUNC_3("memory address set failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_2,
       &VAR_5.u.host_attr.os_info_ba,
       VAR_3->host_info_dma_addr);
 if (FUNC_4(VAR_7)) {
  FUNC_3("memory address set failed\n");
  return VAR_7;
 }

 VAR_5.u.host_attr.debug_area_size = VAR_3->debug_area_size;

 VAR_7 = FUNC_0(VAR_4,
         (struct ena_admin_aq_entry *)&VAR_5,
         sizeof(VAR_5),
         (struct ena_admin_acq_entry *)&VAR_6,
         sizeof(VAR_6));

 if (FUNC_4(VAR_7))
  FUNC_3("Failed to set host attributes: %d\n", VAR_7);

 return VAR_7;
}
