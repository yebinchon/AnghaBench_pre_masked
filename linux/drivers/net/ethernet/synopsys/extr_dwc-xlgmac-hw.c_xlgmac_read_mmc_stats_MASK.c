
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_stats {int rxwatchdogerror; int rxvlanframes_gb; int rxfifooverflow; int rxpauseframes; int rxoutofrangetype; int rxlengtherror; int rxunicastframes_g; int rx1024tomaxoctets_gb; int rx512to1023octets_gb; int rx256to511octets_gb; int rx128to255octets_gb; int rx65to127octets_gb; int rx64octets_gb; int rxoversize_g; int rxundersize_g; int rxjabbererror; int rxrunterror; int rxcrcerror; int rxmulticastframes_g; int rxbroadcastframes_g; int rxoctetcount_g; int rxoctetcount_gb; int rxframecount_gb; int txvlanframes_g; int txpauseframes; int txframecount_g; int txoctetcount_g; int txunderflowerror; int txbroadcastframes_g; int txmulticastframes_gb; int txunicastframes_gb; int tx1024tomaxoctets_gb; int tx512to1023octets_gb; int tx256to511octets_gb; int tx128to255octets_gb; int tx65to127octets_gb; int tx64octets_gb; int txmulticastframes_g; int txframecount_gb; int txoctetcount_gb; } ;
struct xlgmac_pdata {scalar_t__ mac_regs; struct xlgmac_stats stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct xlgmac_pdata*,int ) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_44)
{
 struct xlgmac_stats *VAR_45 = &VAR_44->stats;
 u32 VAR_46;


 VAR_46 = FUNC_1(VAR_44->mac_regs + VAR_0);
 VAR_46 = FUNC_0(VAR_46, VAR_2,
         VAR_1, 1);
 FUNC_2(VAR_46, VAR_44->mac_regs + VAR_0);

 VAR_45->txoctetcount_gb +=
  FUNC_3(VAR_44, VAR_38);

 VAR_45->txframecount_gb +=
  FUNC_3(VAR_44, VAR_34);

 VAR_45->txbroadcastframes_g +=
  FUNC_3(VAR_44, VAR_33);

 VAR_45->txmulticastframes_g +=
  FUNC_3(VAR_44, VAR_37);

 VAR_45->tx64octets_gb +=
  FUNC_3(VAR_44, VAR_30);

 VAR_45->tx65to127octets_gb +=
  FUNC_3(VAR_44, VAR_31);

 VAR_45->tx128to255octets_gb +=
  FUNC_3(VAR_44, VAR_27);

 VAR_45->tx256to511octets_gb +=
  FUNC_3(VAR_44, VAR_28);

 VAR_45->tx512to1023octets_gb +=
  FUNC_3(VAR_44, VAR_29);

 VAR_45->tx1024tomaxoctets_gb +=
  FUNC_3(VAR_44, VAR_26);

 VAR_45->txunicastframes_gb +=
  FUNC_3(VAR_44, VAR_42);

 VAR_45->txmulticastframes_gb +=
  FUNC_3(VAR_44, VAR_36);

 VAR_45->txbroadcastframes_g +=
  FUNC_3(VAR_44, VAR_32);

 VAR_45->txunderflowerror +=
  FUNC_3(VAR_44, VAR_41);

 VAR_45->txoctetcount_g +=
  FUNC_3(VAR_44, VAR_39);

 VAR_45->txframecount_g +=
  FUNC_3(VAR_44, VAR_35);

 VAR_45->txpauseframes +=
  FUNC_3(VAR_44, VAR_40);

 VAR_45->txvlanframes_g +=
  FUNC_3(VAR_44, VAR_43);

 VAR_45->rxframecount_gb +=
  FUNC_3(VAR_44, VAR_12);

 VAR_45->rxoctetcount_gb +=
  FUNC_3(VAR_44, VAR_16);

 VAR_45->rxoctetcount_g +=
  FUNC_3(VAR_44, VAR_17);

 VAR_45->rxbroadcastframes_g +=
  FUNC_3(VAR_44, VAR_9);

 VAR_45->rxmulticastframes_g +=
  FUNC_3(VAR_44, VAR_15);

 VAR_45->rxcrcerror +=
  FUNC_3(VAR_44, VAR_10);

 VAR_45->rxrunterror +=
  FUNC_3(VAR_44, VAR_21);

 VAR_45->rxjabbererror +=
  FUNC_3(VAR_44, VAR_13);

 VAR_45->rxundersize_g +=
  FUNC_3(VAR_44, VAR_22);

 VAR_45->rxoversize_g +=
  FUNC_3(VAR_44, VAR_19);

 VAR_45->rx64octets_gb +=
  FUNC_3(VAR_44, VAR_7);

 VAR_45->rx65to127octets_gb +=
  FUNC_3(VAR_44, VAR_8);

 VAR_45->rx128to255octets_gb +=
  FUNC_3(VAR_44, VAR_4);

 VAR_45->rx256to511octets_gb +=
  FUNC_3(VAR_44, VAR_5);

 VAR_45->rx512to1023octets_gb +=
  FUNC_3(VAR_44, VAR_6);

 VAR_45->rx1024tomaxoctets_gb +=
  FUNC_3(VAR_44, VAR_3);

 VAR_45->rxunicastframes_g +=
  FUNC_3(VAR_44, VAR_23);

 VAR_45->rxlengtherror +=
  FUNC_3(VAR_44, VAR_14);

 VAR_45->rxoutofrangetype +=
  FUNC_3(VAR_44, VAR_18);

 VAR_45->rxpauseframes +=
  FUNC_3(VAR_44, VAR_20);

 VAR_45->rxfifooverflow +=
  FUNC_3(VAR_44, VAR_11);

 VAR_45->rxvlanframes_gb +=
  FUNC_3(VAR_44, VAR_24);

 VAR_45->rxwatchdogerror +=
  FUNC_3(VAR_44, VAR_25);


 VAR_46 = FUNC_1(VAR_44->mac_regs + VAR_0);
 VAR_46 = FUNC_0(VAR_46, VAR_2,
         VAR_1, 0);
 FUNC_2(VAR_46, VAR_44->mac_regs + VAR_0);
}
