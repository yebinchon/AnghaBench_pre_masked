
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_priv {int curr_ch; int curr_txpoweridx; scalar_t__ rx_crcerrpktcount; scalar_t__ rx_pktcount; scalar_t__ tx_pktcount; scalar_t__ check_mp_pkt; int antenna_rx; int antenna_tx; scalar_t__ curr_rateidx; int curr_modem; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct mp_priv *VAR_4)
{
 VAR_4->mode = VAR_3;
 VAR_4->curr_ch = 1;
 VAR_4->curr_modem = VAR_2;
 VAR_4->curr_rateidx = 0;
 VAR_4->curr_txpoweridx = 0x14;
 VAR_4->antenna_tx = VAR_0;
 VAR_4->antenna_rx = VAR_1;
 VAR_4->check_mp_pkt = 0;
 VAR_4->tx_pktcount = 0;
 VAR_4->rx_pktcount = 0;
 VAR_4->rx_crcerrpktcount = 0;
}
