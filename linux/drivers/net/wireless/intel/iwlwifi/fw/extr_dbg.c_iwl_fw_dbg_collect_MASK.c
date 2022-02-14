
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct iwl_fw_runtime {int trans; } ;
struct TYPE_2__ {int data; int type; } ;
struct iwl_fw_dump_desc {size_t len; TYPE_1__ trig_desc; } ;
struct iwl_fw_dbg_trigger_tlv {int flags; int mode; int stop_delay; int occurrences; } ;
typedef enum iwl_fw_dbg_trigger { ____Placeholder_iwl_fw_dbg_trigger } iwl_fw_dbg_trigger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*,int) ;
 unsigned int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_fw_runtime*,struct iwl_fw_dump_desc*,int,unsigned int) ;
 struct iwl_fw_dump_desc* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ,char const*,size_t) ;

int FUNC_9(struct iwl_fw_runtime *VAR_5,
         enum iwl_fw_dbg_trigger VAR_6,
         const char *VAR_7, size_t VAR_8,
         struct iwl_fw_dbg_trigger_tlv *VAR_9)
{
 struct iwl_fw_dump_desc *VAR_10;
 unsigned int VAR_11 = 0;
 bool VAR_12 = 0;

 if (VAR_9) {
  u16 VAR_13 = FUNC_6(VAR_9->occurrences) - 1;

  if (!FUNC_6(VAR_9->occurrences))
   return 0;

  if (VAR_9->flags & VAR_2) {
   FUNC_0(VAR_5, "Force restart: trigger %d fired.\n",
     VAR_6);
   FUNC_3(VAR_5->trans);
   return 0;
  }

  VAR_9->occurrences = FUNC_1(VAR_13);
  VAR_12 = VAR_9->mode & VAR_3;


  VAR_11 = FUNC_7(VAR_9->stop_delay) * VAR_4;
 }

 VAR_10 = FUNC_5(sizeof(*VAR_10) + VAR_8, VAR_1);
 if (!VAR_10)
  return -VAR_0;


 VAR_10->len = VAR_8;
 VAR_10->trig_desc.type = FUNC_2(VAR_6);
 FUNC_8(VAR_10->trig_desc.data, VAR_7, VAR_8);

 return FUNC_4(VAR_5, VAR_10, VAR_12, VAR_11);
}
