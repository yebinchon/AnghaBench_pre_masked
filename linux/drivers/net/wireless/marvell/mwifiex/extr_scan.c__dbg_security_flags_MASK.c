
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int encryption_mode; scalar_t__ wpa2_enabled; scalar_t__ wpa_enabled; scalar_t__ wep_enabled; } ;
struct mwifiex_private {TYPE_4__ sec_info; int adapter; } ;
struct mwifiex_bssdescriptor {int privacy; TYPE_3__* bcn_rsn_ie; TYPE_5__* bcn_wpa_ie; } ;
struct TYPE_6__ {int element_id; } ;
struct TYPE_10__ {TYPE_1__ vend_hdr; } ;
struct TYPE_7__ {int element_id; } ;
struct TYPE_8__ {TYPE_2__ ieee_hdr; } ;


 int FUNC_0 (int ,int,char*,char const*,char const*,int ,int ,char*,char*,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, const char *VAR_1, const char *VAR_2,
      struct mwifiex_private *VAR_3,
      struct mwifiex_bssdescriptor *VAR_4)
{
 FUNC_0(VAR_3->adapter, VAR_0,
       "info: %s: %s:\twpa_ie=%#x wpa2_ie=%#x WEP=%s WPA=%s WPA2=%s\tEncMode=%#x privacy=%#x\n",
       VAR_1, VAR_2,
       VAR_4->bcn_wpa_ie ?
       VAR_4->bcn_wpa_ie->vend_hdr.element_id : 0,
       VAR_4->bcn_rsn_ie ?
       VAR_4->bcn_rsn_ie->ieee_hdr.element_id : 0,
       VAR_3->sec_info.wep_enabled ? "e" : "d",
       VAR_3->sec_info.wpa_enabled ? "e" : "d",
       VAR_3->sec_info.wpa2_enabled ? "e" : "d",
       VAR_3->sec_info.encryption_mode,
       VAR_4->privacy);
}
