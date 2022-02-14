
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int privacy_invoked; TYPE_2__* wep_key; int wep_index; } ;
struct TYPE_4__ {int wpa_enabled; } ;
struct ks_wlan_private {TYPE_3__ reg; TYPE_1__ wpa; } ;
struct TYPE_5__ {int size; int * val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_1 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_2 (struct ks_wlan_private*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct ks_wlan_private *VAR_6, int VAR_7)
{
 switch (VAR_7) {
 case 132:
  FUNC_1(VAR_6, VAR_1,
        VAR_6->reg.wep_index);
  break;
 case 131:
  if (VAR_6->wpa.wpa_enabled)
   return;
  FUNC_2(VAR_6,
            VAR_2,
            &VAR_6->reg.wep_key[0].val[0],
            VAR_6->reg.wep_key[0].size);
  break;
 case 130:
  if (VAR_6->wpa.wpa_enabled)
   return;
  FUNC_2(VAR_6,
            VAR_3,
            &VAR_6->reg.wep_key[1].val[0],
            VAR_6->reg.wep_key[1].size);
  break;
 case 129:
  if (VAR_6->wpa.wpa_enabled)
   return;
  FUNC_2(VAR_6,
            VAR_4,
            &VAR_6->reg.wep_key[2].val[0],
            VAR_6->reg.wep_key[2].size);
  break;
 case 128:
  if (VAR_6->wpa.wpa_enabled)
   return;
  FUNC_2(VAR_6,
            VAR_5,
            &VAR_6->reg.wep_key[3].val[0],
            VAR_6->reg.wep_key[3].size);
  break;
 case 133:
  FUNC_0(VAR_6, VAR_0,
         VAR_6->reg.privacy_invoked);
  break;
 }
}
