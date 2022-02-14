
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_nvm_access_resp {int * data; int offset; int length; int status; } ;
struct iwl_nvm_access_cmd {int op_code; int type; int length; int offset; } ;
struct iwl_mvm {TYPE_2__* cfg; TYPE_1__* trans; } ;
struct iwl_host_cmd {int flags; int* len; struct iwl_rx_packet* resp_pkt; int data; int id; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_host_cmd*) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_7, u16 VAR_8,
         u16 VAR_9, u16 VAR_10, u8 *VAR_11)
{
 struct iwl_nvm_access_cmd VAR_12 = {
  .offset = FUNC_2(VAR_9),
  .length = FUNC_2(VAR_10),
  .type = FUNC_2(VAR_8),
  .op_code = VAR_5,
 };
 struct iwl_nvm_access_resp *VAR_13;
 struct iwl_rx_packet *VAR_14;
 struct iwl_host_cmd VAR_15 = {
  .id = VAR_4,
  .flags = VAR_1 | VAR_0,
  .data = &VAR_12, 
 };
 int VAR_16, VAR_17, VAR_18;
 u8 *VAR_19;

 VAR_15.len[0] = sizeof(struct iwl_nvm_access_cmd);

 VAR_16 = FUNC_4(VAR_7, &VAR_15);
 if (VAR_16)
  return VAR_16;

 VAR_14 = VAR_15.resp_pkt;


 VAR_13 = (void *)VAR_14->data;
 VAR_16 = FUNC_5(VAR_13->status);
 VAR_17 = FUNC_5(VAR_13->length);
 VAR_18 = FUNC_5(VAR_13->offset);
 VAR_19 = VAR_13->data;
 if (VAR_16) {
  if ((VAR_9 != 0) &&
      (VAR_16 == VAR_6)) {
   FUNC_0(VAR_7->trans->dev,
      "NVM access command failed on offset 0x%x since that section size is multiple 2K\n",
      VAR_9);
   VAR_16 = 0;
  } else {
   FUNC_0(VAR_7->trans->dev,
      "NVM access command failed with status %d (device: %s)\n",
      VAR_16, VAR_7->cfg->name);
   VAR_16 = -VAR_3;
  }
  goto exit;
 }

 if (VAR_18 != VAR_9) {
  FUNC_1(VAR_7, "NVM ACCESS response with invalid offset %d\n",
   VAR_18);
  VAR_16 = -VAR_2;
  goto exit;
 }


 FUNC_6(VAR_11 + VAR_9, VAR_19, VAR_17);
 VAR_16 = VAR_17;

exit:
 FUNC_3(&VAR_15);
 return VAR_16;
}
