
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int online_chg; } ;
struct abx500_chargalg {TYPE_4__* usb_chg; TYPE_2__ chg_info; TYPE_5__* ac_chg; } ;
struct TYPE_7__ {int (* kick_wd ) (TYPE_5__*) ;} ;
struct TYPE_11__ {TYPE_1__ ops; scalar_t__ external; } ;
struct TYPE_9__ {int (* kick_wd ) (TYPE_4__*) ;} ;
struct TYPE_10__ {TYPE_3__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct abx500_chargalg *VAR_3)
{

 if (VAR_3->ac_chg && VAR_3->ac_chg->ops.kick_wd &&
     VAR_3->chg_info.online_chg & VAR_0) {





  if (VAR_3->ac_chg->external &&
      VAR_3->usb_chg && VAR_3->usb_chg->ops.kick_wd)
   VAR_3->usb_chg->ops.kick_wd(VAR_3->usb_chg);

  return VAR_3->ac_chg->ops.kick_wd(VAR_3->ac_chg);
 }
 else if (VAR_3->usb_chg && VAR_3->usb_chg->ops.kick_wd &&
   VAR_3->chg_info.online_chg & VAR_2)
  return VAR_3->usb_chg->ops.kick_wd(VAR_3->usb_chg);

 return -VAR_1;
}
