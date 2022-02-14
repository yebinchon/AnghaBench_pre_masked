
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct wcn36xx_vif {int dummy; } ;
struct wcn36xx_sta {int dummy; } ;
struct wcn36xx {scalar_t__ rf_id; TYPE_2__* hw; int dev; } ;
struct TYPE_5__ {int max_listen_interval; int queues; int sta_data_size; int vif_data_size; TYPE_1__* wiphy; } ;
struct TYPE_4__ {int interface_modes; int * wowlan; int n_cipher_suites; int const* cipher_suites; int max_scan_ie_len; int max_scan_ssids; int ** bands; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;




 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_5(struct wcn36xx *VAR_20)
{
 static const u32 VAR_21[] = {
  128,
  129,
  130,
  131,
 };

 FUNC_3(VAR_20->hw, VAR_14);
 FUNC_3(VAR_20->hw, VAR_0);
 FUNC_3(VAR_20->hw, VAR_1);
 FUNC_3(VAR_20->hw, VAR_13);
 FUNC_3(VAR_20->hw, VAR_11);
 FUNC_3(VAR_20->hw, VAR_2);
 FUNC_3(VAR_20->hw, VAR_12);

 VAR_20->hw->wiphy->interface_modes = FUNC_1(VAR_9) |
  FUNC_1(VAR_7) |
  FUNC_1(VAR_6) |
  FUNC_1(VAR_8);

 VAR_20->hw->wiphy->bands[VAR_3] = &VAR_17;
 if (VAR_20->rf_id != VAR_10)
  VAR_20->hw->wiphy->bands[VAR_4] = &VAR_18;

 VAR_20->hw->wiphy->max_scan_ssids = VAR_16;
 VAR_20->hw->wiphy->max_scan_ie_len = VAR_15;

 VAR_20->hw->wiphy->cipher_suites = VAR_21;
 VAR_20->hw->wiphy->n_cipher_suites = FUNC_0(VAR_21);





 VAR_20->hw->max_listen_interval = 200;

 VAR_20->hw->queues = 4;

 FUNC_2(VAR_20->hw, VAR_20->dev);

 VAR_20->hw->sta_data_size = sizeof(struct wcn36xx_sta);
 VAR_20->hw->vif_data_size = sizeof(struct wcn36xx_vif);

 FUNC_4(VAR_20->hw->wiphy,
         VAR_5);

 return 0;
}
