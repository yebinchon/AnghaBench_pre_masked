
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath9k_hw_mci {int* wlan_channels; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {struct ath9k_channel* curchan; TYPE_1__ btcoex_hw; } ;
struct ath9k_channel {int channel; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 int VAR_1 ;
 int FUNC_3 (int**,int) ;
 int VAR_2 ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (int ,int ,char*,int,int,int) ;

void FUNC_8(struct ath_softc *VAR_3, bool VAR_4)
{
 struct ath_hw *VAR_5 = VAR_3->sc_ah;
 struct ath9k_hw_mci *VAR_6 = &VAR_5->btcoex_hw.mci;
 struct ath9k_channel *VAR_7 = VAR_5->curchan;
 u32 VAR_8[] = {0x00000000, 0xffff0000, 0xffffffff, 0x7fffffff};
 int VAR_9;
 s16 VAR_10, VAR_11;
 u16 VAR_12;

 if (!VAR_7 || !FUNC_0(VAR_7))
  return;

 if (VAR_4)
  goto send_wlan_chan;

 VAR_12 = VAR_7->channel - 2402;

 VAR_10 = VAR_12 - 10;
 VAR_11 = VAR_12 + 10;

 if (FUNC_2(VAR_7))
  VAR_11 += 20;
 else if (FUNC_1(VAR_7))
  VAR_10 -= 20;


 VAR_10 -= 7;
 VAR_11 += 7;

 if (VAR_10 <= 0)
  VAR_10 = 0;
 if (VAR_11 >= VAR_0)
  VAR_11 = VAR_0 - 1;

 FUNC_7(FUNC_6(VAR_5), VAR_1,
  "WLAN current channel %d mask BT channel %d - %d\n",
  VAR_12, VAR_10, VAR_11);

 for (VAR_9 = VAR_10; VAR_9 < VAR_11; VAR_9++)
  FUNC_3(&VAR_8, VAR_9);

send_wlan_chan:

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
  VAR_6->wlan_channels[VAR_9] = VAR_8[VAR_9];
 FUNC_4(VAR_5);
 FUNC_5(VAR_5, VAR_2);
}
