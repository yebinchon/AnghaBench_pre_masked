
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wlandevice {int ssid; int macmode; struct hfa384x* priv; } ;
struct p80211pstrd {int dummy; } ;
struct TYPE_6__ {int data; int status; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct p80211msg_lnxreq_autojoin {TYPE_3__ resultcode; TYPE_2__ ssid; TYPE_1__ authtype; } ;
struct hfa384x_bytestr {int dummy; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct hfa384x*,int ) ;
 int FUNC_1 (struct hfa384x*,int ) ;
 int FUNC_2 (struct hfa384x*,int ,int *,int ) ;
 int FUNC_3 (struct hfa384x*,int ,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct hfa384x_bytestr*,struct p80211pstrd*) ;

int FUNC_7(struct wlandevice *VAR_12, void *VAR_13)
{
 struct hfa384x *VAR_14 = VAR_12->priv;
 int VAR_15 = 0;
 u16 VAR_16;
 u16 VAR_17;
 struct p80211msg_lnxreq_autojoin *VAR_18 = VAR_13;
 struct p80211pstrd *VAR_19;
 u8 VAR_20[256];
 struct hfa384x_bytestr *VAR_21 = (struct hfa384x_bytestr *)VAR_20;

 VAR_12->macmode = VAR_11;


 FUNC_4(&VAR_12->ssid, &VAR_18->ssid.data, sizeof(VAR_18->ssid.data));


 FUNC_0(VAR_14, 0);



 FUNC_3(VAR_14, VAR_7, 0x000f);


 if (VAR_18->authtype.data == VAR_8)
  VAR_16 = VAR_1;
 else
  VAR_16 = VAR_0;

 FUNC_3(VAR_14, VAR_3, VAR_16);


 FUNC_5(VAR_20, 0, 256);
 VAR_19 = (struct p80211pstrd *)&VAR_18->ssid.data;
 FUNC_6(VAR_21, VAR_19);
 VAR_15 = FUNC_2(VAR_14, VAR_4,
     VAR_20,
     VAR_5);
 VAR_17 = VAR_2;

 FUNC_3(VAR_14, VAR_6, VAR_17);


 FUNC_1(VAR_14, 0);


 VAR_18->resultcode.status = VAR_9;
 VAR_18->resultcode.data = VAR_10;

 return VAR_15;
}
