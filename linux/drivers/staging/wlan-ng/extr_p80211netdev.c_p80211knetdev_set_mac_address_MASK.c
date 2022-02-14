
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wlandevice {int name; } ;
struct sockaddr {int sa_data; } ;
struct p80211item_uint32 {int len; scalar_t__ data; int status; int did; } ;
struct p80211item_unk392 {int len; void* status; int did; int data; } ;
struct p80211msg_dot11req_mibset {int msglen; int * devname; int msgcode; struct p80211item_uint32 resultcode; struct p80211item_unk392 mibattribute; } ;
struct TYPE_2__ {int data; scalar_t__ len; } ;
struct p80211item_pstr6 {int len; TYPE_1__ data; void* status; int did; } ;
struct net_device {scalar_t__ addr_len; int * dev_addr; scalar_t__ ml_priv; } ;
typedef int dot11req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (struct p80211msg_dot11req_mibset*,int ,int) ;
 int FUNC_2 (struct net_device*,char*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_11, void *VAR_12)
{
 struct sockaddr *VAR_13 = VAR_12;
 struct p80211msg_dot11req_mibset VAR_14;
 struct p80211item_unk392 *VAR_15;
 struct p80211item_pstr6 *VAR_16;
 struct p80211item_uint32 *VAR_17;
 int VAR_18;


 if (FUNC_3(VAR_11))
  return -VAR_5;


 VAR_15 = &VAR_14.mibattribute;
 VAR_16 = (struct p80211item_pstr6 *)&VAR_15->data;
 VAR_17 = &VAR_14.resultcode;


 FUNC_1(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.msgcode = VAR_1;
 VAR_14.msglen = sizeof(VAR_14);
 FUNC_0(VAR_14.devname,
        ((struct wlandevice *)VAR_11->ml_priv)->name,
        VAR_10 - 1);


 VAR_15->did = VAR_2;
 VAR_15->status = VAR_7;
 VAR_15->len = sizeof(VAR_15->data);

 VAR_16->did = VAR_0;
 VAR_16->status = VAR_7;
 VAR_16->len = sizeof(VAR_16->data);
 VAR_16->data.len = VAR_6;
 FUNC_0(&VAR_16->data.data, VAR_13->sa_data, VAR_6);


 VAR_17->did = VAR_3;
 VAR_17->status = VAR_8;
 VAR_17->len = sizeof(VAR_17->data);
 VAR_17->data = 0;


 VAR_18 = FUNC_4(VAR_11->ml_priv, (u8 *)&VAR_14);




 if (VAR_18 != 0 || VAR_17->data != VAR_9) {
  FUNC_2(VAR_11, "Low-level driver failed dot11req_mibset(dot11MACAddress).\n");
  VAR_18 = -VAR_4;
 } else {

  FUNC_0(VAR_11->dev_addr, VAR_13->sa_data, VAR_11->addr_len);
 }

 return VAR_18;
}
