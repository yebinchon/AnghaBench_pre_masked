
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int conn_chg; int prev_conn_chg; int charger_type; } ;
struct TYPE_3__ {int suspended_change; scalar_t__ usb_suspended; scalar_t__ ac_suspended; } ;
struct abx500_chargalg {TYPE_2__ chg_info; TYPE_1__ susp_status; int dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct abx500_chargalg*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct abx500_chargalg *VAR_6)
{
 if (VAR_6->chg_info.conn_chg != VAR_6->chg_info.prev_conn_chg ||
  VAR_6->susp_status.suspended_change) {




  if ((VAR_6->chg_info.conn_chg & VAR_0) &&
   !VAR_6->susp_status.ac_suspended) {
   FUNC_1(VAR_6->dev, "Charging source is AC\n");
   if (VAR_6->chg_info.charger_type != VAR_0) {
    VAR_6->chg_info.charger_type = VAR_0;
    FUNC_0(VAR_6, VAR_3);
   }
  } else if ((VAR_6->chg_info.conn_chg & VAR_5) &&
   !VAR_6->susp_status.usb_suspended) {
   FUNC_1(VAR_6->dev, "Charging source is USB\n");
   VAR_6->chg_info.charger_type = VAR_5;
   FUNC_0(VAR_6, VAR_3);
  } else if (VAR_6->chg_info.conn_chg &&
   (VAR_6->susp_status.ac_suspended ||
   VAR_6->susp_status.usb_suspended)) {
   FUNC_1(VAR_6->dev, "Charging is suspended\n");
   VAR_6->chg_info.charger_type = VAR_1;
   FUNC_0(VAR_6, VAR_4);
  } else {
   FUNC_1(VAR_6->dev, "Charging source is OFF\n");
   VAR_6->chg_info.charger_type = VAR_1;
   FUNC_0(VAR_6, VAR_2);
  }
  VAR_6->chg_info.prev_conn_chg = VAR_6->chg_info.conn_chg;
  VAR_6->susp_status.suspended_change = 0;
 }
 return VAR_6->chg_info.conn_chg;
}
