
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ rfoff_reason; } ;
struct TYPE_3__ {scalar_t__ driver_is_goingto_unload; } ;
struct rtl_priv {TYPE_2__ psc; TYPE_1__ rtlhal; } ;
struct rtl_pci {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl8192_tx_ring {scalar_t__ cur_tx_rp; scalar_t__ cur_tx_wp; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ) ;

bool FUNC_5(struct ieee80211_hw *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct rtl_pci *VAR_5 = FUNC_1(FUNC_2(VAR_2));
 struct rtl_priv *VAR_6 = FUNC_3(VAR_2);
 u16 VAR_7, VAR_8;
 bool VAR_9 = 0;
 static u8 VAR_10;
 struct rtl8192_tx_ring *VAR_11 = &VAR_5->tx_ring[VAR_3];

 {
  u16 VAR_12, VAR_13;
  u32 VAR_14;

  VAR_14 =
    FUNC_4(VAR_6,
     FUNC_0(VAR_3));
  VAR_12 = (u16)((VAR_14 >> 16) & 0x0fff);
  VAR_13 = (u16)(VAR_14 & 0x0fff);


  VAR_11->cur_tx_rp = VAR_12;
 }

 VAR_7 = VAR_11->cur_tx_rp;
 VAR_8 = VAR_11->cur_tx_wp;

 if (VAR_8 > VAR_7) {
  if (VAR_4 < VAR_8 && VAR_4 >= VAR_7)
   VAR_9 = 0;
  else
   VAR_9 = 1;
 } else if (VAR_8 < VAR_7) {
  if (VAR_4 > VAR_8 && VAR_4 < VAR_7)
   VAR_9 = 1;
  else
   VAR_9 = 0;
 } else {
  if (VAR_4 != VAR_7)
   VAR_9 = 1;
 }

 if (VAR_3 == VAR_0)
  VAR_9 = 1;

 if (VAR_6->rtlhal.driver_is_goingto_unload ||
     VAR_6->psc.rfoff_reason > VAR_1)
  VAR_9 = 1;

 if (VAR_3 < VAR_0) {
  if (!VAR_9)
   VAR_10++;
  else
   VAR_10 = 0;
 }

 return VAR_9;
}
