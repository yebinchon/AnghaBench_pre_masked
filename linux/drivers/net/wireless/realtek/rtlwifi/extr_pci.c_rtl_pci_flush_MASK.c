
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ rfpwr_state; } ;
struct rtl_priv {TYPE_2__ psc; } ;
struct TYPE_3__ {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl_pci_priv {TYPE_1__ dev; } ;
struct rtl_mac {scalar_t__ skip_scan; } ;
struct rtl_hal {int dummy; } ;
struct rtl8192_tx_ring {int queue; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtl_hal*) ;
 int FUNC_1 (int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_pci_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_4, u32 VAR_5, bool VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_5(VAR_4);
 struct rtl_pci_priv *VAR_8 = FUNC_4(VAR_4);
 struct rtl_hal *VAR_9 = FUNC_2(FUNC_5(VAR_4));
 struct rtl_mac *VAR_10 = FUNC_3(FUNC_5(VAR_4));
 u16 VAR_11 = 0;
 int VAR_12;
 struct rtl8192_tx_ring *VAR_13;

 if (VAR_10->skip_scan)
  return;

 for (VAR_12 = VAR_2 - 1; VAR_12 >= 0;) {
  u32 VAR_14;

  if (((VAR_5 >> VAR_12) & 0x1) == 0) {
   VAR_12--;
   continue;
  }
  VAR_13 = &VAR_8->dev.tx_ring[VAR_12];
  VAR_14 = FUNC_6(&VAR_13->queue);
  if (VAR_14 == 0 || VAR_12 == VAR_0 ||
      VAR_12 == VAR_3) {
   VAR_12--;
   continue;
  } else {
   FUNC_1(20);
   VAR_11++;
  }


  if (VAR_7->psc.rfpwr_state == VAR_1 ||
      FUNC_0(VAR_9) || VAR_11 >= 200)
   return;
 }
}
