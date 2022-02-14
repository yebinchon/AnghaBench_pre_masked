
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlandevice {scalar_t__ msdstate; int netdev; struct hfa384x* priv; } ;
struct TYPE_6__ {void* data; void* status; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct p80211msg_p2req_ramdl_state {TYPE_3__ resultcode; TYPE_2__ exeaddr; TYPE_1__ enable; } ;
struct hfa384x {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct hfa384x*) ;
 scalar_t__ FUNC_1 (struct hfa384x*,int ) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct wlandevice *VAR_5, void *VAR_6)
{
 struct hfa384x *VAR_7 = VAR_5->priv;
 struct p80211msg_p2req_ramdl_state *VAR_8 = VAR_6;

 if (VAR_5->msdstate != VAR_4) {
  FUNC_2(VAR_5->netdev,
      "ramdl_state(): may only be called in the fwload state.\n");
  VAR_8->resultcode.data =
      VAR_1;
  VAR_8->resultcode.status = VAR_0;
  return 0;
 }






 VAR_8->resultcode.status = VAR_0;
 if (VAR_8->enable.data == VAR_3) {
  if (FUNC_1(VAR_7, VAR_8->exeaddr.data)) {
   VAR_8->resultcode.data =
       VAR_1;
  } else {
   VAR_8->resultcode.data = VAR_2;
  }
 } else {
  FUNC_0(VAR_7);
  VAR_8->resultcode.data = VAR_2;
 }

 return 0;
}
