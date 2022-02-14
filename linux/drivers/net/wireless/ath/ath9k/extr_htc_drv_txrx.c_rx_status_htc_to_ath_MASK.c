
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_rx_status {int rs_num_delims; int rs_moreaggr; int rs_isaggr; int rs_rssi_ext; int rs_rssi_ctl; int rs_more; int rs_antenna; int rs_rate; int rs_keyix; int rs_rssi; int rs_phyerr; int rs_status; int rs_datalen; } ;
struct ath_htc_rx_status {int rs_num_delims; int rs_moreaggr; int rs_isaggr; int rs_rssi_ext; int rs_rssi_ctl; int rs_more; int rs_antenna; int rs_rate; int rs_keyix; int rs_rssi; int rs_phyerr; int rs_status; int rs_datalen; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_rx_status*,struct ath_htc_rx_status*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ath_rx_status *VAR_0,
     struct ath_htc_rx_status *VAR_1)
{
 VAR_0->rs_datalen = FUNC_0(VAR_1->rs_datalen);
 VAR_0->rs_status = VAR_1->rs_status;
 VAR_0->rs_phyerr = VAR_1->rs_phyerr;
 VAR_0->rs_rssi = VAR_1->rs_rssi;
 VAR_0->rs_keyix = VAR_1->rs_keyix;
 VAR_0->rs_rate = VAR_1->rs_rate;
 VAR_0->rs_antenna = VAR_1->rs_antenna;
 VAR_0->rs_more = VAR_1->rs_more;

 FUNC_2(VAR_0->rs_rssi_ctl, VAR_1->rs_rssi_ctl,
  sizeof(VAR_0->rs_rssi_ctl));
 FUNC_2(VAR_0->rs_rssi_ext, VAR_1->rs_rssi_ext,
  sizeof(VAR_0->rs_rssi_ext));

 VAR_0->rs_isaggr = VAR_1->rs_isaggr;
 VAR_0->rs_moreaggr = VAR_1->rs_moreaggr;
 VAR_0->rs_num_delims = VAR_1->rs_num_delims;
 FUNC_1(VAR_0, VAR_1);
}
