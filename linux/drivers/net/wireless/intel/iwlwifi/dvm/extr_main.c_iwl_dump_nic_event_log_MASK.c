
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {int dummy; } ;
struct TYPE_3__ {int log_event_table; } ;
struct iwl_priv {scalar_t__ cur_ucode; TYPE_2__* fw; TYPE_1__ device_pointers; struct iwl_trans* trans; } ;
struct TYPE_4__ {int init_evtlog_size; int init_evtlog_ptr; int inst_evtlog_size; int inst_evtlog_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_priv*,int,int,int,int,char**,size_t) ;
 int FUNC_3 (struct iwl_priv*,int,int,int,int,int,int,char**,size_t) ;
 int FUNC_4 (struct iwl_trans*,int) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (size_t,int ) ;

int FUNC_7(struct iwl_priv *VAR_6, bool VAR_7,
       char **VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16 = 0;
 size_t VAR_17 = 0;
 struct iwl_trans *VAR_18 = VAR_6->trans;

 VAR_9 = VAR_6->device_pointers.log_event_table;
 if (VAR_6->cur_ucode == VAR_5) {
  VAR_15 = VAR_6->fw->init_evtlog_size;
  if (!VAR_9)
   VAR_9 = VAR_6->fw->init_evtlog_ptr;
 } else {
  VAR_15 = VAR_6->fw->inst_evtlog_size;
  if (!VAR_9)
   VAR_9 = VAR_6->fw->inst_evtlog_ptr;
 }

 if (!FUNC_5(VAR_9)) {
  FUNC_0(VAR_6,
   "Invalid event log pointer 0x%08X for %s uCode\n",
   VAR_9,
   (VAR_6->cur_ucode == VAR_5)
     ? "Init" : "RT");
  return -VAR_1;
 }


 VAR_10 = FUNC_4(VAR_18, VAR_9);
 VAR_11 = FUNC_4(VAR_18, VAR_9 + (1 * sizeof(u32)));
 VAR_12 = FUNC_4(VAR_18, VAR_9 + (2 * sizeof(u32)));
 VAR_13 = FUNC_4(VAR_18, VAR_9 + (3 * sizeof(u32)));

 if (VAR_10 > VAR_15) {
  FUNC_0(VAR_6, "Log capacity %d is bogus, limit to %d "
   "entries\n", VAR_10, VAR_15);
  VAR_10 = VAR_15;
 }

 if (VAR_13 > VAR_15) {
  FUNC_0(VAR_6, "Log write index %d is bogus, limit to %d\n",
   VAR_13, VAR_15);
  VAR_13 = VAR_15;
 }

 VAR_14 = VAR_12 ? VAR_10 : VAR_13;


 if (VAR_14 == 0) {
  FUNC_0(VAR_18, "Start IWL Event Log Dump: nothing in log\n");
  return VAR_16;
 }

 if (!(FUNC_1(VAR_4)) && !VAR_7)
  VAR_14 = (VAR_14 > VAR_0)
   ? VAR_0 : VAR_14;
 FUNC_0(VAR_6, "Start IWL Event Log Dump: display last %u entries\n",
  VAR_14);
 VAR_16 = FUNC_3(VAR_6, VAR_10, VAR_12,
     VAR_13, VAR_14, VAR_11,
     VAR_16, VAR_8, VAR_17);

 return VAR_16;
}
