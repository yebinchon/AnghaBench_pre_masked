
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macsec_tx_sc {int scb; int end_station; scalar_t__ send_sci; } ;
struct macsec_secy {int n_rx_sc; struct macsec_tx_sc tx_sc; } ;



__attribute__((used)) static bool FUNC_0(const struct macsec_secy *VAR_0)
{
 const struct macsec_tx_sc *VAR_1 = &VAR_0->tx_sc;

 return VAR_1->send_sci ||
  (VAR_0->n_rx_sc > 1 && !VAR_1->end_station && !VAR_1->scb);
}
