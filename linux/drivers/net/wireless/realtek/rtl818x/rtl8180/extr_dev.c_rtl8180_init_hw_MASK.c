
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl8180_priv {scalar_t__ chip_family; int rx_ring_dma; int antenna_diversity_en; int antenna_diversity_default; TYPE_2__* rf; TYPE_3__* map; scalar_t__ map_pio; TYPE_1__* tx_ring; int anaparam; } ;
struct ieee80211_hw {int wiphy; struct rtl8180_priv* priv; } ;
struct TYPE_6__ {int TX_DMA_POLLING; int RF_PARA; int RF_TIMING; int RFPinsSelect; int RFPinsEnable; int RFPinsOutput; int PGSELECT; int CONFIG5; int INT_MIG; int TID_AC_MAP; int ACM_CONTROL; int TPPOLL_STOP; int EEPROM_CMD; int CONFIG3; int GP_ENABLE; int CARRIER_SENSE_COUNTER; int PHY_DELAY; int SECURITY; int RATE_FALLBACK; int WPA_CONF; int INT_TIMEOUT; int CONFIG2; int TBKDA; int TBEDA; int TVIDA; int TVODA; int TBDA; int TLPDA; int RDSAR; int MSR; int CMD; } ;
struct TYPE_5__ {int (* init ) (struct ieee80211_hw*) ;} ;
struct TYPE_4__ {int dma; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl8180_priv*,int ) ;
 int FUNC_6 (struct rtl8180_priv*,int ) ;
 int FUNC_7 (struct rtl8180_priv*,int ) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_10 (struct rtl8180_priv*,int *) ;
 int FUNC_11 (struct rtl8180_priv*,int *) ;
 int FUNC_12 (struct rtl8180_priv*,int *) ;
 int FUNC_13 (struct rtl8180_priv*,int *,int) ;
 int FUNC_14 (struct rtl8180_priv*,int *,int) ;
 int FUNC_15 (struct rtl8180_priv*,int *,int) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int FUNC_17 (int ,char*) ;

__attribute__((used)) static int FUNC_18(struct ieee80211_hw *VAR_16)
{
 struct rtl8180_priv *VAR_17 = VAR_16->priv;
 u16 VAR_18;
 u32 VAR_19;

 FUNC_15(VAR_17, &VAR_17->map->CMD, 0);
 FUNC_12(VAR_17, &VAR_17->map->CMD);
 FUNC_1(10);


 FUNC_4(VAR_16);
 FUNC_12(VAR_17, &VAR_17->map->CMD);

 VAR_18 = FUNC_12(VAR_17, &VAR_17->map->CMD);
 VAR_18 &= (1 << 1);
 VAR_18 |= VAR_6;
 FUNC_15(VAR_17, &VAR_17->map->CMD, VAR_6);
 FUNC_12(VAR_17, &VAR_17->map->CMD);
 FUNC_1(200);


 if (FUNC_12(VAR_17, &VAR_17->map->CMD) & VAR_6) {
  FUNC_17(VAR_16->wiphy, "reset timeout!\n");
  return -VAR_1;
 }

 FUNC_15(VAR_17, &VAR_17->map->EEPROM_CMD, VAR_8);
 FUNC_12(VAR_17, &VAR_17->map->CMD);
 FUNC_1(200);

 if (FUNC_12(VAR_17, &VAR_17->map->CONFIG3) & (1 << 3)) {
  FUNC_3(VAR_16);
 }

 if (VAR_17->chip_family == VAR_5)
  FUNC_15(VAR_17, &VAR_17->map->MSR, VAR_10);
 else
  FUNC_15(VAR_17, &VAR_17->map->MSR, 0);

 if (VAR_17->chip_family == VAR_3)
  FUNC_5(VAR_17, VAR_17->anaparam);

 FUNC_14(VAR_17, &VAR_17->map->RDSAR, VAR_17->rx_ring_dma);




 if (VAR_17->chip_family != VAR_5) {
  FUNC_14(VAR_17, &VAR_17->map->TBDA,
      VAR_17->tx_ring[1].dma);
  FUNC_14(VAR_17, &VAR_17->map->TLPDA,
      VAR_17->tx_ring[0].dma);
 } else {
  FUNC_14(VAR_17, &VAR_17->map->TBDA,
      VAR_17->tx_ring[4].dma);
  FUNC_14(VAR_17, &VAR_17->map->TVODA,
      VAR_17->tx_ring[0].dma);
  FUNC_14(VAR_17, &VAR_17->map->TVIDA,
      VAR_17->tx_ring[1].dma);
  FUNC_14(VAR_17, &VAR_17->map->TBEDA,
      VAR_17->tx_ring[2].dma);
  FUNC_14(VAR_17, &VAR_17->map->TBKDA,
      VAR_17->tx_ring[3].dma);
 }


 FUNC_15(VAR_17, &VAR_17->map->EEPROM_CMD, VAR_7);
 VAR_18 = FUNC_12(VAR_17, &VAR_17->map->CONFIG2);
 FUNC_15(VAR_17, &VAR_17->map->CONFIG2, VAR_18 & ~(1 << 3));
 if (VAR_17->chip_family == VAR_4) {
  VAR_18 = FUNC_12(VAR_17, &VAR_17->map->CONFIG2);
  FUNC_15(VAR_17, &VAR_17->map->CONFIG2, VAR_18 | (1 << 4));
 }
 FUNC_15(VAR_17, &VAR_17->map->EEPROM_CMD, VAR_9);





 FUNC_14(VAR_17, &VAR_17->map->INT_TIMEOUT, 0);

 if (VAR_17->chip_family != VAR_3) {
  FUNC_15(VAR_17, &VAR_17->map->WPA_CONF, 0);
  FUNC_15(VAR_17, &VAR_17->map->RATE_FALLBACK, 0);
 } else {
  FUNC_15(VAR_17, &VAR_17->map->SECURITY, 0);

  FUNC_15(VAR_17, &VAR_17->map->PHY_DELAY, 0x6);
  FUNC_15(VAR_17, &VAR_17->map->CARRIER_SENSE_COUNTER, 0x4C);
 }

 if (VAR_17->chip_family == VAR_4) {

  VAR_18 = FUNC_12(VAR_17, &VAR_17->map->GP_ENABLE);
  FUNC_15(VAR_17, &VAR_17->map->GP_ENABLE, VAR_18 & ~(1 << 6));
  FUNC_15(VAR_17, &VAR_17->map->EEPROM_CMD, VAR_7);
  VAR_18 = FUNC_12(VAR_17, &VAR_17->map->CONFIG3);
  FUNC_15(VAR_17, &VAR_17->map->CONFIG3, VAR_18 | (1 << 2));
  FUNC_15(VAR_17, &VAR_17->map->EEPROM_CMD, VAR_9);

  if (VAR_17->map_pio) {
   u8 VAR_20;

   VAR_20 = FUNC_12(VAR_17, &VAR_17->map->PGSELECT);
   FUNC_15(VAR_17, &VAR_17->map->PGSELECT, VAR_20 | 1);
   FUNC_15(VAR_17, FUNC_0(0xff), 0x35);
   FUNC_15(VAR_17, &VAR_17->map->PGSELECT, VAR_20);
  } else
   FUNC_15(VAR_17, FUNC_0(0x1ff), 0x35);
 }

 if (VAR_17->chip_family == VAR_5) {


  FUNC_13(VAR_17, VAR_0, 0xFFF);
  FUNC_10(VAR_17, VAR_0);


  FUNC_15(VAR_17, &VAR_17->map->TPPOLL_STOP,
          VAR_12 | VAR_11);

  FUNC_15(VAR_17, &VAR_17->map->ACM_CONTROL, 0x00);
  FUNC_13(VAR_17, &VAR_17->map->TID_AC_MAP, 0xFA50);

  FUNC_13(VAR_17, &VAR_17->map->INT_MIG, 0);


  FUNC_8(VAR_16);

  FUNC_13(VAR_17, VAR_2, 0x569A);
  FUNC_10(VAR_17, VAR_2);

  FUNC_5(VAR_17, VAR_15);
  FUNC_6(VAR_17, VAR_13);
  FUNC_7(VAR_17, VAR_14);


  FUNC_15(VAR_17, &VAR_17->map->CONFIG5,
       FUNC_12(VAR_17, &VAR_17->map->CONFIG5) & 0x7F);


  FUNC_15(VAR_17, &VAR_17->map->PGSELECT,
       FUNC_12(VAR_17, &VAR_17->map->PGSELECT) | 0x08);

  FUNC_13(VAR_17, &VAR_17->map->RFPinsOutput, 0x0480);
  FUNC_13(VAR_17, &VAR_17->map->RFPinsEnable, 0x1BFF);
  FUNC_13(VAR_17, &VAR_17->map->RFPinsSelect, 0x2488);

  FUNC_14(VAR_17, &VAR_17->map->RF_TIMING, 0x4003);





  VAR_19 = FUNC_11(VAR_17, &VAR_17->map->RF_PARA);
  VAR_19 &= 0x00ffff00;
  VAR_19 |= 0xb8000054;
  FUNC_14(VAR_17, &VAR_17->map->RF_PARA, VAR_19);
 } else

  FUNC_15(VAR_17, &VAR_17->map->TX_DMA_POLLING,
       (1<<1) | (1<<2));

 VAR_17->rf->init(VAR_16);







 if (VAR_17->chip_family == VAR_3)
  FUNC_2(VAR_16, 0x3);
 else
  FUNC_2(VAR_16, 0x1f3);

 if (VAR_17->chip_family == VAR_5)
  FUNC_9(VAR_16,
          VAR_17->antenna_diversity_default,
          VAR_17->antenna_diversity_en);
 return 0;
}
