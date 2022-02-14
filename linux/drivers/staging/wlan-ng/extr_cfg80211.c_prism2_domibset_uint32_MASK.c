
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct wlandevice {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct p80211msg_dot11req_mibset {int msgcode; TYPE_1__ mibattribute; } ;
struct p80211item_uint32 {void* data; void* did; } ;


 int VAR_0 ;
 int FUNC_0 (struct wlandevice*,int *) ;

__attribute__((used)) static int FUNC_1(struct wlandevice *VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 struct p80211msg_dot11req_mibset VAR_4;
 struct p80211item_uint32 *VAR_5 =
   (struct p80211item_uint32 *)&VAR_4.mibattribute.data;

 VAR_4.msgcode = VAR_0;
 VAR_5->did = VAR_2;
 VAR_5->data = VAR_3;

 return FUNC_0(VAR_1, (u8 *)&VAR_4);
}
