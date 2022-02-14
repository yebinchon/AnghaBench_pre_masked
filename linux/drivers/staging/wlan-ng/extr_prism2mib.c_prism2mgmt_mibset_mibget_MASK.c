
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wlandevice {struct hfa384x* priv; } ;
struct TYPE_4__ {void* status; scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ data; void* status; } ;
struct p80211msg_dot11req_mibset {scalar_t__ msgcode; TYPE_2__ mibattribute; TYPE_1__ resultcode; } ;
struct p80211itemd {scalar_t__ did; void* status; scalar_t__ data; } ;
struct mibrec {scalar_t__ did; int flag; int (* func ) (struct mibrec*,int,struct wlandevice*,struct hfa384x*,struct p80211msg_dot11req_mibset*,void*) ;} ;
struct hfa384x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct mibrec* VAR_10 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct mibrec*,int,struct wlandevice*,struct hfa384x*,struct p80211msg_dot11req_mibset*,void*) ;

int FUNC_2(struct wlandevice *VAR_11, void *VAR_12)
{
 struct hfa384x *VAR_13 = VAR_11->priv;
 int VAR_14, VAR_15;
 struct mibrec *VAR_16;

 u16 VAR_17;

 struct p80211msg_dot11req_mibset *VAR_18 = VAR_12;
 struct p80211itemd *VAR_19;

 VAR_18->resultcode.status = VAR_4;
 VAR_18->resultcode.data = VAR_9;





 VAR_17 = VAR_2;
 VAR_19 = (struct p80211itemd *)VAR_18->mibattribute.data;

 for (VAR_16 = VAR_10; VAR_16->did != 0; VAR_16++)
  if (VAR_16->did == VAR_19->did && (VAR_16->flag & VAR_17))
   break;

 if (VAR_16->did == 0) {
  VAR_18->resultcode.data = VAR_8;
  goto done;
 }







 VAR_15 = (VAR_18->msgcode == VAR_0);

 if (VAR_15) {
  if (!(VAR_16->flag & VAR_1)) {
   VAR_18->resultcode.data =
       VAR_5;
   goto done;
  }
 } else {
  if (!(VAR_16->flag & VAR_3)) {
   VAR_18->resultcode.data =
       VAR_6;
   goto done;
  }
 }
 VAR_14 = VAR_16->func(VAR_16, VAR_15, VAR_11, VAR_13, VAR_18, (void *)VAR_19->data);

 if (VAR_18->resultcode.data == VAR_9) {
  if (VAR_14 != 0) {
   FUNC_0("get/set failure, result=%d\n", VAR_14);
   VAR_18->resultcode.data =
       VAR_7;
  } else {
   if (VAR_15) {
    VAR_18->mibattribute.status =
        VAR_4;
    VAR_19->status =
        VAR_4;
   }
  }
 }

done:
 return 0;
}
