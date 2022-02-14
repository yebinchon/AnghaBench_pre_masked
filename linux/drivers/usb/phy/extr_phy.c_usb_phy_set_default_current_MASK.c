
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aca_max; int aca_min; int cdp_max; int cdp_min; int dcp_max; int dcp_min; int sdp_max; int sdp_min; } ;
struct usb_phy {TYPE_1__ chg_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct usb_phy *VAR_8)
{
 VAR_8->chg_cur.sdp_min = VAR_7;
 VAR_8->chg_cur.sdp_max = VAR_6;
 VAR_8->chg_cur.dcp_min = VAR_5;
 VAR_8->chg_cur.dcp_max = VAR_4;
 VAR_8->chg_cur.cdp_min = VAR_3;
 VAR_8->chg_cur.cdp_max = VAR_2;
 VAR_8->chg_cur.aca_min = VAR_1;
 VAR_8->chg_cur.aca_max = VAR_0;
}
