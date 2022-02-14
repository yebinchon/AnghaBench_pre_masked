
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct port_data {int port_number; int psy_status; int psy_usb_type; int psy_online; int psy; TYPE_1__ psy_desc; int psy_current_max; int psy_voltage_max_design; int psy_power_max; int psy_voltage_now; struct charger_data* charger; } ;
struct TYPE_4__ {int current_lim; int current_max; int voltage_now; int voltage_max; } ;
struct ec_response_usb_pd_power_info {int role; int type; int max_power; TYPE_2__ meas; int dualrole; } ;
struct ec_params_usb_pd_power_info {int port; } ;
struct device {int dummy; } ;
struct charger_data {struct device* dev; } ;
typedef int resp ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct charger_data*,int ,int ,struct ec_params_usb_pd_power_info*,int,struct ec_response_usb_pd_power_info*,int) ;
 scalar_t__ FUNC_1 (struct port_data*) ;
 int FUNC_2 (struct device*,char*,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct port_data *VAR_13)
{
 struct charger_data *VAR_14 = VAR_13->charger;
 struct ec_response_usb_pd_power_info VAR_15;
 struct ec_params_usb_pd_power_info VAR_16;
 int VAR_17, VAR_18;
 struct device *VAR_19 = VAR_14->dev;
 int VAR_20;

 VAR_16.port = VAR_13->port_number;
 VAR_20 = FUNC_0(VAR_14, 0,
         VAR_0,
         &VAR_16, sizeof(VAR_16),
         &VAR_15, sizeof(VAR_15));
 if (VAR_20 < 0) {
  FUNC_3(VAR_19, "Unable to query PD power info (err:0x%x)\n", VAR_20);
  return VAR_20;
 }

 VAR_17 = VAR_13->psy_status;
 VAR_18 = VAR_13->psy_usb_type;

 switch (VAR_15.role) {
 case 131:
  VAR_13->psy_status = VAR_2;
  VAR_13->psy_online = 0;
  break;
 case 128:
  VAR_13->psy_status = VAR_2;
  VAR_13->psy_online = 0;
  break;
 case 130:
  VAR_13->psy_status = VAR_1;
  VAR_13->psy_online = 1;
  break;
 case 129:
  VAR_13->psy_status = VAR_2;
  VAR_13->psy_online = 1;
  break;
 default:
  FUNC_3(VAR_19, "Unknown role %d\n", VAR_15.role);
  break;
 }

 VAR_13->psy_voltage_max_design = VAR_15.meas.voltage_max;
 VAR_13->psy_voltage_now = VAR_15.meas.voltage_now;
 VAR_13->psy_current_max = VAR_15.meas.current_max;
 VAR_13->psy_power_max = VAR_15.max_power;

 switch (VAR_15.type) {
 case 139:
 case 132:
  VAR_13->psy_usb_type = VAR_11;
  break;
 case 137:





  if (VAR_15.role == 128 && VAR_15.dualrole)
   VAR_13->psy_usb_type = VAR_10;
  else
   VAR_13->psy_usb_type = VAR_11;
  break;
 case 136:
 case 134:
  VAR_13->psy_usb_type = VAR_5;
  break;
 case 138:
  VAR_13->psy_usb_type = VAR_6;
  break;
 case 140:
  VAR_13->psy_usb_type = VAR_8;
  break;
 case 141:
  VAR_13->psy_usb_type = VAR_7;
  break;
 case 135:
  if (VAR_15.dualrole)
   VAR_13->psy_usb_type = VAR_10;
  else
   VAR_13->psy_usb_type = VAR_9;
  break;
 case 133:






  VAR_13->psy_usb_type = VAR_12;
  VAR_13->psy_voltage_max_design = 0;
  VAR_13->psy_current_max = 0;
  break;
 default:
  FUNC_3(VAR_19, "Port %d: default case!\n", VAR_13->port_number);
  VAR_13->psy_usb_type = VAR_11;
 }

 if (FUNC_1(VAR_13))
  VAR_13->psy_desc.type = VAR_3;
 else
  VAR_13->psy_desc.type = VAR_4;

 FUNC_2(VAR_19,
  "Port %d: type=%d vmax=%d vnow=%d cmax=%d clim=%d pmax=%d\n",
  VAR_13->port_number, VAR_15.type, VAR_15.meas.voltage_max,
  VAR_15.meas.voltage_now, VAR_15.meas.current_max,
  VAR_15.meas.current_lim, VAR_15.max_power);







 if (VAR_18 != VAR_13->psy_usb_type ||
     VAR_17 != VAR_13->psy_status)
  FUNC_4(VAR_13->psy);

 return 0;
}
