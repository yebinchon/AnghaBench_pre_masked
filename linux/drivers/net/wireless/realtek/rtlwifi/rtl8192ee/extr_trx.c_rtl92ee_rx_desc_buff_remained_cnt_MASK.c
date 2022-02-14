
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {TYPE_1__* rx_ring; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ next_rx_rp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ) ;
 struct rtl_pci* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;

u16 FUNC_6(struct ieee80211_hw *VAR_4, u8 VAR_5)
{
 struct rtl_pci *VAR_6 = FUNC_2(FUNC_3(VAR_4));
 struct rtl_priv *VAR_7 = FUNC_4(VAR_4);
 u16 VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 static bool VAR_12;

 VAR_11 = FUNC_5(VAR_7, VAR_2);
 VAR_8 = (u16)((VAR_11>>16) & 0x7ff);
 VAR_9 = (u16)(VAR_11 & 0x7ff);

 if (VAR_9 != VAR_6->rx_ring[VAR_5].next_rx_rp) {
  FUNC_0(VAR_7, VAR_0, VAR_1,
    "!!!write point is 0x%x, reg 0x3B4 value is 0x%x\n",
     VAR_9, VAR_11);
  VAR_11 = FUNC_5(VAR_7, VAR_2);
  VAR_8 = (u16)((VAR_11>>16) & 0x7ff);
  VAR_9 = (u16)(VAR_11 & 0x7ff);
 }

 if (VAR_8 > 0)
  VAR_12 = 1;
 if (!VAR_12)
  return 0;

 VAR_10 = FUNC_1(VAR_8, VAR_9,
         VAR_3);

 if (VAR_10 == 0)
  return 0;

 VAR_6->rx_ring[VAR_5].next_rx_rp = VAR_9;

 return VAR_10;
}
