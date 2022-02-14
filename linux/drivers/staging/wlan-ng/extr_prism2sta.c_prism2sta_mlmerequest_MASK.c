
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wlandevice {int netdev; struct hfa384x* priv; } ;
struct TYPE_9__ {int data; void* status; } ;
struct TYPE_8__ {int data; } ;
struct p80211msg_lnxreq_ifstate {TYPE_2__ resultcode; TYPE_1__ ifstate; } ;
struct TYPE_14__ {int data; } ;
struct TYPE_12__ {void* data; void* status; } ;
struct TYPE_11__ {void* data; void* status; } ;
struct TYPE_10__ {void* data; void* status; } ;
struct p80211msg_lnxreq_commsquality {TYPE_7__ txrate; TYPE_5__ noise; TYPE_4__ level; TYPE_3__ link; } ;
struct p80211msg {int msgcode; } ;
struct TYPE_13__ {int anl_curr_fc; int asl_curr_bss; int cq_curr_bss; } ;
struct hfa384x {int txrate; TYPE_6__ qual; } ;
 void* VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_4 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_5 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_6 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_7 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_8 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_9 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_10 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_11 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_12 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_13 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_14 (struct wlandevice*,int ) ;

__attribute__((used)) static int FUNC_15(struct wlandevice *VAR_1,
     struct p80211msg *VAR_2)
{
 struct hfa384x *VAR_3 = VAR_1->priv;

 int VAR_4 = 0;

 switch (VAR_2->msgcode) {
 case 142:
  FUNC_2("Received mibget request\n");
  VAR_4 = FUNC_6(VAR_1, VAR_2);
  break;
 case 141:
  FUNC_2("Received mibset request\n");
  VAR_4 = FUNC_6(VAR_1, VAR_2);
  break;
 case 140:
  FUNC_2("Received scan request\n");
  VAR_4 = FUNC_10(VAR_1, VAR_2);
  break;
 case 139:
  FUNC_2("Received scan_results request\n");
  VAR_4 = FUNC_11(VAR_1, VAR_2);
  break;
 case 138:
  FUNC_2("Received mlme start request\n");
  VAR_4 = FUNC_12(VAR_1, VAR_2);
  break;



 case 128:
  FUNC_2("Received mlme readpda request\n");
  VAR_4 = FUNC_9(VAR_1, VAR_2);
  break;
 case 130:
  FUNC_2("Received mlme ramdl_state request\n");
  VAR_4 = FUNC_7(VAR_1, VAR_2);
  break;
 case 129:
  FUNC_2("Received mlme ramdl_write request\n");
  VAR_4 = FUNC_8(VAR_1, VAR_2);
  break;
 case 132:
  FUNC_2("Received mlme flashdl_state request\n");
  VAR_4 = FUNC_4(VAR_1, VAR_2);
  break;
 case 131:
  FUNC_2("Received mlme flashdl_write request\n");
  VAR_4 = FUNC_5(VAR_1, VAR_2);
  break;



 case 135:
  break;
 case 134: {
  struct p80211msg_lnxreq_ifstate *VAR_5;

  FUNC_2("Received mlme ifstate request\n");
  VAR_5 = (struct p80211msg_lnxreq_ifstate *)VAR_2;
  VAR_4 = FUNC_14(VAR_1,
        VAR_5->ifstate.data);
  VAR_5->resultcode.status =
   VAR_0;
  VAR_5->resultcode.data = VAR_4;
  VAR_4 = 0;
  break;
 }
 case 133:
  FUNC_2("Received mlme wlansniff request\n");
  VAR_4 = FUNC_13(VAR_1, VAR_2);
  break;
 case 137:
  FUNC_2("Received mlme autojoin request\n");
  VAR_4 = FUNC_3(VAR_1, VAR_2);
  break;
 case 136: {
  struct p80211msg_lnxreq_commsquality *VAR_6;

  FUNC_2("Received commsquality request\n");

  VAR_6 = (struct p80211msg_lnxreq_commsquality *)VAR_2;

  VAR_6->link.status = VAR_0;
  VAR_6->level.status = VAR_0;
  VAR_6->noise.status = VAR_0;

  VAR_6->link.data = FUNC_0(VAR_3->qual.cq_curr_bss);
  VAR_6->level.data = FUNC_0(VAR_3->qual.asl_curr_bss);
  VAR_6->noise.data = FUNC_0(VAR_3->qual.anl_curr_fc);
  VAR_6->txrate.data = VAR_3->txrate;

  break;
 }
 default:
  FUNC_1(VAR_1->netdev,
       "Unknown mgmt request message 0x%08x",
       VAR_2->msgcode);
  break;
 }

 return VAR_4;
}
