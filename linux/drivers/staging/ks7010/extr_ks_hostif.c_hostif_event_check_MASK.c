
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int* buff; size_t qtail; } ;
struct ks_wlan_private {TYPE_1__ hostt; int confirm_wait; int net_dev; } ;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ks_wlan_private*) ;
 int FUNC_2 (struct ks_wlan_private*) ;
 int FUNC_3 (struct ks_wlan_private*) ;
 int FUNC_4 (struct ks_wlan_private*) ;
 int FUNC_5 (struct ks_wlan_private*) ;
 int FUNC_6 (struct ks_wlan_private*) ;
 int FUNC_7 (struct ks_wlan_private*) ;
 int FUNC_8 (struct ks_wlan_private*) ;
 int FUNC_9 (struct ks_wlan_private*) ;
 int FUNC_10 (struct ks_wlan_private*) ;
 int FUNC_11 (struct ks_wlan_private*) ;
 int FUNC_12 (struct ks_wlan_private*) ;
 int FUNC_13 (struct ks_wlan_private*) ;
 int FUNC_14 (struct ks_wlan_private*) ;
 int FUNC_15 (struct ks_wlan_private*) ;
 int FUNC_16 (struct ks_wlan_private*) ;
 int FUNC_17 (struct ks_wlan_private*) ;
 int FUNC_18 (int ,char*,int) ;

__attribute__((used)) static
void FUNC_19(struct ks_wlan_private *VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 switch (VAR_2) {
 case 142:
  FUNC_6(VAR_1);
  break;
 case 139:
  FUNC_8(VAR_1);
  break;
 case 138:
  FUNC_9(VAR_1);
  break;
 case 134:
  FUNC_12(VAR_1);
  break;
 case 130:
  FUNC_15(VAR_1);
  break;
 case 129:
  FUNC_16(VAR_1);
  break;
 case 143:
  FUNC_5(VAR_1);
  break;
 case 128:
  FUNC_17(VAR_1);
  break;
 case 133:
  FUNC_13(VAR_1);
  break;
 case 140:
 case 141:
  FUNC_7(VAR_1);
  break;
 case 146:
 case 147:
  FUNC_2(VAR_1);
  break;
 case 144:
  FUNC_3(VAR_1);
  break;
 case 137:
  FUNC_10(VAR_1);
  break;
 case 132:
  FUNC_4(VAR_1);
  break;
 case 136:
 case 135:
  FUNC_11(VAR_1);
  break;
 case 131:
  FUNC_14(VAR_1);
  break;
 case 145:
 default:
  FUNC_18(VAR_1->net_dev, "undefined event[%04X]\n", VAR_2);

  FUNC_0(&VAR_1->confirm_wait);
  break;
 }


 VAR_1->hostt.buff[VAR_1->hostt.qtail] = VAR_2;
 VAR_1->hostt.qtail = (VAR_1->hostt.qtail + 1) % VAR_0;
}
