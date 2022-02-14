
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_mode_spec {struct channel_info* channels_info; int num_channels; int channels; int supported_rates; int supported_bands; } ;
struct rt2x00_dev {int hw; int dev; struct hw_mode_spec spec; } ;
struct channel_info {void* default_power1; void* max_power; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_3 (char) ;
 int FUNC_4 (int ,int ) ;
 struct channel_info* FUNC_5 (int ,int,int ) ;
 int VAR_11 ;
 char* FUNC_6 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_12)
{
 struct hw_mode_spec *VAR_13 = &VAR_12->spec;
 struct channel_info *VAR_14;
 char *VAR_15;
 unsigned int VAR_16;




 FUNC_4(VAR_12->hw, VAR_6);
 FUNC_4(VAR_12->hw, VAR_8);
 FUNC_4(VAR_12->hw, VAR_4);
 FUNC_4(VAR_12->hw, VAR_7);

 FUNC_1(VAR_12->hw, VAR_12->dev);
 FUNC_2(VAR_12->hw,
    FUNC_6(VAR_12,
         VAR_0));




 VAR_13->supported_bands = VAR_9;
 VAR_13->supported_rates = VAR_10;

 VAR_13->num_channels = FUNC_0(VAR_11);
 VAR_13->channels = VAR_11;




 VAR_14 = FUNC_5(VAR_13->num_channels, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_13->channels_info = VAR_14;

 VAR_15 = FUNC_6(VAR_12, VAR_1);
 for (VAR_16 = 0; VAR_16 < 14; VAR_16++) {
  VAR_14[VAR_16].max_power = FUNC_3(VAR_5);
  VAR_14[VAR_16].default_power1 = FUNC_3(VAR_15[VAR_16]);
 }

 return 0;
}
