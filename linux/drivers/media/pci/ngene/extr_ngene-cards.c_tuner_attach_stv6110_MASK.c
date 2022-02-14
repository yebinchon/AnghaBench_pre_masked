
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stv6110x_devctl {int tuner_get_status; int tuner_set_refclk; int tuner_get_bbgain; int tuner_set_bbgain; int tuner_get_bandwidth; int tuner_set_bandwidth; int tuner_get_frequency; int tuner_set_frequency; int tuner_set_mode; int tuner_sleep; int tuner_init; } ;
struct stv6110x_config {int dummy; } ;
struct stv090x_config {int tuner_get_status; int tuner_set_refclk; int tuner_get_bbgain; int tuner_set_bbgain; int tuner_get_bandwidth; int tuner_set_bandwidth; int tuner_get_frequency; int tuner_set_frequency; int tuner_set_mode; int tuner_sleep; int tuner_init; } ;
struct ngene_channel {size_t number; int fe; TYPE_3__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* card_info; TYPE_1__* pci_dev; } ;
struct TYPE_5__ {scalar_t__* tuner_config; scalar_t__* fe_config; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct stv6110x_devctl* FUNC_1 (int ,int ,struct stv6110x_config*,struct i2c_adapter*) ;
 struct i2c_adapter* FUNC_2 (struct ngene_channel*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct ngene_channel *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev->pci_dev->dev;
 struct i2c_adapter *VAR_4 = FUNC_2(VAR_2);
 struct stv090x_config *VAR_5 = (struct stv090x_config *)
  VAR_2->dev->card_info->fe_config[VAR_2->number];
 struct stv6110x_config *VAR_6 = (struct stv6110x_config *)
  VAR_2->dev->card_info->tuner_config[VAR_2->number];
 const struct stv6110x_devctl *VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2->fe, VAR_6, VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_3, "No STV6110X found!\n");
  return -VAR_0;
 }

 VAR_5->tuner_init = VAR_7->tuner_init;
 VAR_5->tuner_sleep = VAR_7->tuner_sleep;
 VAR_5->tuner_set_mode = VAR_7->tuner_set_mode;
 VAR_5->tuner_set_frequency = VAR_7->tuner_set_frequency;
 VAR_5->tuner_get_frequency = VAR_7->tuner_get_frequency;
 VAR_5->tuner_set_bandwidth = VAR_7->tuner_set_bandwidth;
 VAR_5->tuner_get_bandwidth = VAR_7->tuner_get_bandwidth;
 VAR_5->tuner_set_bbgain = VAR_7->tuner_set_bbgain;
 VAR_5->tuner_get_bbgain = VAR_7->tuner_get_bbgain;
 VAR_5->tuner_set_refclk = VAR_7->tuner_set_refclk;
 VAR_5->tuner_get_status = VAR_7->tuner_get_status;

 return 0;
}
