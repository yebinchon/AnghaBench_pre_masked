
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct rtl_pci {TYPE_2__* rx_ring; TYPE_1__* tx_ring; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int dma; } ;
struct TYPE_3__ {int dma; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_3(VAR_16);
 struct rtl_pci *VAR_18 = FUNC_1(FUNC_2(VAR_16));


 FUNC_4(VAR_17, VAR_5,
   VAR_18->tx_ring[VAR_0].dma & FUNC_0(32));
 FUNC_4(VAR_17, VAR_9,
   VAR_18->tx_ring[VAR_4].dma & FUNC_0(32));
 FUNC_4(VAR_17, VAR_12,
   VAR_18->tx_ring[VAR_15].dma & FUNC_0(32));
 FUNC_4(VAR_17, VAR_11,
   VAR_18->tx_ring[VAR_14].dma & FUNC_0(32));
 FUNC_4(VAR_17, VAR_6,
   VAR_18->tx_ring[VAR_1].dma & FUNC_0(32));
 FUNC_4(VAR_17, VAR_7,
   VAR_18->tx_ring[VAR_2].dma & FUNC_0(32));
 FUNC_4(VAR_17, VAR_8,
   VAR_18->tx_ring[VAR_3].dma & FUNC_0(32));
 FUNC_4(VAR_17, VAR_10,
   VAR_18->rx_ring[VAR_13].dma & FUNC_0(32));
}
