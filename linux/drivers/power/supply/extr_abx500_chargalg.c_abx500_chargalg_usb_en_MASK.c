
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int usb_iset; int usb_vset; } ;
struct abx500_chargalg {TYPE_3__* usb_chg; TYPE_1__ chg_info; } ;
struct TYPE_5__ {int (* enable ) (TYPE_3__*,int,int,int) ;} ;
struct TYPE_6__ {TYPE_2__ ops; scalar_t__ max_out_curr; scalar_t__ max_out_volt; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct abx500_chargalg *VAR_1, int VAR_2,
 int VAR_3, int VAR_4)
{
 if (!VAR_1->usb_chg || !VAR_1->usb_chg->ops.enable)
  return -VAR_0;


 if (VAR_1->usb_chg->max_out_volt)
  VAR_3 = FUNC_0(VAR_3, VAR_1->usb_chg->max_out_volt);
 if (VAR_1->usb_chg->max_out_curr)
  VAR_4 = FUNC_0(VAR_4, VAR_1->usb_chg->max_out_curr);

 VAR_1->chg_info.usb_iset = VAR_4;
 VAR_1->chg_info.usb_vset = VAR_3;

 return VAR_1->usb_chg->ops.enable(VAR_1->usb_chg, VAR_2, VAR_3, VAR_4);
}
