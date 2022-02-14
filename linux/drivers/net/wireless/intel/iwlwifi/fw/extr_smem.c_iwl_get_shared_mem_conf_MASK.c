
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_rx_packet {int dummy; } ;
struct iwl_host_cmd {struct iwl_rx_packet* resp_pkt; int id; int len; int data; int flags; } ;
struct iwl_fw_runtime {TYPE_3__* trans; TYPE_1__* fw; } ;
struct TYPE_6__ {TYPE_2__* trans_cfg; } ;
struct TYPE_5__ {scalar_t__ device_family; } ;
struct TYPE_4__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct iwl_host_cmd*) ;
 int FUNC_5 (struct iwl_fw_runtime*,struct iwl_rx_packet*) ;
 int FUNC_6 (struct iwl_fw_runtime*,struct iwl_rx_packet*) ;
 int FUNC_7 (TYPE_3__*,struct iwl_host_cmd*) ;

void FUNC_8(struct iwl_fw_runtime *VAR_7)
{
 struct iwl_host_cmd VAR_8 = {
  .flags = VAR_0,
  .data = ((void*)0), 
  .len = 0, 
 };
 struct iwl_rx_packet *VAR_9;
 int VAR_10;

 if (FUNC_2(&VAR_7->fw->ucode_capa,
   VAR_3))
  VAR_8.id = FUNC_3(VAR_5, VAR_6, 0);
 else
  VAR_8.id = VAR_4;

 VAR_10 = FUNC_7(VAR_7->trans, &VAR_8);

 if (VAR_10) {
  FUNC_1(VAR_10 != -VAR_1,
       "Could not send the SMEM command: %d\n", VAR_10);
  return;
 }

 VAR_9 = VAR_8.resp_pkt;
 if (VAR_7->trans->trans_cfg->device_family >= VAR_2)
  FUNC_6(VAR_7, VAR_9);
 else
  FUNC_5(VAR_7, VAR_9);

 FUNC_0(VAR_7, "SHARED MEM CFG: got memory offsets/sizes\n");

 FUNC_4(&VAR_8);
}
