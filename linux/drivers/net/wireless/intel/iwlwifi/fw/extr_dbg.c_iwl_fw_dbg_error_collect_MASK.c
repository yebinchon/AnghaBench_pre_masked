
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_fw_runtime {TYPE_2__* trans; } ;
struct TYPE_3__ {int type; } ;
struct iwl_fw_dump_desc {scalar_t__ len; TYPE_1__ trig_desc; } ;
typedef enum iwl_fw_dbg_trigger { ____Placeholder_iwl_fw_dbg_trigger } iwl_fw_dbg_trigger ;
struct TYPE_4__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_fw_runtime*,struct iwl_fw_dump_desc*,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct iwl_fw_dump_desc*) ;
 struct iwl_fw_dump_desc* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct iwl_fw_runtime *VAR_4,
        enum iwl_fw_dbg_trigger VAR_5)
{
 int VAR_6;
 struct iwl_fw_dump_desc *VAR_7;

 if (!FUNC_5(VAR_3, &VAR_4->trans->status))
  return -VAR_0;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->trig_desc.type = FUNC_0(VAR_5);
 VAR_7->len = 0;

 VAR_6 = FUNC_1(VAR_4, VAR_7, 0, 0);
 if (VAR_6)
  FUNC_3(VAR_7);
 else
  FUNC_2(VAR_4->trans);

 return VAR_6;
}
