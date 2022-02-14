
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct rtl_efuse {int txpwr_fromeprom; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int current_chan_bw; } ;
struct TYPE_5__ {TYPE_1__ phy; } ;


 size_t FUNC_0 (size_t*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 size_t FUNC_1 (struct ieee80211_hw*,int ,size_t,int ,size_t) ;
 int FUNC_2 (struct ieee80211_hw*,size_t,int ,size_t) ;
 struct rtl_efuse* FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (struct ieee80211_hw*) ;

void FUNC_5(struct ieee80211_hw *VAR_21, u8 VAR_22)
{
 struct rtl_efuse *VAR_23 = FUNC_3(FUNC_4(VAR_21));
 u8 VAR_24[] = {VAR_3, VAR_5,
      VAR_9, VAR_0};
 u8 VAR_25[] = {VAR_10, VAR_11,
       VAR_1, VAR_2,
       VAR_4, VAR_6,
       VAR_7, VAR_8};
 u8 VAR_26[] = {VAR_12, VAR_13,
        VAR_14, VAR_15,
        VAR_16, VAR_17,
        VAR_18, VAR_19};
 u8 VAR_27;
 u8 VAR_28;

 if (!VAR_23->txpwr_fromeprom)
  return;

 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_24); VAR_27++) {
  VAR_28 = FUNC_1(VAR_21, VAR_20,
     VAR_24[VAR_27],
     FUNC_4(VAR_21)->phy.current_chan_bw,
     VAR_22);
  FUNC_2(VAR_21, VAR_28, VAR_20,
       VAR_24[VAR_27]);
 }
 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_25); VAR_27++) {
  VAR_28 = FUNC_1(VAR_21, VAR_20,
     VAR_25[VAR_27],
     FUNC_4(VAR_21)->phy.current_chan_bw,
     VAR_22);
  FUNC_2(VAR_21, VAR_28, VAR_20,
       VAR_25[VAR_27]);
 }
 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_26); VAR_27++) {
  VAR_28 = FUNC_1(VAR_21, VAR_20,
     VAR_26[VAR_27],
     FUNC_4(VAR_21)->phy.current_chan_bw,
     VAR_22);
  FUNC_2(VAR_21, VAR_28, VAR_20,
       VAR_26[VAR_27]);
 }
}
