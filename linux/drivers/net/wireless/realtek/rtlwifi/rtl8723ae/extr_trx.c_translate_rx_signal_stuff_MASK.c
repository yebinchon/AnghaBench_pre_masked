
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int * data; } ;
struct rx_fwinfo_8723e {int dummy; } ;
struct rtl_stats {int rx_drvinfo_size; int rx_bufshift; int icv; int crc; int hwerror; } ;
struct rtl_mac {int * bssid; } ;
struct rtl_efuse {int * dev_addr; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int * addr3; int * addr2; int * addr1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_stats*,int *,struct rx_fwinfo_8723e*,int,int,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct rtl_efuse* FUNC_5 (int ) ;
 struct rtl_mac* FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*,int *,struct rtl_stats*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_3,
          struct sk_buff *VAR_4,
          struct rtl_stats *VAR_5, u8 *VAR_6,
          struct rx_fwinfo_8723e *VAR_7)
{
 struct rtl_mac *VAR_8 = FUNC_6(FUNC_7(VAR_3));
 struct rtl_efuse *VAR_9 = FUNC_5(FUNC_7(VAR_3));
 struct ieee80211_hdr *VAR_10;
 u8 *VAR_11;
 u8 *VAR_12;

 u16 VAR_13, VAR_14;
 bool VAR_15, VAR_16, VAR_17;

 VAR_11 = VAR_4->data + VAR_5->rx_drvinfo_size + VAR_5->rx_bufshift;

 VAR_10 = (struct ieee80211_hdr *)VAR_11;
 VAR_13 = FUNC_4(VAR_10->frame_control);
 VAR_14 = FUNC_0(VAR_10->frame_control);
 VAR_12 = VAR_10->addr1;

 VAR_15 = ((VAR_2 != VAR_14) &&
  (FUNC_2(VAR_8->bssid, (VAR_13 & VAR_1) ?
   VAR_10->addr1 : (VAR_13 & VAR_0) ?
   VAR_10->addr2 : VAR_10->addr3)) &&
   (!VAR_5->hwerror) &&
   (!VAR_5->crc) && (!VAR_5->icv));

 VAR_16 = VAR_15 &&
     (FUNC_2(VAR_12, VAR_9->dev_addr));

 if (FUNC_3(VAR_10->frame_control))
  VAR_17 = 1;
 else
  VAR_17 = 0;

 FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7,
        VAR_15, VAR_16,
        VAR_17);

 FUNC_8(VAR_3, VAR_11, VAR_5);
}
