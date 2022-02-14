
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bss_info {scalar_t__ BSStype; int channel; scalar_t__ preamble; scalar_t__ UsingWEP; int beacon_period; int SSIDsize; int SSID; int BSSID; } ;
struct atmel_private {scalar_t__ operating_mode; int listen_interval; int channel; scalar_t__ preamble; scalar_t__ station_is_associated; scalar_t__ wep_is_on; int beacon_period; scalar_t__ power_mode; scalar_t__ use_wpa; int SSID_size; int SSID; int CurrentBSSID; struct bss_info* BSSinfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 int FUNC_1 (struct atmel_private*,int ,int ,int) ;
 int FUNC_2 (struct atmel_private*,int ,int ,scalar_t__) ;
 int FUNC_3 (struct atmel_private*) ;
 int FUNC_4 (struct atmel_private*,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct atmel_private *VAR_13, int VAR_14)
{
 struct bss_info *VAR_15 = &VAR_13->BSSinfo[VAR_14];

 FUNC_5(VAR_13->CurrentBSSID, VAR_15->BSSID, VAR_3);
 FUNC_5(VAR_13->SSID, VAR_15->SSID, VAR_13->SSID_size = VAR_15->SSIDsize);


 if (VAR_13->use_wpa)
  FUNC_3(VAR_13);



 if (VAR_15->BSStype == VAR_4 &&
     VAR_13->operating_mode != VAR_4 &&
     VAR_13->power_mode) {
  VAR_13->power_mode = 0;
  VAR_13->listen_interval = 1;
  FUNC_2(VAR_13, VAR_10,
          VAR_9, VAR_0);
  FUNC_1(VAR_13, VAR_10,
    VAR_8, 1);
 }

 VAR_13->operating_mode = VAR_15->BSStype;
 VAR_13->channel = VAR_15->channel & 0x7f;
 VAR_13->beacon_period = VAR_15->beacon_period;

 if (VAR_13->preamble != VAR_15->preamble) {
  VAR_13->preamble = VAR_15->preamble;
  FUNC_2(VAR_13, VAR_7,
          VAR_6, VAR_15->preamble);
 }

 if (!VAR_13->wep_is_on && VAR_15->UsingWEP) {
  FUNC_0(VAR_13, VAR_12);
  VAR_13->station_is_associated = 0;
  return;
 }

 if (VAR_13->wep_is_on && !VAR_15->UsingWEP) {
  FUNC_0(VAR_13, VAR_12);
  VAR_13->station_is_associated = 0;
  return;
 }

 FUNC_0(VAR_13, VAR_11);

 if (VAR_13->operating_mode == VAR_5)
  FUNC_4(VAR_13, VAR_2);
 else
  FUNC_4(VAR_13, VAR_1);
}
