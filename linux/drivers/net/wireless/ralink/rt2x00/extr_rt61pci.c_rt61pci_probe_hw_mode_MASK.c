
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hw_mode_spec {int supported_rates; int num_channels; struct channel_info* channels_info; int supported_bands; int channels; } ;
struct rt2x00_dev {TYPE_2__* hw; int dev; struct hw_mode_spec spec; } ;
struct channel_info {void* default_power1; void* max_power; } ;
struct TYPE_6__ {int max_rates; int max_report_rates; int max_rate_tries; TYPE_1__* wiphy; } ;
struct TYPE_5__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_3 (char) ;
 int VAR_16 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 struct channel_info* FUNC_5 (int,int,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 char* FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_8 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_9(struct rt2x00_dev *VAR_19)
{
 struct hw_mode_spec *VAR_20 = &VAR_19->spec;
 struct channel_info *VAR_21;
 char *VAR_22;
 unsigned int VAR_23;




 VAR_19->hw->wiphy->flags &= ~VAR_16;




 FUNC_4(VAR_19->hw, VAR_7);
 FUNC_4(VAR_19->hw, VAR_11);
 FUNC_4(VAR_19->hw, VAR_5);
 FUNC_4(VAR_19->hw, VAR_10);

 FUNC_1(VAR_19->hw, VAR_19->dev);
 FUNC_2(VAR_19->hw,
    FUNC_6(VAR_19,
         VAR_0));
 VAR_19->hw->max_rates = 1;
 VAR_19->hw->max_report_rates = 7;
 VAR_19->hw->max_rate_tries = 1;




 VAR_20->supported_bands = VAR_12;
 VAR_20->supported_rates = VAR_14 | VAR_15;

 if (!FUNC_7(VAR_19)) {
  VAR_20->num_channels = 14;
  VAR_20->channels = VAR_17;
 } else {
  VAR_20->num_channels = 14;
  VAR_20->channels = VAR_18;
 }

 if (FUNC_8(VAR_19, VAR_8) || FUNC_8(VAR_19, VAR_9)) {
  VAR_20->supported_bands |= VAR_13;
  VAR_20->num_channels = FUNC_0(VAR_18);
 }




 VAR_21 = FUNC_5(VAR_20->num_channels, sizeof(*VAR_21), VAR_4);
 if (!VAR_21)
  return -VAR_3;

 VAR_20->channels_info = VAR_21;

 VAR_22 = FUNC_6(VAR_19, VAR_2);
 for (VAR_23 = 0; VAR_23 < 14; VAR_23++) {
  VAR_21[VAR_23].max_power = VAR_6;
  VAR_21[VAR_23].default_power1 = FUNC_3(VAR_22[VAR_23]);
 }

 if (VAR_20->num_channels > 14) {
  VAR_22 = FUNC_6(VAR_19, VAR_1);
  for (VAR_23 = 14; VAR_23 < VAR_20->num_channels; VAR_23++) {
   VAR_21[VAR_23].max_power = VAR_6;
   VAR_21[VAR_23].default_power1 =
     FUNC_3(VAR_22[VAR_23 - 14]);
  }
 }

 return 0;
}
