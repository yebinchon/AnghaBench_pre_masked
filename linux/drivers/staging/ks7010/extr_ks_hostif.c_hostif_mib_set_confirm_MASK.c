
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int snooze_guard; } ;
struct TYPE_3__ {int rsn_enabled; int wpa_enabled; } ;
struct ks_wlan_private {int mac_address_valid; TYPE_2__ psstatus; TYPE_1__ wpa; int net_dev; } ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ks_wlan_private*) ;
 int FUNC_3 (struct ks_wlan_private*,int ) ;
 int FUNC_4 (int ,char*,int,int) ;

__attribute__((used)) static
void FUNC_5(struct ks_wlan_private *VAR_18)
{
 u32 VAR_19;
 u32 VAR_20;

 VAR_19 = FUNC_2(VAR_18);
 VAR_20 = FUNC_2(VAR_18);

 if (VAR_19) {

  FUNC_4(VAR_18->net_dev, "error :: attribute=%08X, status=%08X\n",
      VAR_20, VAR_19);
 }

 switch (VAR_20) {
 case 142:
  FUNC_3(VAR_18, VAR_8);
  break;
 case 151:
  FUNC_3(VAR_18, VAR_0);
  break;
 case 141:
  if (!VAR_18->wpa.wpa_enabled)
   FUNC_3(VAR_18, VAR_13);
  break;
 case 140:
  if (VAR_18->wpa.rsn_enabled)
   FUNC_3(VAR_18, VAR_11);
  else
   FUNC_3(VAR_18, VAR_14);
  break;
 case 139:
  if (VAR_18->wpa.rsn_enabled)
   FUNC_3(VAR_18, VAR_9);
  else
   FUNC_3(VAR_18, VAR_15);
  break;
 case 138:
  if (VAR_18->wpa.rsn_enabled)
   FUNC_3(VAR_18, VAR_10);
  else
   FUNC_3(VAR_18, VAR_16);
  break;
 case 137:
  if (!VAR_18->wpa.rsn_enabled)
   FUNC_3(VAR_18, VAR_17);
  break;
 case 147:
  if (!VAR_18->wpa.rsn_enabled)
   FUNC_3(VAR_18, VAR_12);
  break;
 case 143:
  FUNC_3(VAR_18, VAR_4);
  break;
 case 130:
  FUNC_3(VAR_18, VAR_6);
  break;
 case 134:
  FUNC_3(VAR_18, VAR_2);
  break;
 case 133:
  FUNC_3(VAR_18, VAR_1);
  break;
 case 136:
  VAR_18->mac_address_valid = 1;
  break;
 case 145:
  FUNC_3(VAR_18, VAR_5);
  break;
 case 144:
  FUNC_3(VAR_18, VAR_7);
  break;
 case 146:
  FUNC_3(VAR_18, VAR_3);
  break;
 case 150:
  if (FUNC_0(&VAR_18->psstatus.snooze_guard))
   FUNC_1(&VAR_18->psstatus.snooze_guard, 0);
  break;
 case 149:
  if (FUNC_0(&VAR_18->psstatus.snooze_guard))
   FUNC_1(&VAR_18->psstatus.snooze_guard, 0);
  break;
 case 148:
 case 132:
 case 135:
 case 129:
 case 128:
 case 131:
 default:
  break;
 }
}
