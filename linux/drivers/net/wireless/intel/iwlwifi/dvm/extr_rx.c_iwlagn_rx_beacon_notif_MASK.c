
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {int failure_frame; int rate_n_flags; TYPE_1__ status; } ;
struct iwlagn_beacon_notif {int ibss_mgr_status; int low_tsf; int high_tsf; TYPE_2__ beacon_notify_hdr; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {int ibss_manager; } ;


 int FUNC_0 (struct iwl_priv*,char*,int,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct iwl_rx_packet* FUNC_4 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_5(struct iwl_priv *VAR_1,
       struct iwl_rx_cmd_buffer *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_4(VAR_2);
 struct iwlagn_beacon_notif *VAR_4 = (void *)VAR_3->data;
 VAR_1->ibss_manager = FUNC_3(VAR_4->ibss_mgr_status);
}
