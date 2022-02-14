
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int monitor_only; TYPE_2__* wks; struct iwl_fw_dump_desc const* desc; int active_wks; } ;
struct iwl_fw_runtime {TYPE_3__ dump; int trans; } ;
struct TYPE_4__ {int type; } ;
struct iwl_fw_dump_desc {TYPE_1__ trig_desc; } ;
struct TYPE_5__ {int wk; int idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*,int ) ;
 scalar_t__ FUNC_1 (struct iwl_fw_dump_desc const*) ;
 int FUNC_2 (struct iwl_fw_runtime*,int ) ;
 int FUNC_3 (struct iwl_fw_runtime*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (unsigned int) ;

int FUNC_9(struct iwl_fw_runtime *VAR_1,
       const struct iwl_fw_dump_desc *VAR_2,
       bool VAR_3,
       unsigned int VAR_4)
{
 u32 VAR_5 = FUNC_5(VAR_2->trig_desc.type);
 int VAR_6;

 if (FUNC_4(VAR_1->trans)) {
  VAR_6 = FUNC_2(VAR_1, VAR_5);
  if (!VAR_6)
   FUNC_3(VAR_1);

  return VAR_6;
 }




 if (FUNC_7(VAR_1->dump.wks[0].idx, &VAR_1->dump.active_wks))
  return -VAR_0;

 if (FUNC_1(VAR_1->dump.desc))
  FUNC_3(VAR_1);

 FUNC_0(VAR_1, "Collecting data: trigger %d fired.\n",
   FUNC_5(VAR_2->trig_desc.type));

 VAR_1->dump.desc = VAR_2;
 VAR_1->dump.monitor_only = VAR_3;

 FUNC_6(&VAR_1->dump.wks[0].wk, FUNC_8(VAR_4));

 return 0;
}
