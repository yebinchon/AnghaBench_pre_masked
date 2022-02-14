
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_vif {int type; } ;
struct ath_common {int * macaddr; int * curbssid; } ;
struct ar9170 {scalar_t__ sniffer_enabled; scalar_t__ rx_software_decryption; struct ath_common common; } ;


 int VAR_0 ;
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





 int FUNC_0 (int,char*,int) ;
 struct ieee80211_vif* FUNC_1 (struct ar9170*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct ar9170*,int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(struct ar9170 *VAR_19)
{
 struct ieee80211_vif *VAR_20;
 struct ath_common *VAR_21 = &VAR_19->common;
 u8 *VAR_22, *VAR_23;
 u32 VAR_24 = VAR_2;
 u32 VAR_25 = VAR_5 |
  VAR_6;
 u32 VAR_26 = VAR_14 |
        VAR_16;
 u32 VAR_27 = VAR_17;
 int VAR_28 = 0;

 FUNC_7();
 VAR_20 = FUNC_1(VAR_19);

 if (VAR_20) {
  VAR_22 = VAR_21->macaddr;
  VAR_23 = VAR_21->curbssid;

  switch (VAR_20->type) {
  case 132:
   VAR_24 |= VAR_3;
   break;
  case 130:
  case 131:
   VAR_24 |= VAR_0;


   VAR_26 |= VAR_15;
   break;
  case 128:
   VAR_24 |= VAR_1;
   VAR_26 |= VAR_15;
   break;
  case 129:
   VAR_24 |= VAR_4;
   VAR_26 |= VAR_15;
   break;
  default:
   FUNC_0(1, "Unsupported operation mode %x\n", VAR_20->type);
   VAR_28 = -VAR_18;
   break;
  }
 } else {
  VAR_24 |= VAR_4;
  VAR_26 |= VAR_15;
  VAR_22 = VAR_21->macaddr;
  VAR_23 = ((void*)0);
 }
 FUNC_8();

 if (VAR_28)
  return VAR_28;

 if (VAR_19->rx_software_decryption)
  VAR_25 |= VAR_7;

 if (VAR_19->sniffer_enabled) {
  VAR_25 |= VAR_7;
 }

 VAR_28 = FUNC_6(VAR_19, VAR_11, VAR_22);
 if (VAR_28)
  return VAR_28;

 VAR_28 = FUNC_6(VAR_19, VAR_8, VAR_23);
 if (VAR_28)
  return VAR_28;

 FUNC_3(VAR_19);
 FUNC_2(VAR_13, VAR_27);
 FUNC_2(VAR_9, VAR_24);
 FUNC_2(VAR_10, VAR_25);
 FUNC_2(VAR_12, VAR_26);
 FUNC_4();

 return FUNC_5();
}
