
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int channel; } ;
struct TYPE_4__ {int band; TYPE_2__ bss_descriptor; } ;
struct mwifiex_private {TYPE_3__* adapter; TYPE_1__ curr_bss_params; int adhoc_channel; } ;
struct cfg80211_ssid {int dummy; } ;
struct TYPE_6__ {int config_bands; int fw_cap_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_2 (struct mwifiex_private*,int ,int ,int ,struct cfg80211_ssid*,int) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_private*) ;

int
FUNC_5(struct mwifiex_private *VAR_4,
      struct cfg80211_ssid *VAR_5)
{
 FUNC_1(VAR_4->adapter, VAR_3, "info: Adhoc Channel = %d\n",
      VAR_4->adhoc_channel);
 FUNC_1(VAR_4->adapter, VAR_3, "info: curr_bss_params.channel = %d\n",
      VAR_4->curr_bss_params.bss_descriptor.channel);
 FUNC_1(VAR_4->adapter, VAR_3, "info: curr_bss_params.band = %d\n",
      VAR_4->curr_bss_params.band);

 if (FUNC_0(VAR_4->adapter->fw_cap_info) &&
     VAR_4->adapter->config_bands & VAR_0)
  FUNC_3(VAR_4);
 else
  FUNC_4(VAR_4);

 return FUNC_2(VAR_4, VAR_2,
    VAR_1, 0, VAR_5, 1);
}
