
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct wl128x_radio_parms_cmd {int fem_vendor_and_options; int dyn_params_5; int static_params_5; int dyn_params_2; int static_params_2; TYPE_1__ test; } ;
struct wl128x_ini_general_params {int tx_bip_fem_manufacturer; } ;
struct wl128x_nvs_file {int fem_vendor_and_options; TYPE_3__* dyn_radio_params_5; int stat_radio_params_5; TYPE_2__* dyn_radio_params_2; int stat_radio_params_2; struct wl128x_ini_general_params general_params; } ;
struct wl128x_ini_fem_params_5 {int dummy; } ;
struct wl128x_ini_fem_params_2 {int dummy; } ;
struct wl128x_ini_band_params_5 {int dummy; } ;
struct wl128x_ini_band_params_2 {int dummy; } ;
struct wl1271 {scalar_t__ nvs; } ;
struct TYPE_6__ {int params; } ;
struct TYPE_5__ {int params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl128x_radio_parms_cmd*) ;
 struct wl128x_radio_parms_cmd* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct wl1271*,struct wl128x_radio_parms_cmd*,int,int ) ;
 int FUNC_5 (int ,char*,struct wl128x_radio_parms_cmd*,int) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct wl1271 *VAR_5)
{
 struct wl128x_nvs_file *VAR_6 = (struct wl128x_nvs_file *)VAR_5->nvs;
 struct wl128x_radio_parms_cmd *VAR_7;
 struct wl128x_ini_general_params *VAR_8 = &VAR_6->general_params;
 int VAR_9, VAR_10;

 if (!VAR_5->nvs)
  return -VAR_1;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->test.id = VAR_4;

 VAR_10 = FUNC_0(VAR_8->tx_bip_fem_manufacturer);


 FUNC_3(&VAR_7->static_params_2, &VAR_6->stat_radio_params_2,
        sizeof(struct wl128x_ini_band_params_2));
 FUNC_3(&VAR_7->dyn_params_2,
        &VAR_6->dyn_radio_params_2[VAR_10].params,
        sizeof(struct wl128x_ini_fem_params_2));


 FUNC_3(&VAR_7->static_params_5,
        &VAR_6->stat_radio_params_5,
        sizeof(struct wl128x_ini_band_params_5));
 FUNC_3(&VAR_7->dyn_params_5,
        &VAR_6->dyn_radio_params_5[VAR_10].params,
        sizeof(struct wl128x_ini_fem_params_5));

 VAR_7->fem_vendor_and_options = VAR_6->fem_vendor_and_options;

 FUNC_5(VAR_0, "TEST_CMD_INI_FILE_RADIO_PARAM: ",
      VAR_7, sizeof(*VAR_7));

 VAR_9 = FUNC_4(VAR_5, VAR_7, sizeof(*VAR_7), 0);
 if (VAR_9 < 0)
  FUNC_6("CMD_INI_FILE_RADIO_PARAM failed");

 FUNC_1(VAR_7);
 return VAR_9;
}
