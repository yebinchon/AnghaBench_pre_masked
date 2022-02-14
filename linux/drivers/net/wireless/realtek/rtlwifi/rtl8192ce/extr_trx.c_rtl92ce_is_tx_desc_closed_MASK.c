
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct rtl_pci {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl8192_tx_ring {size_t idx; int * desc; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,size_t*,int,int ) ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;

bool FUNC_3(struct ieee80211_hw *VAR_1,
          u8 VAR_2, u16 VAR_3)
{
 struct rtl_pci *VAR_4 = FUNC_1(FUNC_2(VAR_1));
 struct rtl8192_tx_ring *VAR_5 = &VAR_4->tx_ring[VAR_2];
 u8 *VAR_6 = (u8 *)(&VAR_5->desc[VAR_5->idx]);
 u8 VAR_7 = (u8)FUNC_0(VAR_1, VAR_6, 1, VAR_0);





 if (VAR_7)
  return 0;
 return 1;
}
