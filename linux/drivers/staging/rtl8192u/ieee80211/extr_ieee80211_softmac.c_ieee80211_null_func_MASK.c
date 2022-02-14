
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtl_80211_hdr_3addr {int frame_ctl; int addr3; int addr2; int addr1; } ;
struct TYPE_4__ {int bssid; } ;
struct ieee80211_device {TYPE_2__ current_network; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct rtl_80211_hdr_3addr* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct ieee80211_device *VAR_5,
        short VAR_6)
{
 struct sk_buff *VAR_7;
 struct rtl_80211_hdr_3addr *VAR_8;

 VAR_7 = FUNC_1(sizeof(struct rtl_80211_hdr_3addr));

 if (!VAR_7)
  return ((void*)0);

 VAR_8 = FUNC_3(VAR_7, sizeof(struct rtl_80211_hdr_3addr));

 FUNC_2(VAR_8->addr1, VAR_5->current_network.bssid, VAR_0);
 FUNC_2(VAR_8->addr2, VAR_5->dev->dev_addr, VAR_0);
 FUNC_2(VAR_8->addr3, VAR_5->current_network.bssid, VAR_0);

 VAR_8->frame_ctl = FUNC_0(VAR_3 |
         VAR_4 | VAR_2 |
         (VAR_6 ? VAR_1 : 0));

 return VAR_7;
}
