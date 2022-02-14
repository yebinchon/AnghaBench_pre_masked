
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm {int * error_recovery_buf; TYPE_2__* fw; } ;
struct iwl_host_cmd {int* len; TYPE_3__* resp_pkt; int * dataflags; int ** data; int flags; int id; } ;
struct iwl_fw_error_recovery_cmd {int buf_size; int flags; } ;
typedef int __le32 ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_4__ {int error_log_size; } ;
struct TYPE_5__ {TYPE_1__ ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct iwl_mvm *VAR_5, u32 VAR_6)
{
 u32 VAR_7 = VAR_5->fw->ucode_capa.error_log_size;
 int VAR_8;
 u32 VAR_9;

 struct iwl_fw_error_recovery_cmd VAR_10 = {
  .flags = FUNC_2(VAR_6),
  .buf_size = 0,
 };
 struct iwl_host_cmd VAR_11 = {
  .id = FUNC_1(VAR_4, VAR_2),
  .flags = VAR_0,
  .data = &VAR_10, 
  .len = sizeof(VAR_10), 
 };


 if (!VAR_7)
  return;

 if (VAR_6 & VAR_1) {

  if (!VAR_5->error_recovery_buf)
   return;

  VAR_11.data[1] = VAR_5->error_recovery_buf;
  VAR_11.len[1] = VAR_7;
  VAR_11.dataflags[1] = VAR_3;
  VAR_10.buf_size = FUNC_2(VAR_7);
 }

 VAR_8 = FUNC_3(VAR_5, &VAR_11);
 FUNC_4(VAR_5->error_recovery_buf);
 VAR_5->error_recovery_buf = ((void*)0);

 if (VAR_8) {
  FUNC_0(VAR_5, "Failed to send recovery cmd %d\n", VAR_8);
  return;
 }


 if (VAR_6 & VAR_1) {
  VAR_9 = FUNC_5(*(__le32 *)VAR_11.resp_pkt->data);
  if (VAR_9)
   FUNC_0(VAR_5,
    "Failed to send recovery cmd blob was invalid %d\n",
    VAR_9);
 }
}
