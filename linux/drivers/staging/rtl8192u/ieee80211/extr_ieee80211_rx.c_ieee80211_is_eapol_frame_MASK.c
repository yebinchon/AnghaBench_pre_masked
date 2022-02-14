
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int* data; } ;
struct rtl_80211_hdr_4addr {int addr1; int addr3; int frame_ctl; } ;
struct net_device {int dev_addr; } ;
struct ieee80211_device {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_device *VAR_4,
        struct sk_buff *VAR_5, size_t VAR_6)
{
 struct net_device *VAR_7 = VAR_4->dev;
 u16 VAR_8, VAR_9;
 struct rtl_80211_hdr_4addr *VAR_10;
 u8 *VAR_11;

 if (VAR_5->len < 24)
  return 0;

 VAR_10 = (struct rtl_80211_hdr_4addr *)VAR_5->data;
 VAR_8 = FUNC_0(VAR_10->frame_ctl);


 if ((VAR_8 & (VAR_3 | VAR_2)) ==
     VAR_3 &&
     FUNC_1(VAR_10->addr1, VAR_7->dev_addr, VAR_0) == 0 &&
     FUNC_1(VAR_10->addr3, VAR_7->dev_addr, VAR_0) == 0) {

 } else if ((VAR_8 & (VAR_3 | VAR_2)) ==
     VAR_2 &&
     FUNC_1(VAR_10->addr1, VAR_7->dev_addr, VAR_0) == 0) {

 } else
  return 0;

 if (VAR_5->len < 24 + 8)
  return 0;



 VAR_11 = VAR_5->data + VAR_6;
 VAR_9 = (VAR_11[6] << 8) | VAR_11[7];
 if (VAR_9 == VAR_1)
  return 1;

 return 0;
}
