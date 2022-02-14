
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int action_code; int status; int timeout; int capab; } ;
struct TYPE_6__ {int timeout; int capab; } ;
struct TYPE_8__ {TYPE_2__ addba_resp; TYPE_1__ addba_req; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct TYPE_10__ {TYPE_4__ action; } ;
struct ieee80211_mgmt {TYPE_5__ u; } ;
struct ieee80211_hdr {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct device *VAR_4,
     struct ieee80211_hdr *VAR_5)
{
 struct ieee80211_mgmt *VAR_6 = (struct ieee80211_mgmt *)VAR_5;
 u16 VAR_7, VAR_8;

 if (!(VAR_3 & VAR_2))
  return;

 switch (VAR_6->u.action.u.addba_resp.action_code) {
 case 128:
  VAR_7 = FUNC_1(VAR_6->u.action.u.addba_resp.capab);
  VAR_8 = FUNC_1(VAR_6->u.action.u.addba_resp.timeout);
  FUNC_0(VAR_4, "WLAN_ACTION_ADDBA_RESP: "
    "timeout %i, tid %02x, buf_size %02x, policy %02x, "
    "status %02x\n",
    VAR_8,
    (VAR_7 & VAR_1) >> 2,
    (VAR_7 & VAR_0) >> 6,
    (VAR_7 >> 1) & 0x1,
    FUNC_1(VAR_6->u.action.u.addba_resp.status));
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_6->u.action.u.addba_req.capab);
  VAR_8 = FUNC_1(VAR_6->u.action.u.addba_req.timeout);
  FUNC_0(VAR_4, "WLAN_ACTION_ADDBA_REQ: "
    "timeout %i, tid %02x, buf_size %02x, policy %02x\n",
    VAR_8,
    (VAR_7 & VAR_1) >> 2,
    (VAR_7 & VAR_0) >> 6,
    (VAR_7 >> 1) & 0x1);
  break;
 default:
  FUNC_0(VAR_4, "action frame %02x\n",
    VAR_6->u.action.u.addba_resp.action_code);
  break;
 }
}
