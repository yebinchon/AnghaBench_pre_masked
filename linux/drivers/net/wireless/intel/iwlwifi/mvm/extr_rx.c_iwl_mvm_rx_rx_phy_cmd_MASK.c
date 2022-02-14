
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_rx_packet {int data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct TYPE_3__ {int ampdu_count; } ;
struct TYPE_4__ {int phy_flags; } ;
struct iwl_mvm {int drv_stats_lock; TYPE_1__ drv_rx_stats; TYPE_2__ last_phy_info; int ampdu_ref; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct iwl_mvm *VAR_1, struct iwl_rx_cmd_buffer *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_1->last_phy_info, VAR_3->data, sizeof(VAR_1->last_phy_info));
 VAR_1->ampdu_ref++;
}
