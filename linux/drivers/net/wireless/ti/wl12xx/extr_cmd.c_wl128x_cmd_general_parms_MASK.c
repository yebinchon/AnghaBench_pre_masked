
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_priv {int tcxo_clock; int ref_clock; } ;
struct wl128x_ini_general_params {scalar_t__ tx_bip_fem_manufacturer; } ;
struct wl128x_nvs_file {struct wl128x_ini_general_params general_params; } ;
struct TYPE_4__ {int tx_bip_fem_auto_detect; scalar_t__ tx_bip_fem_manufacturer; int tcxo_ref_clock; int ref_clock; } ;
struct TYPE_3__ {int id; } ;
struct wl128x_general_parms_cmd {TYPE_2__ general_params; TYPE_1__ test; } ;
struct wl1271 {scalar_t__ plt_mode; scalar_t__ fem_manuf; scalar_t__ nvs; struct wl12xx_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct wl128x_general_parms_cmd*) ;
 struct wl128x_general_parms_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,struct wl128x_ini_general_params*,int) ;
 int FUNC_3 (struct wl1271*,struct wl128x_general_parms_cmd*,int,int) ;
 int FUNC_4 (int ,char*,char*,scalar_t__) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct wl1271 *VAR_8)
{
 struct wl128x_general_parms_cmd *VAR_9;
 struct wl128x_ini_general_params *VAR_10 =
  &((struct wl128x_nvs_file *)VAR_8->nvs)->general_params;
 struct wl12xx_priv *VAR_11 = VAR_8->priv;
 bool VAR_12 = 0;
 int VAR_13;

 if (!VAR_8->nvs)
  return -VAR_2;

 if (VAR_10->tx_bip_fem_manufacturer >= VAR_7) {
  FUNC_5("FEM index from ini out of bounds");
  return -VAR_1;
 }

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_3;

 VAR_9->test.id = VAR_6;

 FUNC_2(&VAR_9->general_params, VAR_10, sizeof(*VAR_10));


 if (VAR_8->plt_mode == VAR_5)
  VAR_9->general_params.tx_bip_fem_auto_detect = 1;

 if (VAR_9->general_params.tx_bip_fem_auto_detect)
  VAR_12 = 1;


 VAR_9->general_params.ref_clock = VAR_11->ref_clock;
 VAR_9->general_params.tcxo_ref_clock = VAR_11->tcxo_clock;

 VAR_13 = FUNC_3(VAR_8, VAR_9, sizeof(*VAR_9), VAR_12);
 if (VAR_13 < 0) {
  FUNC_5("CMD_INI_FILE_GENERAL_PARAM failed");
  goto out;
 }

 VAR_10->tx_bip_fem_manufacturer =
  VAR_9->general_params.tx_bip_fem_manufacturer;

 if (VAR_10->tx_bip_fem_manufacturer >= VAR_7) {
  FUNC_5("FEM index from FW out of bounds");
  VAR_13 = -VAR_1;
  goto out;
 }


 if (VAR_8->plt_mode == VAR_5)
  VAR_8->fem_manuf = VAR_10->tx_bip_fem_manufacturer;

 FUNC_4(VAR_0, "FEM autodetect: %s, manufacturer: %d\n",
  VAR_12 == 0 ?
   "manual" :
  VAR_8->plt_mode == VAR_5 ?
   "calibrator_fem_detect" :
   "auto",
  VAR_10->tx_bip_fem_manufacturer);

out:
 FUNC_0(VAR_9);
 return VAR_13;
}
