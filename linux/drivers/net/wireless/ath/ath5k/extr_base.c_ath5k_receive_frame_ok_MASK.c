
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath5k_rx_status {int rs_status; int rs_phyerr; scalar_t__ rs_keyix; int rs_more; scalar_t__ rs_datalen; } ;
struct TYPE_2__ {int rxerr_jumbo; int rxerr_mic; int rxerr_decrypt; int * rxerr_phy_code; int rxerr_phy; int rxerr_fifo; int rxerr_crc; int rx_bytes_count; int rx_all_count; } ;
struct ath5k_hw {int fif_filter_flags; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(struct ath5k_hw *VAR_9, struct ath5k_rx_status *VAR_10)
{
 VAR_9->stats.rx_all_count++;
 VAR_9->stats.rx_bytes_count += VAR_10->rs_datalen;

 if (FUNC_0(VAR_10->rs_status)) {
  unsigned int VAR_11;

  if (VAR_10->rs_status & VAR_0)
   VAR_9->stats.rxerr_crc++;
  if (VAR_10->rs_status & VAR_2)
   VAR_9->stats.rxerr_fifo++;
  if (VAR_10->rs_status & VAR_4) {
   VAR_9->stats.rxerr_phy++;
   if (VAR_10->rs_phyerr > 0 && VAR_10->rs_phyerr < 32)
    VAR_9->stats.rxerr_phy_code[VAR_10->rs_phyerr]++;







   if (VAR_10->rs_phyerr == VAR_7 ||
       VAR_10->rs_phyerr == VAR_6) {
    VAR_10->rs_status |= VAR_0;
    VAR_10->rs_status &= ~VAR_4;
   } else {
    return 0;
   }
  }
  if (VAR_10->rs_status & VAR_1) {
   VAR_9->stats.rxerr_decrypt++;
   if (VAR_10->rs_keyix == VAR_5 &&
       !(VAR_10->rs_status & VAR_0))
    return 1;
  }
  if (VAR_10->rs_status & VAR_3) {
   VAR_9->stats.rxerr_mic++;
   return 1;
  }





  VAR_11 = VAR_1;
  if (VAR_9->fif_filter_flags & VAR_8)
   VAR_11 |= VAR_0;

  if (VAR_10->rs_status & ~VAR_11)
   return 0;
 }

 if (FUNC_0(VAR_10->rs_more)) {
  VAR_9->stats.rxerr_jumbo++;
  return 0;
 }
 return 1;
}
