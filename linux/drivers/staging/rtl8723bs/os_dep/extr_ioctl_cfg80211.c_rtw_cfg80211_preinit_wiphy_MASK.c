
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int interface_modes; int software_iftypes; int flags; int max_sched_scan_reqs; int * wowlan; int max_sched_scan_ssids; int * bands; int n_cipher_suites; int cipher_suites; int mgmt_stypes; int max_remain_on_channel_duration; int max_num_pmkids; int max_scan_ie_len; int max_scan_ssids; int signal_type; } ;
struct TYPE_2__ {scalar_t__ power_mgnt; } ;
struct adapter {TYPE_1__ registrypriv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_2 (size_t) ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_19, struct wiphy *VAR_20)
{

 VAR_20->signal_type = VAR_0;

 VAR_20->max_scan_ssids = VAR_11;
 VAR_20->max_scan_ie_len = VAR_10;
 VAR_20->max_num_pmkids = VAR_8;

 VAR_20->max_remain_on_channel_duration = VAR_9;

 VAR_20->interface_modes = FUNC_1(VAR_6)
        | FUNC_1(VAR_3)
        | FUNC_1(VAR_4)
        | FUNC_1(VAR_5)
        ;

 VAR_20->mgmt_stypes = VAR_16;

 VAR_20->software_iftypes |= FUNC_1(VAR_5);

 VAR_20->cipher_suites = VAR_17;
 VAR_20->n_cipher_suites = FUNC_0(VAR_17);


 VAR_20->bands[VAR_2] = FUNC_2(VAR_2);

 VAR_20->flags |= VAR_12;
 VAR_20->flags |= VAR_14 | VAR_13;
 if (VAR_19->registrypriv.power_mgnt != VAR_7)
  VAR_20->flags |= VAR_15;
 else
  VAR_20->flags &= ~VAR_15;
}
