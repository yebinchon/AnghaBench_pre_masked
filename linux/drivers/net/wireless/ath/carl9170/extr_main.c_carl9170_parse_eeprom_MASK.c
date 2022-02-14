
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct survey_info {int dummy; } ;
struct ath_regulatory {int current_rd; } ;
struct TYPE_13__ {scalar_t__ length; int operating_flags; int mac_address; int * reg_domain; int tx_mask; int rx_mask; } ;
struct TYPE_9__ {struct ath_regulatory regulatory; } ;
struct ar9170 {int num_channels; TYPE_5__ eeprom; TYPE_8__* hw; int survey; TYPE_1__ common; } ;
struct TYPE_15__ {TYPE_4__* wiphy; } ;
struct TYPE_10__ {unsigned int tx_params; } ;
struct TYPE_11__ {TYPE_2__ mcs; } ;
struct TYPE_14__ {scalar_t__ n_channels; TYPE_3__ ht_cap; } ;
struct TYPE_12__ {TYPE_6__** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (int) ;
 TYPE_6__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ar9170 *VAR_13)
{
 struct ath_regulatory *VAR_14 = &VAR_13->common.regulatory;
 unsigned int VAR_15, VAR_16, VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;

 if (VAR_13->eeprom.length == FUNC_2(0xffff))
  return -VAR_3;

 VAR_15 = FUNC_3(VAR_13->eeprom.rx_mask);
 VAR_16 = FUNC_3(VAR_13->eeprom.tx_mask);

 if (VAR_15 != VAR_16) {
  VAR_17 = VAR_8;

  FUNC_1(!(VAR_16 >= 1 && VAR_16 <=
   VAR_6));

  VAR_17 = (VAR_16 - 1) <<
       VAR_7;

  VAR_11.ht_cap.mcs.tx_params |= VAR_17;
  VAR_12.ht_cap.mcs.tx_params |= VAR_17;
 }

 if (VAR_13->eeprom.operating_flags & VAR_0) {
  VAR_13->hw->wiphy->bands[VAR_9] =
   &VAR_11;
  VAR_19 += VAR_11.n_channels;
  VAR_18++;
 }
 if (VAR_13->eeprom.operating_flags & VAR_1) {
  VAR_13->hw->wiphy->bands[VAR_10] =
   &VAR_12;
  VAR_19 += VAR_12.n_channels;
  VAR_18++;
 }

 if (!VAR_18)
  return -VAR_2;

 VAR_13->survey = FUNC_4(VAR_19, sizeof(struct survey_info), VAR_5);
 if (!VAR_13->survey)
  return -VAR_4;
 VAR_13->num_channels = VAR_19;

 VAR_14->current_rd = FUNC_5(VAR_13->eeprom.reg_domain[0]);


 FUNC_0(VAR_13->hw, VAR_13->eeprom.mac_address);

 return 0;
}
