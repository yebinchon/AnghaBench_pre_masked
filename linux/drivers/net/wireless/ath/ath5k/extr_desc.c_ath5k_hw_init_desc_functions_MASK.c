
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {scalar_t__ ah_version; int ah_proc_rx_desc; int ah_proc_tx_desc; int ah_setup_tx_desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_0(struct ath5k_hw *VAR_9)
{
 if (VAR_9->ah_version == VAR_1) {
  VAR_9->ah_setup_tx_desc = VAR_8;
  VAR_9->ah_proc_tx_desc = VAR_4;
  VAR_9->ah_proc_rx_desc = VAR_6;
 } else if (VAR_9->ah_version <= VAR_0) {
  VAR_9->ah_setup_tx_desc = VAR_7;
  VAR_9->ah_proc_tx_desc = VAR_3;
  VAR_9->ah_proc_rx_desc = VAR_5;
 } else
  return -VAR_2;
 return 0;
}
