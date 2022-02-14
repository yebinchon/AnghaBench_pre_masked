
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int sdp_max; unsigned int dcp_max; unsigned int cdp_max; unsigned int aca_max; } ;
struct usb_phy {int chg_type; int chg_work; TYPE_1__ chg_cur; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 int FUNC_0 (int *) ;

void FUNC_1(struct usb_phy *VAR_4, unsigned int VAR_5)
{
 switch (VAR_4->chg_type) {
 case 128:
  if (VAR_4->chg_cur.sdp_max == VAR_5)
   return;

  VAR_4->chg_cur.sdp_max = (VAR_5 > VAR_3) ?
   VAR_3 : VAR_5;
  break;
 case 129:
  if (VAR_4->chg_cur.dcp_max == VAR_5)
   return;

  VAR_4->chg_cur.dcp_max = (VAR_5 > VAR_2) ?
   VAR_2 : VAR_5;
  break;
 case 130:
  if (VAR_4->chg_cur.cdp_max == VAR_5)
   return;

  VAR_4->chg_cur.cdp_max = (VAR_5 > VAR_1) ?
   VAR_1 : VAR_5;
  break;
 case 131:
  if (VAR_4->chg_cur.aca_max == VAR_5)
   return;

  VAR_4->chg_cur.aca_max = (VAR_5 > VAR_0) ?
   VAR_0 : VAR_5;
  break;
 default:
  return;
 }

 FUNC_0(&VAR_4->chg_work);
}
