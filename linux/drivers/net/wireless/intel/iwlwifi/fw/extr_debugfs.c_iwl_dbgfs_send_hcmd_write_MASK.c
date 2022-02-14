
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_host_cmd {int* len; int flags; int * data; void* id; } ;
struct iwl_fw_runtime {int ops_ctx; TYPE_1__* ops; } ;
struct hcmd_write_data {int data; int length; int flags; int cmd_id; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* send_hcmd ) (int ,struct iwl_host_cmd*) ;int (* fw_running ) (int ) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (struct iwl_host_cmd*) ;
 int FUNC_5 (struct hcmd_write_data*) ;
 struct hcmd_write_data* FUNC_6 (size_t,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct iwl_host_cmd*) ;

__attribute__((used)) static ssize_t FUNC_9(struct iwl_fw_runtime *VAR_6, char *VAR_7,
      size_t VAR_8)
{
 size_t VAR_9 = (sizeof(u32) * 2 + sizeof(u16)) * 2;
 size_t VAR_10 = (VAR_8 - 1) / 2;
 int VAR_11;
 struct hcmd_write_data *VAR_12;
 struct iwl_host_cmd VAR_13 = {
  .len = 0, 
  .data = ((void*)0), 
 };

 if (VAR_6->ops && VAR_6->ops->fw_running &&
     !VAR_6->ops->fw_running(VAR_6->ops_ctx))
  return -VAR_2;

 if (VAR_8 < VAR_9 + 1 || VAR_8 > 1024 * 4)
  return -VAR_1;

 VAR_12 = FUNC_6(VAR_10, VAR_5);
 if (!VAR_12)
  return -VAR_3;

 VAR_11 = FUNC_3((u8 *)VAR_12, VAR_7, VAR_10);
 if (VAR_11)
  goto out;

 VAR_13.id = FUNC_2(VAR_12->cmd_id);
 VAR_13.flags = FUNC_2(VAR_12->flags);
 VAR_13.len[0] = FUNC_1(VAR_12->length);
 VAR_13.data[0] = VAR_12->data;

 if (VAR_8 != VAR_9 + VAR_13.len[0] * 2 + 1) {
  FUNC_0(VAR_6,
   "host command data size does not match header length\n");
  VAR_11 = -VAR_1;
  goto out;
 }

 if (VAR_6->ops && VAR_6->ops->send_hcmd)
  VAR_11 = VAR_6->ops->send_hcmd(VAR_6->ops_ctx, &VAR_13);
 else
  VAR_11 = -VAR_4;

 if (VAR_11 < 0)
  goto out;

 if (VAR_13.flags & VAR_0)
  FUNC_4(&VAR_13);
out:
 FUNC_5(VAR_12);
 return VAR_11 ?: VAR_8;
}
