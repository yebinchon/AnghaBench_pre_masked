
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct rtl_priv {int use_new_trx_flow; } ;
struct rtl_pci {int* txringcount; int rxbuffersize; int rxringcount; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct rtl_hal* FUNC_0 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_10)
{
 struct rtl_pci *VAR_11 = FUNC_1(FUNC_2(VAR_10));
 struct rtl_priv *VAR_12 = FUNC_3(VAR_10);
 struct rtl_hal *VAR_13 = FUNC_0(VAR_12);
 u8 VAR_14;
 u16 VAR_15;

 if (VAR_13->hw_type == VAR_2)
  VAR_15 = VAR_9;
 else if (VAR_13->hw_type == VAR_3)
  VAR_15 = VAR_8;
 else
  VAR_15 = VAR_6;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
  VAR_11->txringcount[VAR_14] = VAR_15;




 VAR_11->txringcount[VAR_0] = 2;





 if (!FUNC_3(VAR_10)->use_new_trx_flow)
  VAR_11->txringcount[VAR_1] = VAR_7;

 VAR_11->rxbuffersize = 9100;
 VAR_11->rxringcount = VAR_4;
}
