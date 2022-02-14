
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_conf_rf {int tx_per_channel_power_compensation_5; int tx_per_channel_power_compensation_2; } ;
struct TYPE_4__ {struct wl12xx_conf_rf rf; } ;
struct wl12xx_priv {TYPE_2__ conf; } ;
struct TYPE_3__ {int id; } ;
struct wl1271_ext_radio_parms_cmd {int tx_per_channel_power_compensation_5; int tx_per_channel_power_compensation_2; TYPE_1__ test; } ;
struct wl1271 {int nvs; struct wl12xx_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wl1271_ext_radio_parms_cmd*) ;
 struct wl1271_ext_radio_parms_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct wl1271*,struct wl1271_ext_radio_parms_cmd*,int,int ) ;
 int FUNC_4 (int ,char*,struct wl1271_ext_radio_parms_cmd*,int) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct wl1271 *VAR_7)
{
 struct wl1271_ext_radio_parms_cmd *VAR_8;
 struct wl12xx_priv *VAR_9 = VAR_7->priv;
 struct wl12xx_conf_rf *VAR_10 = &VAR_9->conf.rf;
 int VAR_11;

 if (!VAR_7->nvs)
  return -VAR_3;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_5);
 if (!VAR_8)
  return -VAR_4;

 VAR_8->test.id = VAR_6;

 FUNC_2(VAR_8->tx_per_channel_power_compensation_2,
        VAR_10->tx_per_channel_power_compensation_2,
        VAR_0);
 FUNC_2(VAR_8->tx_per_channel_power_compensation_5,
        VAR_10->tx_per_channel_power_compensation_5,
        VAR_1);

 FUNC_4(VAR_2, "TEST_CMD_INI_FILE_EXT_RADIO_PARAM: ",
      VAR_8, sizeof(*VAR_8));

 VAR_11 = FUNC_3(VAR_7, VAR_8, sizeof(*VAR_8), 0);
 if (VAR_11 < 0)
  FUNC_5("TEST_CMD_INI_FILE_RF_EXTENDED_PARAM failed");

 FUNC_0(VAR_8);
 return VAR_11;
}
