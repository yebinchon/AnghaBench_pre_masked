
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_mfuart_load_notif {int image_size; int duration; int status; int external_ver; int installed_ver; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ,...) ;
 int FUNC_1 (struct iwl_rx_packet*) ;
 int FUNC_2 (int ) ;
 struct iwl_rx_packet* FUNC_3 (struct iwl_rx_cmd_buffer*) ;

void FUNC_4(struct iwl_mvm *VAR_0,
        struct iwl_rx_cmd_buffer *VAR_1)
{
 struct iwl_rx_packet *VAR_2 = FUNC_3(VAR_1);
 struct iwl_mfuart_load_notif *VAR_3 = (void *)VAR_2->data;

 FUNC_0(VAR_0,
         "MFUART: installed ver: 0x%08x, external ver: 0x%08x, status: 0x%08x, duration: 0x%08x\n",
         FUNC_2(VAR_3->installed_ver),
         FUNC_2(VAR_3->external_ver),
         FUNC_2(VAR_3->status),
         FUNC_2(VAR_3->duration));

 if (FUNC_1(VAR_2) == sizeof(*VAR_3))
  FUNC_0(VAR_0,
          "MFUART: image size: 0x%08x\n",
          FUNC_2(VAR_3->image_size));
}
