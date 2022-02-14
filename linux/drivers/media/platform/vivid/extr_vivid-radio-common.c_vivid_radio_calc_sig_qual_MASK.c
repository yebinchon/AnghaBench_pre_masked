
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct vivid_dev {int radio_rx_freq; int radio_tx_freq; int radio_rds_loop; int radio_rx_sig_qual; TYPE_1__ rds_gen; int radio_tx_rds_controls; scalar_t__ has_radio_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct vivid_dev *VAR_2)
{
 int VAR_3 = 16000;
 int VAR_4 = 800;
 int VAR_5, VAR_6 = VAR_3;





 if (VAR_2->radio_rx_freq <= VAR_0) {
  VAR_3 /= 10;
  VAR_4 /= 10;
 }
 VAR_5 = (VAR_2->radio_rx_freq + VAR_4) % VAR_3 - VAR_4;
 if (VAR_2->has_radio_tx)
  VAR_6 = VAR_2->radio_rx_freq - VAR_2->radio_tx_freq;
 if (FUNC_0(VAR_6) <= FUNC_0(VAR_5)) {
  VAR_5 = VAR_6;




  if (!VAR_2->radio_rds_loop && !VAR_2->radio_tx_rds_controls)
   FUNC_1(VAR_2->rds_gen.data, 0,
          sizeof(VAR_2->rds_gen.data));
  VAR_2->radio_rds_loop = VAR_2->radio_rx_freq >= VAR_1;
 } else {
  VAR_2->radio_rds_loop = 0;
 }
 if (VAR_2->radio_rx_freq <= VAR_0)
  VAR_5 *= 10;
 VAR_2->radio_rx_sig_qual = VAR_5;
}
