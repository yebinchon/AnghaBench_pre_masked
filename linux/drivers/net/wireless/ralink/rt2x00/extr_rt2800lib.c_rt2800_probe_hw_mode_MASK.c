
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int rf; } ;
struct TYPE_13__ {unsigned int tx_chain_num; unsigned int rx_chain_num; } ;
struct TYPE_9__ {unsigned int tx_params; int* rx_mask; } ;
struct TYPE_12__ {int ht_supported; int cap; int ampdu_factor; int ampdu_density; TYPE_1__ mcs; } ;
struct hw_mode_spec {int supported_rates; int num_channels; struct channel_info* channels_info; TYPE_4__ ht; int supported_bands; void* channels; } ;
struct rt2x00_dev {int cap_flags; TYPE_3__ chip; TYPE_5__ default_ant; TYPE_6__* hw; int dev; struct hw_mode_spec spec; } ;
struct channel_info {char default_power1; char default_power2; char default_power3; } ;
struct TYPE_14__ {int max_rates; int max_report_rates; int max_rate_tries; TYPE_2__* wiphy; } ;
struct TYPE_10__ {int retry_short; int retry_long; int flags; } ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
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
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_33 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 struct channel_info* FUNC_6 (int,int,int ) ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 int FUNC_7 (struct rt2x00_dev*) ;
 char* FUNC_8 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_9 (struct rt2x00_dev*) ;
 int FUNC_10 (struct rt2x00_dev*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct rt2x00_dev*) ;
 int FUNC_13 (struct rt2x00_dev*,int const) ;

__attribute__((used)) static int FUNC_14(struct rt2x00_dev *VAR_41)
{
 struct hw_mode_spec *VAR_42 = &VAR_41->spec;
 struct channel_info *VAR_43;
 char *VAR_44;
 char *VAR_45;
 char *VAR_46;
 unsigned int VAR_47, VAR_48, VAR_49;
 u32 VAR_50;




 VAR_41->hw->wiphy->flags &= ~VAR_33;





 VAR_41->hw->wiphy->retry_short = 2;
 VAR_41->hw->wiphy->retry_long = 2;




 FUNC_5(VAR_41->hw, VAR_26);
 FUNC_5(VAR_41->hw, VAR_0);
 FUNC_5(VAR_41->hw, VAR_25);
 FUNC_5(VAR_41->hw, VAR_27);
 FUNC_5(VAR_41->hw, VAR_28);
 if (!FUNC_12(VAR_41))
  FUNC_5(VAR_41->hw, VAR_12);


 if (FUNC_9(VAR_41))
  FUNC_5(VAR_41->hw, VAR_24);

 FUNC_1(VAR_41->hw, VAR_41->dev);
 FUNC_2(VAR_41->hw,
    FUNC_8(VAR_41,
         VAR_4));
 VAR_41->hw->max_rates = 1;
 VAR_41->hw->max_report_rates = 7;
 VAR_41->hw->max_rate_tries = 1;




 VAR_42->supported_rates = VAR_31 | VAR_32;

 switch (VAR_41->chip.rf) {
 case 150:
 case 148:
  VAR_42->num_channels = 14;
  VAR_42->channels = VAR_34;
  break;

 case 149:
 case 147:
  VAR_42->num_channels = FUNC_0(VAR_34);
  VAR_42->channels = VAR_34;
  break;

 case 151:
 case 146:
 case 145:
 case 144:
 case 141:
 case 140:
 case 139:
 case 138:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_42->num_channels = 14;
  if (FUNC_7(VAR_41))
   VAR_42->channels = VAR_37;
  else
   VAR_42->channels = VAR_36;
  break;

 case 128:
  VAR_42->num_channels = FUNC_0(VAR_40);
  VAR_42->channels = VAR_40;
  break;

 case 143:
 case 142:
  VAR_42->num_channels = FUNC_0(VAR_36);
  VAR_42->channels = VAR_36;
  break;

 case 137:
  VAR_42->num_channels = FUNC_0(VAR_35);
  VAR_42->channels = VAR_35;
  break;

 case 129:
  VAR_50 = FUNC_10(VAR_41, VAR_22);
  if (FUNC_11(VAR_50, VAR_23)) {
   VAR_42->num_channels = FUNC_0(VAR_39);
   VAR_42->channels = VAR_39;
  } else {
   VAR_42->num_channels = FUNC_0(VAR_38);
   VAR_42->channels = VAR_38;
  }
  break;
 }

 if (FUNC_3(!VAR_42->channels))
  return -VAR_9;

 VAR_42->supported_bands = VAR_29;
 if (VAR_42->num_channels > 14)
  VAR_42->supported_bands |= VAR_30;




 if (!FUNC_13(VAR_41, 151))
  VAR_42->ht.ht_supported = 1;
 else
  VAR_42->ht.ht_supported = 0;

 VAR_42->ht.cap =
     VAR_17 |
     VAR_13 |
     VAR_15 |
     VAR_16;

 VAR_48 = VAR_41->default_ant.tx_chain_num;
 VAR_49 = VAR_41->default_ant.rx_chain_num;

 if (VAR_48 >= 2)
  VAR_42->ht.cap |= VAR_18;

 VAR_42->ht.cap |= VAR_49 << VAR_14;

 VAR_42->ht.ampdu_factor = (VAR_49 > 1) ? 3 : 2;
 VAR_42->ht.ampdu_density = 4;
 VAR_42->ht.mcs.tx_params = VAR_19;
 if (VAR_48 != VAR_49) {
  VAR_42->ht.mcs.tx_params |= VAR_21;
  VAR_42->ht.mcs.tx_params |=
      (VAR_48 - 1) << VAR_20;
 }

 switch (VAR_49) {
 case 3:
  VAR_42->ht.mcs.rx_mask[2] = 0xff;

 case 2:
  VAR_42->ht.mcs.rx_mask[1] = 0xff;

 case 1:
  VAR_42->ht.mcs.rx_mask[0] = 0xff;
  VAR_42->ht.mcs.rx_mask[4] = 0x1;
  break;
 }




 VAR_43 = FUNC_6(VAR_42->num_channels, sizeof(*VAR_43), VAR_11);
 if (!VAR_43)
  return -VAR_10;

 VAR_42->channels_info = VAR_43;

 VAR_44 = FUNC_8(VAR_41, VAR_7);
 VAR_45 = FUNC_8(VAR_41, VAR_8);

 if (VAR_41->default_ant.tx_chain_num > 2)
  VAR_46 = FUNC_8(VAR_41,
          VAR_3);
 else
  VAR_46 = ((void*)0);

 for (VAR_47 = 0; VAR_47 < 14; VAR_47++) {
  VAR_43[VAR_47].default_power1 = VAR_44[VAR_47];
  VAR_43[VAR_47].default_power2 = VAR_45[VAR_47];
  if (VAR_46)
   VAR_43[VAR_47].default_power3 = VAR_46[VAR_47];
 }

 if (VAR_42->num_channels > 14) {
  VAR_44 = FUNC_8(VAR_41,
          VAR_5);
  VAR_45 = FUNC_8(VAR_41,
          VAR_6);

  if (VAR_41->default_ant.tx_chain_num > 2)
   VAR_46 =
    FUNC_8(VAR_41,
         VAR_2);
  else
   VAR_46 = ((void*)0);

  for (VAR_47 = 14; VAR_47 < VAR_42->num_channels; VAR_47++) {
   VAR_43[VAR_47].default_power1 = VAR_44[VAR_47 - 14];
   VAR_43[VAR_47].default_power2 = VAR_45[VAR_47 - 14];
   if (VAR_46)
    VAR_43[VAR_47].default_power3 = VAR_46[VAR_47 - 14];
  }
 }

 switch (VAR_41->chip.rf) {
 case 151:
 case 146:
 case 145:
 case 144:
 case 139:
 case 143:
 case 142:
 case 141:
 case 140:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_4(VAR_1, &VAR_41->cap_flags);
  break;
 }

 return 0;
}
