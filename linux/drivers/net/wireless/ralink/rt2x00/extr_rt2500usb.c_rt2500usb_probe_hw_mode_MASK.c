
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hw_mode_spec {int supported_rates; int num_channels; struct channel_info* channels_info; void* channels; int supported_bands; } ;
struct rt2x00_dev {TYPE_2__* hw; int dev; struct hw_mode_spec spec; } ;
struct channel_info {int default_power1; void* max_power; } ;
struct TYPE_6__ {TYPE_1__* wiphy; } ;
struct TYPE_5__ {int flags; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (char) ;
 int VAR_20 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 struct channel_info* FUNC_5 (int,int,int ) ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 char* FUNC_6 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_8(struct rt2x00_dev *VAR_27)
{
 struct hw_mode_spec *VAR_28 = &VAR_27->spec;
 struct channel_info *VAR_29;
 char *VAR_30;
 unsigned int VAR_31;
 FUNC_4(VAR_27->hw, VAR_6);
 FUNC_4(VAR_27->hw, VAR_15);
 FUNC_4(VAR_27->hw, VAR_13);
 FUNC_4(VAR_27->hw, VAR_14);




 VAR_27->hw->wiphy->flags &= ~VAR_20;

 FUNC_1(VAR_27->hw, VAR_27->dev);
 FUNC_2(VAR_27->hw,
    FUNC_6(VAR_27,
         VAR_1));




 VAR_28->supported_bands = VAR_16;
 VAR_28->supported_rates = VAR_18 | VAR_19;

 if (FUNC_7(VAR_27, VAR_7)) {
  VAR_28->num_channels = FUNC_0(VAR_22);
  VAR_28->channels = VAR_22;
 } else if (FUNC_7(VAR_27, VAR_8)) {
  VAR_28->num_channels = FUNC_0(VAR_23);
  VAR_28->channels = VAR_23;
 } else if (FUNC_7(VAR_27, VAR_9)) {
  VAR_28->num_channels = FUNC_0(VAR_24);
  VAR_28->channels = VAR_24;
 } else if (FUNC_7(VAR_27, VAR_10)) {
  VAR_28->num_channels = FUNC_0(VAR_25);
  VAR_28->channels = VAR_25;
 } else if (FUNC_7(VAR_27, VAR_11)) {
  VAR_28->num_channels = FUNC_0(VAR_26);
  VAR_28->channels = VAR_26;
 } else if (FUNC_7(VAR_27, VAR_12)) {
  VAR_28->supported_bands |= VAR_17;
  VAR_28->num_channels = FUNC_0(VAR_21);
  VAR_28->channels = VAR_21;
 }




 VAR_29 = FUNC_5(VAR_28->num_channels, sizeof(*VAR_29), VAR_4);
 if (!VAR_29)
  return -VAR_3;

 VAR_28->channels_info = VAR_29;

 VAR_30 = FUNC_6(VAR_27, VAR_2);
 for (VAR_31 = 0; VAR_31 < 14; VAR_31++) {
  VAR_29[VAR_31].max_power = VAR_5;
  VAR_29[VAR_31].default_power1 = FUNC_3(VAR_30[VAR_31]);
 }

 if (VAR_28->num_channels > 14) {
  for (VAR_31 = 14; VAR_31 < VAR_28->num_channels; VAR_31++) {
   VAR_29[VAR_31].max_power = VAR_5;
   VAR_29[VAR_31].default_power1 = VAR_0;
  }
 }

 return 0;
}
