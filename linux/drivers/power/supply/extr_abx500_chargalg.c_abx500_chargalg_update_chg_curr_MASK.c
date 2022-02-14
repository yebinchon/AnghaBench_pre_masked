
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int charger_type; int ac_iset; int usb_iset; } ;
struct abx500_chargalg {TYPE_4__* usb_chg; TYPE_2__ chg_info; TYPE_5__* ac_chg; } ;
struct TYPE_6__ {int (* update_curr ) (TYPE_5__*,int) ;} ;
struct TYPE_10__ {TYPE_1__ ops; scalar_t__ max_out_curr; } ;
struct TYPE_8__ {int (* update_curr ) (TYPE_4__*,int) ;} ;
struct TYPE_9__ {TYPE_3__ ops; scalar_t__ max_out_curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_3(struct abx500_chargalg *VAR_3,
  int VAR_4)
{

 if (VAR_3->ac_chg && VAR_3->ac_chg->ops.update_curr &&
   VAR_3->chg_info.charger_type & VAR_0) {




  if (VAR_3->ac_chg->max_out_curr)
   VAR_4 = FUNC_0(VAR_4, VAR_3->ac_chg->max_out_curr);

  VAR_3->chg_info.ac_iset = VAR_4;

  return VAR_3->ac_chg->ops.update_curr(VAR_3->ac_chg, VAR_4);
 } else if (VAR_3->usb_chg && VAR_3->usb_chg->ops.update_curr &&
   VAR_3->chg_info.charger_type & VAR_2) {




  if (VAR_3->usb_chg->max_out_curr)
   VAR_4 = FUNC_0(VAR_4, VAR_3->usb_chg->max_out_curr);

  VAR_3->chg_info.usb_iset = VAR_4;

  return VAR_3->usb_chg->ops.update_curr(VAR_3->usb_chg, VAR_4);
 }

 return -VAR_1;
}
