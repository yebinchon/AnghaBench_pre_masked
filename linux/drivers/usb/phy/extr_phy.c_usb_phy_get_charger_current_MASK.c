
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int sdp_min; unsigned int sdp_max; unsigned int dcp_min; unsigned int dcp_max; unsigned int cdp_min; unsigned int cdp_max; unsigned int aca_min; unsigned int aca_max; } ;
struct usb_phy {int chg_type; TYPE_1__ chg_cur; } ;







void FUNC_0(struct usb_phy *VAR_0,
     unsigned int *VAR_1, unsigned int *VAR_2)
{
 switch (VAR_0->chg_type) {
 case 128:
  *VAR_1 = VAR_0->chg_cur.sdp_min;
  *VAR_2 = VAR_0->chg_cur.sdp_max;
  break;
 case 129:
  *VAR_1 = VAR_0->chg_cur.dcp_min;
  *VAR_2 = VAR_0->chg_cur.dcp_max;
  break;
 case 130:
  *VAR_1 = VAR_0->chg_cur.cdp_min;
  *VAR_2 = VAR_0->chg_cur.cdp_max;
  break;
 case 131:
  *VAR_1 = VAR_0->chg_cur.aca_min;
  *VAR_2 = VAR_0->chg_cur.aca_max;
  break;
 default:
  *VAR_1 = 0;
  *VAR_2 = 0;
  break;
 }
}
