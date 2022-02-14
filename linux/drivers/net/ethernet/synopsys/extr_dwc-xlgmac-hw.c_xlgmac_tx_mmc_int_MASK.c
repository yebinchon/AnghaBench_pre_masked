
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_stats {int txvlanframes_g; int txpauseframes; int txframecount_g; int txoctetcount_g; int txunderflowerror; int txbroadcastframes_g; int txmulticastframes_gb; int txunicastframes_gb; int tx1024tomaxoctets_gb; int tx512to1023octets_gb; int tx256to511octets_gb; int tx128to255octets_gb; int tx65to127octets_gb; int tx64octets_gb; int txmulticastframes_g; int txframecount_gb; int txoctetcount_gb; } ;
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
 scalar_t__ FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct xlgmac_pdata*,int ) ;

__attribute__((used)) static void FUNC_3(struct xlgmac_pdata *VAR_55)
{
 unsigned int VAR_56 = FUNC_1(VAR_55->mac_regs + VAR_0);
 struct xlgmac_stats *VAR_57 = &VAR_55->stats;

 if (FUNC_0(VAR_56,
    VAR_26,
    VAR_25))
  VAR_57->txoctetcount_gb +=
   FUNC_2(VAR_55, VAR_49);

 if (FUNC_0(VAR_56,
    VAR_18,
    VAR_17))
  VAR_57->txframecount_gb +=
   FUNC_2(VAR_55, VAR_45);

 if (FUNC_0(VAR_56,
    VAR_16,
    VAR_15))
  VAR_57->txbroadcastframes_g +=
   FUNC_2(VAR_55, VAR_44);

 if (FUNC_0(VAR_56,
    VAR_24,
    VAR_23))
  VAR_57->txmulticastframes_g +=
   FUNC_2(VAR_55, VAR_48);

 if (FUNC_0(VAR_56,
    VAR_10,
    VAR_9))
  VAR_57->tx64octets_gb +=
   FUNC_2(VAR_55, VAR_41);

 if (FUNC_0(VAR_56,
    VAR_12,
    VAR_11))
  VAR_57->tx65to127octets_gb +=
   FUNC_2(VAR_55, VAR_42);

 if (FUNC_0(VAR_56,
    VAR_4,
    VAR_3))
  VAR_57->tx128to255octets_gb +=
   FUNC_2(VAR_55, VAR_38);

 if (FUNC_0(VAR_56,
    VAR_6,
    VAR_5))
  VAR_57->tx256to511octets_gb +=
   FUNC_2(VAR_55, VAR_39);

 if (FUNC_0(VAR_56,
    VAR_8,
    VAR_7))
  VAR_57->tx512to1023octets_gb +=
   FUNC_2(VAR_55, VAR_40);

 if (FUNC_0(VAR_56,
    VAR_2,
    VAR_1))
  VAR_57->tx1024tomaxoctets_gb +=
   FUNC_2(VAR_55, VAR_37);

 if (FUNC_0(VAR_56,
    VAR_34,
    VAR_33))
  VAR_57->txunicastframes_gb +=
   FUNC_2(VAR_55, VAR_53);

 if (FUNC_0(VAR_56,
    VAR_22,
    VAR_21))
  VAR_57->txmulticastframes_gb +=
   FUNC_2(VAR_55, VAR_47);

 if (FUNC_0(VAR_56,
    VAR_14,
    VAR_13))
  VAR_57->txbroadcastframes_g +=
   FUNC_2(VAR_55, VAR_43);

 if (FUNC_0(VAR_56,
    VAR_32,
    VAR_31))
  VAR_57->txunderflowerror +=
   FUNC_2(VAR_55, VAR_52);

 if (FUNC_0(VAR_56,
    VAR_28,
    VAR_27))
  VAR_57->txoctetcount_g +=
   FUNC_2(VAR_55, VAR_50);

 if (FUNC_0(VAR_56,
    VAR_20,
    VAR_19))
  VAR_57->txframecount_g +=
   FUNC_2(VAR_55, VAR_46);

 if (FUNC_0(VAR_56,
    VAR_30,
    VAR_29))
  VAR_57->txpauseframes +=
   FUNC_2(VAR_55, VAR_51);

 if (FUNC_0(VAR_56,
    VAR_36,
    VAR_35))
  VAR_57->txvlanframes_g +=
   FUNC_2(VAR_55, VAR_54);
}
