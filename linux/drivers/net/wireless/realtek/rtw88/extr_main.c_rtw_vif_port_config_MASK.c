
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct rtw_vif {int bcn_ctrl; TYPE_6__* conf; int aid; int net_type; int bssid; int mac_addr; } ;
struct rtw_dev {int dummy; } ;
struct TYPE_11__ {int addr; int mask; } ;
struct TYPE_10__ {int addr; int mask; } ;
struct TYPE_9__ {int addr; int mask; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_12__ {TYPE_5__ bcn_ctrl; TYPE_4__ aid; TYPE_3__ net_type; TYPE_2__ bssid; TYPE_1__ mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtw_dev*,int,int ) ;
 int FUNC_1 (struct rtw_dev*,int,int,int ) ;
 int FUNC_2 (struct rtw_dev*,int,int,int ) ;

void FUNC_3(struct rtw_dev *VAR_5,
    struct rtw_vif *VAR_6,
    u32 VAR_7)
{
 u32 VAR_8, VAR_9;

 if (VAR_7 & VAR_3) {
  VAR_8 = VAR_6->conf->mac_addr.addr;
  FUNC_0(VAR_5, VAR_8, VAR_6->mac_addr);
 }
 if (VAR_7 & VAR_2) {
  VAR_8 = VAR_6->conf->bssid.addr;
  FUNC_0(VAR_5, VAR_8, VAR_6->bssid);
 }
 if (VAR_7 & VAR_4) {
  VAR_8 = VAR_6->conf->net_type.addr;
  VAR_9 = VAR_6->conf->net_type.mask;
  FUNC_1(VAR_5, VAR_8, VAR_9, VAR_6->net_type);
 }
 if (VAR_7 & VAR_0) {
  VAR_8 = VAR_6->conf->aid.addr;
  VAR_9 = VAR_6->conf->aid.mask;
  FUNC_1(VAR_5, VAR_8, VAR_9, VAR_6->aid);
 }
 if (VAR_7 & VAR_1) {
  VAR_8 = VAR_6->conf->bcn_ctrl.addr;
  VAR_9 = VAR_6->conf->bcn_ctrl.mask;
  FUNC_2(VAR_5, VAR_8, VAR_9, VAR_6->bcn_ctrl);
 }
}
