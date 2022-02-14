
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlandevice {scalar_t__ msdstate; int netdev; struct hfa384x* priv; } ;
struct TYPE_4__ {int data; void* status; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct p80211msg_p2req_flashdl_state {TYPE_2__ resultcode; TYPE_1__ enable; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct hfa384x*) ;
 scalar_t__ FUNC_1 (struct hfa384x*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wlandevice*,int ) ;

int FUNC_4(struct wlandevice *VAR_7, void *VAR_8)
{
 int VAR_9 = 0;
 struct hfa384x *VAR_10 = VAR_7->priv;
 struct p80211msg_p2req_flashdl_state *VAR_11 = VAR_8;

 if (VAR_7->msdstate != VAR_5) {
  FUNC_2(VAR_7->netdev,
      "flashdl_state(): may only be called in the fwload state.\n");
  VAR_11->resultcode.data =
      VAR_2;
  VAR_11->resultcode.status = VAR_1;
  return 0;
 }






 VAR_11->resultcode.status = VAR_1;
 if (VAR_11->enable.data == VAR_4) {
  if (FUNC_1(VAR_10)) {
   VAR_11->resultcode.data =
       VAR_2;
  } else {
   VAR_11->resultcode.data = VAR_3;
  }
 } else {
  FUNC_0(VAR_10);
  VAR_11->resultcode.data = VAR_3;







  VAR_7->msdstate = VAR_6;
  VAR_9 = FUNC_3(VAR_7, VAR_0);
  if (VAR_9 != VAR_3) {
   FUNC_2(VAR_7->netdev,
       "prism2sta_ifstate(fwload) failed, P80211ENUM_resultcode=%d\n",
       VAR_9);
   VAR_11->resultcode.data =
       VAR_2;
   VAR_9 = -1;
  }
 }

 return 0;
}
