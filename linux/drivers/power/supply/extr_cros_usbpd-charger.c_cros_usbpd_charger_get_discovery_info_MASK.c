
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_data {int model_name; int manufacturer; int port_number; struct charger_data* charger; } ;
struct ec_params_usb_pd_info_request {int port; } ;
struct ec_params_usb_pd_discovery_entry {int vid; int pid; int ptype; } ;
struct charger_data {int dev; } ;
typedef int resp ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct charger_data*,int ,int ,struct ec_params_usb_pd_info_request*,int,struct ec_params_usb_pd_discovery_entry*,int) ;
 int FUNC_1 (int ,char*,int ,int,int,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_4(struct port_data *VAR_1)
{
 struct charger_data *VAR_2 = VAR_1->charger;
 struct ec_params_usb_pd_discovery_entry VAR_3;
 struct ec_params_usb_pd_info_request VAR_4;
 int VAR_5;

 VAR_4.port = VAR_1->port_number;

 VAR_5 = FUNC_0(VAR_2, 0,
         VAR_0,
         &VAR_4, sizeof(VAR_4),
         &VAR_3, sizeof(VAR_3));
 if (VAR_5 < 0) {
  FUNC_2(VAR_2->dev,
   "Unable to query discovery info (err:0x%x)\n", VAR_5);
  return VAR_5;
 }

 FUNC_1(VAR_2->dev, "Port %d: VID = 0x%x, PID=0x%x, PTYPE=0x%x\n",
  VAR_1->port_number, VAR_3.vid, VAR_3.pid, VAR_3.ptype);

 FUNC_3(VAR_1->manufacturer, sizeof(VAR_1->manufacturer), "%x",
   VAR_3.vid);
 FUNC_3(VAR_1->model_name, sizeof(VAR_1->model_name), "%x", VAR_3.pid);

 return 0;
}
