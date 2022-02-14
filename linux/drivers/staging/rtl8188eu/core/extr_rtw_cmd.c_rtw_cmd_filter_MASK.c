
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct drvextra_cmd_parm {scalar_t__ ec_id; } ;
struct cmd_priv {int cmdthd_running; TYPE_3__* padapter; } ;
struct cmd_obj {scalar_t__ cmdcode; scalar_t__ parmbuf; } ;
struct TYPE_5__ {int usbss_enable; } ;
struct TYPE_4__ {scalar_t__ bHWPwrPindetect; } ;
struct TYPE_6__ {int hw_init_completed; TYPE_2__ registrypriv; TYPE_1__ pwrctrlpriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct cmd_priv *VAR_5, struct cmd_obj *VAR_6)
{
 u8 VAR_7 = 0;


 if ((VAR_5->padapter->pwrctrlpriv.bHWPwrPindetect) &&
     (!VAR_5->padapter->registrypriv.usbss_enable)) {
  if (VAR_6->cmdcode == VAR_4) {
   struct drvextra_cmd_parm *VAR_8 = (struct drvextra_cmd_parm *)VAR_6->parmbuf;

   if (VAR_8->ec_id == VAR_0)
    VAR_7 = 1;
  }
 }

 if (VAR_6->cmdcode == VAR_3)
  VAR_7 = 1;

 if ((!VAR_5->padapter->hw_init_completed && !VAR_7) ||
     !VAR_5->cmdthd_running)
  return VAR_1;
 return VAR_2;
}
