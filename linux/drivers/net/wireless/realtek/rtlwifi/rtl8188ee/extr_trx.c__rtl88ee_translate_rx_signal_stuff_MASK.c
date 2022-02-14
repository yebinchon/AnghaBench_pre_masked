
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int * data; } ;
struct rx_fwinfo_88e {int dummy; } ;
struct rtl_stats {int rx_drvinfo_size; int rx_bufshift; int icv; int crc; int hwerror; int psaddr; } ;
struct rtl_mac {int * bssid; } ;
struct rtl_efuse {int * dev_addr; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int * addr3; int * addr2; int * addr1; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,struct rtl_stats*,int *,struct rx_fwinfo_88e*,int,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_stats*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int * FUNC_3 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int ) ;
 struct rtl_efuse* FUNC_9 (int ) ;
 struct rtl_mac* FUNC_10 (int ) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*,int *,struct rtl_stats*) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_1,
            struct sk_buff *VAR_2,
            struct rtl_stats *VAR_3,
            __le32 *VAR_4,
            struct rx_fwinfo_88e *VAR_5)
{
 struct rtl_mac *VAR_6 = FUNC_10(FUNC_11(VAR_1));
 struct rtl_efuse *VAR_7 = FUNC_9(FUNC_11(VAR_1));
 struct ieee80211_hdr *VAR_8;
 u8 *VAR_9;
 u8 *VAR_10;
 u8 *VAR_11;
 __le16 VAR_12;
 bool VAR_13, VAR_14, VAR_15;

 VAR_9 = VAR_2->data + VAR_3->rx_drvinfo_size + VAR_3->rx_bufshift;

 VAR_8 = (struct ieee80211_hdr *)VAR_9;
 VAR_12 = VAR_8->frame_control;
 VAR_10 = VAR_8->addr1;
 VAR_11 = FUNC_3(VAR_8);
 FUNC_8(VAR_3->psaddr, VAR_11, VAR_0);

 VAR_13 = ((!FUNC_7(VAR_12)) &&
      (FUNC_2(VAR_6->bssid, FUNC_5(VAR_12) ?
          VAR_8->addr1 : FUNC_4(VAR_12) ?
          VAR_8->addr2 : VAR_8->addr3)) &&
          (!VAR_3->hwerror) &&
          (!VAR_3->crc) && (!VAR_3->icv));

 VAR_14 = VAR_13 &&
     (FUNC_2(VAR_10, VAR_7->dev_addr));

 if (FUNC_6(VAR_8->frame_control))
  VAR_15 = 1;
 else
  VAR_15 = 0;

 FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5,
       VAR_13, VAR_14,
       VAR_15);
 FUNC_1(VAR_1, VAR_3);
 FUNC_12(VAR_1, VAR_9, VAR_3);
}
