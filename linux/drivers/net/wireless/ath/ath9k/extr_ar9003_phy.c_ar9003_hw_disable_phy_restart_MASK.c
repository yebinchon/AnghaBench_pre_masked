
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_hw {int bb_hang_rx_ofdm; int bb_watchdog_last_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;

void FUNC_3(struct ath_hw *VAR_3)
{
 u8 VAR_4;
 u32 VAR_5;






 VAR_4 = FUNC_0(VAR_3->bb_watchdog_last_status, VAR_2);

 if ((VAR_4 == 0xb) || VAR_3->bb_hang_rx_ofdm) {
  VAR_3->bb_hang_rx_ofdm = 1;
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  VAR_5 &= ~VAR_1;
  FUNC_2(VAR_3, VAR_0, VAR_5);
 }
}
