
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlandevice {scalar_t__ msdstate; int netdev; struct hfa384x* priv; } ;
struct TYPE_4__ {void* status; void* data; } ;
struct TYPE_3__ {void* status; int data; } ;
struct p80211msg_p2req_readpda {TYPE_2__ resultcode; TYPE_1__ pda; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct hfa384x*,int ,int ) ;
 int FUNC_1 (int ,char*,...) ;

int FUNC_2(struct wlandevice *VAR_5, void *VAR_6)
{
 struct hfa384x *VAR_7 = VAR_5->priv;
 struct p80211msg_p2req_readpda *VAR_8 = VAR_6;
 int VAR_9;




 if (VAR_5->msdstate != VAR_4) {
  FUNC_1(VAR_5->netdev,
      "PDA may only be read in the fwload state.\n");
  VAR_8->resultcode.data =
      VAR_2;
  VAR_8->resultcode.status = VAR_1;
 } else {



  VAR_9 = FUNC_0(VAR_7,
           VAR_8->pda.data,
           VAR_0);
  if (VAR_9) {
   FUNC_1(VAR_5->netdev,
       "hfa384x_drvr_readpda() failed, result=%d\n",
       VAR_9);

   VAR_8->resultcode.data =
       VAR_2;
   VAR_8->resultcode.status =
       VAR_1;
   return 0;
  }
  VAR_8->pda.status = VAR_1;
  VAR_8->resultcode.data = VAR_3;
  VAR_8->resultcode.status = VAR_1;
 }

 return 0;
}
