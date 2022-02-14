
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int * data; } ;
struct rx_fwinfo_92d {int dummy; } ;
struct rx_desc_92d {int dummy; } ;
struct rtl_stats {int rx_drvinfo_size; int rx_bufshift; int icv; int crc; int hwerror; } ;
struct rtl_mac {int * bssid; } ;
struct rtl_efuse {int * dev_addr; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int * addr3; int * addr2; int * addr1; int frame_control; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,int *,struct rtl_stats*) ;
 int FUNC_2 (struct ieee80211_hw*,struct rtl_stats*,struct rx_desc_92d*,struct rx_fwinfo_92d*,int,int,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct rtl_efuse* FUNC_6 (int ) ;
 struct rtl_mac* FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_3,
            struct sk_buff *VAR_4,
            struct rtl_stats *VAR_5,
            struct rx_desc_92d *VAR_6,
            struct rx_fwinfo_92d *VAR_7)
{
 struct rtl_mac *VAR_8 = FUNC_7(FUNC_8(VAR_3));
 struct rtl_efuse *VAR_9 = FUNC_6(FUNC_8(VAR_3));
 struct ieee80211_hdr *VAR_10;
 u8 *VAR_11;
 u8 *VAR_12;
 u16 VAR_13, VAR_14;
 __le16 VAR_15;
 bool VAR_16, VAR_17, VAR_18 = 0;

 VAR_11 = VAR_4->data + VAR_5->rx_drvinfo_size + VAR_5->rx_bufshift;
 VAR_10 = (struct ieee80211_hdr *)VAR_11;
 VAR_15 = VAR_10->frame_control;
 VAR_14 = FUNC_5(VAR_15);
 VAR_13 = FUNC_0(VAR_15);
 VAR_12 = VAR_10->addr1;
 VAR_16 = ((VAR_2 != VAR_13) &&
      FUNC_3(VAR_8->bssid,
         (VAR_14 & VAR_1) ? VAR_10->addr1 :
         (VAR_14 & VAR_0) ? VAR_10->addr2 :
         VAR_10->addr3) &&
      (!VAR_5->hwerror) && (!VAR_5->crc) && (!VAR_5->icv));
 VAR_17 = VAR_16 &&
   FUNC_3(VAR_12, VAR_9->dev_addr);
 if (FUNC_4(VAR_15))
  VAR_18 = 1;
 FUNC_2(VAR_3, VAR_5, VAR_6, VAR_7,
       VAR_16, VAR_17,
       VAR_18);
 FUNC_1(VAR_3, VAR_11, VAR_5);
}
