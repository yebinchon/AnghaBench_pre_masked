
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_stats {int rxwatchdogerror; int rxvlanframes_gb; int rxfifooverflow; int rxpauseframes; int rxoutofrangetype; int rxlengtherror; int rxunicastframes_g; int rx1024tomaxoctets_gb; int rx512to1023octets_gb; int rx256to511octets_gb; int rx128to255octets_gb; int rx65to127octets_gb; int rx64octets_gb; int rxoversize_g; int rxundersize_g; int rxjabbererror; int rxrunterror; int rxcrcerror; int rxmulticastframes_g; int rxbroadcastframes_g; int rxoctetcount_g; int rxoctetcount_gb; int rxframecount_gb; } ;
struct xlgmac_pdata {struct xlgmac_stats stats; scalar_t__ mac_regs; } ;


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
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 scalar_t__ FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct xlgmac_pdata*,int ) ;

__attribute__((used)) static void FUNC_3(struct xlgmac_pdata *VAR_70)
{
 unsigned int VAR_71 = FUNC_1(VAR_70->mac_regs + VAR_0);
 struct xlgmac_stats *VAR_72 = &VAR_70->stats;

 if (FUNC_0(VAR_71,
    VAR_20,
    VAR_19))
  VAR_72->rxframecount_gb +=
   FUNC_2(VAR_70, VAR_56);

 if (FUNC_0(VAR_71,
    VAR_28,
    VAR_27))
  VAR_72->rxoctetcount_gb +=
   FUNC_2(VAR_70, VAR_60);

 if (FUNC_0(VAR_71,
    VAR_30,
    VAR_29))
  VAR_72->rxoctetcount_g +=
   FUNC_2(VAR_70, VAR_61);

 if (FUNC_0(VAR_71,
    VAR_14,
    VAR_13))
  VAR_72->rxbroadcastframes_g +=
   FUNC_2(VAR_70, VAR_53);

 if (FUNC_0(VAR_71,
    VAR_26,
    VAR_25))
  VAR_72->rxmulticastframes_g +=
   FUNC_2(VAR_70, VAR_59);

 if (FUNC_0(VAR_71,
    VAR_16,
    VAR_15))
  VAR_72->rxcrcerror +=
   FUNC_2(VAR_70, VAR_54);

 if (FUNC_0(VAR_71,
    VAR_38,
    VAR_37))
  VAR_72->rxrunterror +=
   FUNC_2(VAR_70, VAR_65);

 if (FUNC_0(VAR_71,
    VAR_22,
    VAR_21))
  VAR_72->rxjabbererror +=
   FUNC_2(VAR_70, VAR_57);

 if (FUNC_0(VAR_71,
    VAR_40,
    VAR_39))
  VAR_72->rxundersize_g +=
   FUNC_2(VAR_70, VAR_66);

 if (FUNC_0(VAR_71,
    VAR_34,
    VAR_33))
  VAR_72->rxoversize_g +=
   FUNC_2(VAR_70, VAR_63);

 if (FUNC_0(VAR_71,
    VAR_10,
    VAR_9))
  VAR_72->rx64octets_gb +=
   FUNC_2(VAR_70, VAR_51);

 if (FUNC_0(VAR_71,
    VAR_12,
    VAR_11))
  VAR_72->rx65to127octets_gb +=
   FUNC_2(VAR_70, VAR_52);

 if (FUNC_0(VAR_71,
    VAR_4,
    VAR_3))
  VAR_72->rx128to255octets_gb +=
   FUNC_2(VAR_70, VAR_48);

 if (FUNC_0(VAR_71,
    VAR_6,
    VAR_5))
  VAR_72->rx256to511octets_gb +=
   FUNC_2(VAR_70, VAR_49);

 if (FUNC_0(VAR_71,
    VAR_8,
    VAR_7))
  VAR_72->rx512to1023octets_gb +=
   FUNC_2(VAR_70, VAR_50);

 if (FUNC_0(VAR_71,
    VAR_2,
    VAR_1))
  VAR_72->rx1024tomaxoctets_gb +=
   FUNC_2(VAR_70, VAR_47);

 if (FUNC_0(VAR_71,
    VAR_42,
    VAR_41))
  VAR_72->rxunicastframes_g +=
   FUNC_2(VAR_70, VAR_67);

 if (FUNC_0(VAR_71,
    VAR_24,
    VAR_23))
  VAR_72->rxlengtherror +=
   FUNC_2(VAR_70, VAR_58);

 if (FUNC_0(VAR_71,
    VAR_32,
    VAR_31))
  VAR_72->rxoutofrangetype +=
   FUNC_2(VAR_70, VAR_62);

 if (FUNC_0(VAR_71,
    VAR_36,
    VAR_35))
  VAR_72->rxpauseframes +=
   FUNC_2(VAR_70, VAR_64);

 if (FUNC_0(VAR_71,
    VAR_18,
    VAR_17))
  VAR_72->rxfifooverflow +=
   FUNC_2(VAR_70, VAR_55);

 if (FUNC_0(VAR_71,
    VAR_44,
    VAR_43))
  VAR_72->rxvlanframes_gb +=
   FUNC_2(VAR_70, VAR_68);

 if (FUNC_0(VAR_71,
    VAR_46,
    VAR_45))
  VAR_72->rxwatchdogerror +=
   FUNC_2(VAR_70, VAR_69);
}
