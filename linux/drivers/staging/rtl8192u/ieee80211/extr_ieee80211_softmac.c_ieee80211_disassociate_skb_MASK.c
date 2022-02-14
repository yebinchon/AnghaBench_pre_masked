
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_network {int bssid; } ;
struct TYPE_4__ {int addr3; int addr2; int addr1; scalar_t__ duration_id; void* frame_ctl; } ;
struct ieee80211_disassoc {void* reason; TYPE_2__ header; } ;
struct ieee80211_device {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct ieee80211_disassoc* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static inline struct sk_buff *FUNC_4(struct ieee80211_network *VAR_2,
        struct ieee80211_device *VAR_3,
        u8 VAR_4)
{
 struct sk_buff *VAR_5;
 struct ieee80211_disassoc *VAR_6;

 VAR_5 = FUNC_1(sizeof(struct ieee80211_disassoc));
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_5, sizeof(struct ieee80211_disassoc));
 VAR_6->header.frame_ctl = FUNC_0(VAR_1);
 VAR_6->header.duration_id = 0;

 FUNC_2(VAR_6->header.addr1, VAR_2->bssid, VAR_0);
 FUNC_2(VAR_6->header.addr2, VAR_3->dev->dev_addr, VAR_0);
 FUNC_2(VAR_6->header.addr3, VAR_2->bssid, VAR_0);

 VAR_6->reason = FUNC_0(VAR_4);
 return VAR_5;
}
