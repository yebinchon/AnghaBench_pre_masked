
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wlandevice {int dummy; } ;
struct TYPE_3__ {int data; } ;
struct p80211msg_dot11req_mibset {int msgcode; TYPE_1__ mibattribute; } ;
struct TYPE_4__ {int data; int len; } ;
struct p80211item_pstr32 {TYPE_2__ data; int did; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct wlandevice*,int *) ;

__attribute__((used)) static int FUNC_2(struct wlandevice *VAR_1,
      u32 VAR_2, u8 VAR_3, const u8 *VAR_4)
{
 struct p80211msg_dot11req_mibset VAR_5;
 struct p80211item_pstr32 *VAR_6 =
   (struct p80211item_pstr32 *)&VAR_5.mibattribute.data;

 VAR_5.msgcode = VAR_0;
 VAR_6->did = VAR_2;
 VAR_6->data.len = VAR_3;
 FUNC_0(VAR_6->data.data, VAR_4, VAR_3);

 return FUNC_1(VAR_1, (u8 *)&VAR_5);
}
