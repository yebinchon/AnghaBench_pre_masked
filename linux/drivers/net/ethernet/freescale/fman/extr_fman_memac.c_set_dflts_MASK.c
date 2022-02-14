
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memac_cfg {int reset_on_init; int promiscuous_mode_enable; int pause_ignore; int pause_quanta; int max_frame_length; int tx_ipg_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct memac_cfg *VAR_3)
{
 VAR_3->reset_on_init = 0;
 VAR_3->promiscuous_mode_enable = 0;
 VAR_3->pause_ignore = 0;
 VAR_3->tx_ipg_length = VAR_2;
 VAR_3->max_frame_length = VAR_0;
 VAR_3->pause_quanta = VAR_1;
}
