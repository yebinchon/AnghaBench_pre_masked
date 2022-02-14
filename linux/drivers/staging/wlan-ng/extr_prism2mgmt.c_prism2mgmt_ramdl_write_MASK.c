
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wlandevice {scalar_t__ msdstate; int netdev; struct hfa384x* priv; } ;
struct TYPE_8__ {int data; void* status; } ;
struct TYPE_7__ {int * data; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_5__ {int data; } ;
struct p80211msg_p2req_ramdl_write {TYPE_4__ resultcode; TYPE_3__ data; TYPE_2__ len; TYPE_1__ addr; } ;
struct hfa384x {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct hfa384x*,int,int *,int) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct wlandevice *VAR_6, void *VAR_7)
{
 struct hfa384x *VAR_8 = VAR_6->priv;
 struct p80211msg_p2req_ramdl_write *VAR_9 = VAR_7;
 u32 VAR_10;
 u32 VAR_11;
 u8 *VAR_12;

 if (VAR_6->msdstate != VAR_5) {
  FUNC_1(VAR_6->netdev,
      "ramdl_write(): may only be called in the fwload state.\n");
  VAR_9->resultcode.data =
      VAR_1;
  VAR_9->resultcode.status = VAR_0;
  return 0;
 }

 VAR_9->resultcode.status = VAR_0;

 if (VAR_9->len.data > sizeof(VAR_9->data.data)) {
  VAR_9->resultcode.status =
      VAR_2;
  return 0;
 }

 VAR_10 = VAR_9->addr.data;
 VAR_11 = VAR_9->len.data;
 VAR_12 = VAR_9->data.data;
 if (FUNC_0(VAR_8, VAR_10, VAR_12, VAR_11))
  VAR_9->resultcode.data = VAR_3;

 VAR_9->resultcode.data = VAR_4;

 return 0;
}
