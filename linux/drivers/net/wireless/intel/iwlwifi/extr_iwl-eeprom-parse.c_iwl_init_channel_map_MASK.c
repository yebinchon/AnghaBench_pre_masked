
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct iwl_nvm_data {int max_tx_pwr_half_dbm; struct ieee80211_channel* channels; } ;
struct iwl_eeprom_channel {int flags; int max_power_avg; } ;
struct iwl_cfg {TYPE_1__* eeprom_params; } ;
struct ieee80211_channel {int max_power; scalar_t__ hw_value; int flags; void* band; int center_freq; } ;
struct device {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {scalar_t__* regulatory_bands; scalar_t__ enhanced_txpower; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct device*,char*,scalar_t__,...) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (struct device*,struct iwl_nvm_data*,scalar_t__ const*,size_t,int) ;
 int FUNC_4 (struct iwl_cfg const*,scalar_t__ const*,size_t,int,int*,struct iwl_eeprom_channel const**,scalar_t__ const**) ;
 int FUNC_5 (struct device*,struct iwl_nvm_data*,int,int,scalar_t__ const,struct iwl_eeprom_channel const*,int ) ;
 int FUNC_6 (int ,int,int) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_7(struct device *VAR_19, const struct iwl_cfg *VAR_20,
    struct iwl_nvm_data *VAR_21,
    const u8 *VAR_22, size_t VAR_23)
{
 int VAR_24, VAR_25;
 const struct iwl_eeprom_channel *VAR_26;
 const u8 *VAR_27;
 int VAR_28;
 int VAR_29 = 0;




 for (VAR_24 = 1; VAR_24 <= 5; VAR_24++) {
  struct ieee80211_channel *VAR_30;

  FUNC_4(VAR_20, VAR_22, VAR_23, VAR_24,
     &VAR_28, &VAR_26,
     &VAR_27);


  for (VAR_25 = 0; VAR_25 < VAR_28; VAR_25++) {
   const struct iwl_eeprom_channel *VAR_31;

   VAR_31 = &VAR_26[VAR_25];

   if (!(VAR_31->flags & VAR_5)) {
    FUNC_1(VAR_19,
       "Ch. %d Flags %x [%sGHz] - No traffic\n",
       VAR_27[VAR_25],
       VAR_26[VAR_25].flags,
       (VAR_24 != 1) ? "5.2" : "2.4");
    continue;
   }

   VAR_30 = &VAR_21->channels[VAR_29];
   VAR_29++;

   VAR_30->hw_value = VAR_27[VAR_25];
   VAR_30->band = (VAR_24 == 1) ? VAR_13
          : VAR_14;
   VAR_30->center_freq =
    FUNC_2(
     VAR_30->hw_value, VAR_30->band);


   VAR_30->flags = VAR_8;

   if (!(VAR_31->flags & VAR_3))
    VAR_30->flags |= VAR_11;

   if (!(VAR_31->flags & VAR_2))
    VAR_30->flags |= VAR_11;

   if (VAR_31->flags & VAR_4)
    VAR_30->flags |= VAR_12;


   VAR_30->max_power =
    VAR_26[VAR_25].max_power_avg;
   FUNC_1(VAR_19,
      "Ch. %d [%sGHz] %s%s%s%s%s%s(0x%02x %ddBm): Ad-Hoc %ssupported\n",
      VAR_30->hw_value,
      (VAR_24 != 1) ? "5.2" : "2.4",
      FUNC_0(VAR_16),
      FUNC_0(VAR_7),
      FUNC_0(VAR_0),
      FUNC_0(VAR_15),
      FUNC_0(VAR_17),
      FUNC_0(VAR_1),
      VAR_26[VAR_25].flags,
      VAR_26[VAR_25].max_power_avg,
      ((VAR_26[VAR_25].flags &
       VAR_3) &&
       !(VAR_26[VAR_25].flags &
       VAR_4))
      ? "" : "not ");
  }
 }

 if (VAR_20->eeprom_params->enhanced_txpower) {






  FUNC_3(VAR_19, VAR_21, VAR_22, VAR_23,
         VAR_29);
 } else {

  int VAR_32;

  VAR_21->max_tx_pwr_half_dbm = -128;

  for (VAR_32 = 0; VAR_32 < VAR_29; VAR_32++)
   VAR_21->max_tx_pwr_half_dbm =
    FUNC_6(VAR_18, VAR_21->max_tx_pwr_half_dbm,
          VAR_21->channels[VAR_32].max_power * 2);
 }


 if (VAR_20->eeprom_params->regulatory_bands[5] ==
    VAR_6 &&
     VAR_20->eeprom_params->regulatory_bands[6] ==
    VAR_6)
  return VAR_29;


 for (VAR_24 = 6; VAR_24 <= 7; VAR_24++) {
  enum nl80211_band VAR_33;

  FUNC_4(VAR_20, VAR_22, VAR_23, VAR_24,
     &VAR_28, &VAR_26,
     &VAR_27);


  VAR_33 = (VAR_24 == 6) ? VAR_13
           : VAR_14;


  for (VAR_25 = 0; VAR_25 < VAR_28; VAR_25++) {

   FUNC_5(VAR_19, VAR_21, VAR_29, VAR_33,
            VAR_27[VAR_25],
            &VAR_26[VAR_25],
            VAR_10);


   FUNC_5(VAR_19, VAR_21, VAR_29, VAR_33,
            VAR_27[VAR_25] + 4,
            &VAR_26[VAR_25],
            VAR_9);
  }
 }

 return VAR_29;
}
