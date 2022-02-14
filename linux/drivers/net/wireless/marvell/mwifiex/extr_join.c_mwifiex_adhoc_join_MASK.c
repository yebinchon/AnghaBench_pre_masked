
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ssid_len; scalar_t__ ssid; } ;
struct TYPE_6__ {scalar_t__ bss_mode; scalar_t__ channel; TYPE_4__ ssid; } ;
struct TYPE_7__ {scalar_t__ band; TYPE_1__ bss_descriptor; } ;
struct mwifiex_private {TYPE_2__ curr_bss_params; TYPE_5__* adapter; } ;
struct TYPE_8__ {scalar_t__ ssid_len; scalar_t__ ssid; } ;
struct mwifiex_bssdescriptor {int disable_11ac; int disable_11n; TYPE_3__ ssid; } ;
struct TYPE_10__ {int config_bands; int fw_cap_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_5__*,int ,char*,...) ;
 int FUNC_2 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_bssdescriptor*,int) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_private*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;

int FUNC_6(struct mwifiex_private *VAR_5,
         struct mwifiex_bssdescriptor *VAR_6)
{
 FUNC_1(VAR_5->adapter, VAR_3,
      "info: adhoc join: curr_bss ssid =%s\n",
      VAR_5->curr_bss_params.bss_descriptor.ssid.ssid);
 FUNC_1(VAR_5->adapter, VAR_3,
      "info: adhoc join: curr_bss ssid_len =%u\n",
      VAR_5->curr_bss_params.bss_descriptor.ssid.ssid_len);
 FUNC_1(VAR_5->adapter, VAR_3, "info: adhoc join: ssid =%s\n",
      VAR_6->ssid.ssid);
 FUNC_1(VAR_5->adapter, VAR_3, "info: adhoc join: ssid_len =%u\n",
      VAR_6->ssid.ssid_len);


 if (VAR_5->curr_bss_params.bss_descriptor.ssid.ssid_len &&
     !FUNC_5(&VAR_6->ssid,
         &VAR_5->curr_bss_params.bss_descriptor.ssid) &&
     (VAR_5->curr_bss_params.bss_descriptor.bss_mode ==
       VAR_4)) {
  FUNC_1(VAR_5->adapter, VAR_3,
       "info: ADHOC_J_CMD: new ad-hoc SSID\t"
       "is the same as current; not attempting to re-join\n");
  return -1;
 }

 if (FUNC_0(VAR_5->adapter->fw_cap_info) &&
     !VAR_6->disable_11n && !VAR_6->disable_11ac &&
     VAR_5->adapter->config_bands & VAR_0)
  FUNC_3(VAR_5);
 else
  FUNC_4(VAR_5);

 FUNC_1(VAR_5->adapter, VAR_3,
      "info: curr_bss_params.channel = %d\n",
      VAR_5->curr_bss_params.bss_descriptor.channel);
 FUNC_1(VAR_5->adapter, VAR_3,
      "info: curr_bss_params.band = %c\n",
      VAR_5->curr_bss_params.band);

 return FUNC_2(VAR_5, VAR_2,
    VAR_1, 0, VAR_6, 1);
}
