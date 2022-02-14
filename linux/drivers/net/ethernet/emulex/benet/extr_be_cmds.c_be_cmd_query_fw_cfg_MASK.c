
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_query_fw_cfg {int asic_revision; int function_caps; int function_mode; int phys_port; } ;
struct be_cmd_req_query_fw_cfg {int hdr; } ;
struct be_adapter {int port_num; int function_mode; int function_caps; int asic_rev; int mbox_lock; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 int FUNC_2 (int *,char*,int,int) ;
 void* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (struct be_adapter*) ;

int FUNC_8(struct be_adapter *VAR_2)
{
 struct be_mcc_wrb *VAR_3;
 struct be_cmd_req_query_fw_cfg *VAR_4;
 int VAR_5;

 if (FUNC_5(&VAR_2->mbox_lock))
  return -1;

 VAR_3 = FUNC_7(VAR_2);
 VAR_4 = FUNC_3(VAR_3);

 FUNC_1(&VAR_4->hdr, VAR_0,
          VAR_1,
          sizeof(*VAR_4), VAR_3, ((void*)0));

 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5) {
  struct be_cmd_resp_query_fw_cfg *VAR_6 = FUNC_3(VAR_3);

  VAR_2->port_num = FUNC_4(VAR_6->phys_port);
  VAR_2->function_mode = FUNC_4(VAR_6->function_mode);
  VAR_2->function_caps = FUNC_4(VAR_6->function_caps);
  VAR_2->asic_rev = FUNC_4(VAR_6->asic_revision) & 0xFF;
  FUNC_2(&VAR_2->pdev->dev,
    "FW config: function_mode=0x%x, function_caps=0x%x\n",
    VAR_2->function_mode, VAR_2->function_caps);
 }

 FUNC_6(&VAR_2->mbox_lock);
 return VAR_5;
}
