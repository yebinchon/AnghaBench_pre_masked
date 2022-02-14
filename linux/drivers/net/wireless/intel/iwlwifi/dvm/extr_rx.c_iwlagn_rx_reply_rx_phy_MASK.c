
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_phy_res {int dummy; } ;
struct iwl_rx_packet {int data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {int last_phy_res_valid; int last_phy_res; int ampdu_ref; } ;


 int FUNC_0 (int *,int ,int) ;
 struct iwl_rx_packet* FUNC_1 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_2(struct iwl_priv *VAR_0,
       struct iwl_rx_cmd_buffer *VAR_1)
{
 struct iwl_rx_packet *VAR_2 = FUNC_1(VAR_1);

 VAR_0->last_phy_res_valid = 1;
 VAR_0->ampdu_ref++;
 FUNC_0(&VAR_0->last_phy_res, VAR_2->data,
        sizeof(struct iwl_rx_phy_res));
}
