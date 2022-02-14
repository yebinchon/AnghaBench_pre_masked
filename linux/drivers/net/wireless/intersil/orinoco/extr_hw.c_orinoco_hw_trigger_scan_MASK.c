
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {scalar_t__ iw_mode; int firmware_type; int has_ext_scan; scalar_t__ has_hostscan; struct hermes hw; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct hermes_idstring {int val; void* len; } ;
struct cfg80211_ssid {size_t ssid_len; int ssid; } ;
typedef void* __le16 ;
struct TYPE_2__ {int (* write_ltv ) (struct hermes*,int ,int ,int ,struct hermes_idstring*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct hermes*,int ,int ,void***) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (struct hermes*,int ) ;
 int FUNC_4 (struct hermes*,int ,int ,int) ;
 int FUNC_5 (int ,int ,size_t) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct orinoco_private*,unsigned long*) ;
 int FUNC_8 (struct orinoco_private*,unsigned long*) ;
 int FUNC_9 (struct hermes*,int ,int ,int ,struct hermes_idstring*) ;

int FUNC_10(struct orinoco_private *VAR_13,
       const struct cfg80211_ssid *VAR_14)
{
 struct net_device *VAR_15 = VAR_13->ndev;
 struct hermes *VAR_16 = &VAR_13->hw;
 unsigned long VAR_17;
 int VAR_18 = 0;

 if (FUNC_7(VAR_13, &VAR_17) != 0)
  return -VAR_0;


 if (!FUNC_6(VAR_15)) {
  VAR_18 = -VAR_1;
  goto out;
 }




 if (VAR_13->iw_mode == VAR_11) {
  VAR_18 = -VAR_2;
  goto out;
 }

 if (VAR_13->has_hostscan) {
  switch (VAR_13->firmware_type) {
  case 128:
   VAR_18 = FUNC_4(VAR_16, VAR_12,
      VAR_8,
      VAR_4 |
      VAR_3);
   break;
  case 129: {
   __le16 VAR_19[3];

   VAR_19[0] = FUNC_2(0x3fff);
   VAR_19[1] = FUNC_2(0x0001);
   VAR_19[2] = 0;
   VAR_18 = FUNC_1(VAR_16, VAR_12,
        VAR_7, &VAR_19);
   break;
  }
  case 130:
   if (VAR_14->ssid_len > 0) {
    struct hermes_idstring VAR_20;
    size_t VAR_21 = VAR_14->ssid_len;

    VAR_20.len = FUNC_2(VAR_21);
    FUNC_5(VAR_20.val, VAR_14->ssid, VAR_21);

    VAR_18 = VAR_16->ops->write_ltv(VAR_16, VAR_12,
            VAR_10,
            FUNC_0(VAR_21 + 2),
            &VAR_20);
   } else
    VAR_18 = FUNC_4(VAR_16, VAR_12,
         VAR_10,
         0);
   if (VAR_18)
    break;

   if (VAR_13->has_ext_scan) {
    VAR_18 = FUNC_4(VAR_16, VAR_12,
      VAR_9,
      0x7FFF);
    if (VAR_18)
     goto out;

    VAR_18 = FUNC_3(VAR_16,
           VAR_5);
   } else
    VAR_18 = FUNC_3(VAR_16, VAR_6);

   break;
  }
 } else
  VAR_18 = FUNC_3(VAR_16, VAR_6);

 out:
 FUNC_8(VAR_13, &VAR_17);

 return VAR_18;
}
