
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int * data; } ;
struct rx_fwinfo_8723be {int dummy; } ;
struct rtl_stats {int rx_drvinfo_size; int rx_bufshift; int icv; int crc; int hwerror; int psaddr; } ;
struct rtl_mac {int * bssid; } ;
struct rtl_efuse {int * dev_addr; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int * addr3; int * addr2; int * addr1; } ;
typedef int __le32 ;
struct TYPE_6__ {int num_qry_beacon_pkt; } ;
struct TYPE_7__ {TYPE_1__ dbginfo; } ;
struct TYPE_8__ {TYPE_2__ dm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_stats*,int *,struct rx_fwinfo_8723be*,int,int,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int * FUNC_3 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ) ;
 struct rtl_efuse* FUNC_7 (TYPE_3__*) ;
 struct rtl_mac* FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*,int *,struct rtl_stats*) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_4,
     struct sk_buff *VAR_5,
     struct rtl_stats *VAR_6,
     __le32 *VAR_7,
     struct rx_fwinfo_8723be *VAR_8)
{
 struct rtl_mac *VAR_9 = FUNC_8(FUNC_9(VAR_4));
 struct rtl_efuse *VAR_10 = FUNC_7(FUNC_9(VAR_4));
 struct ieee80211_hdr *VAR_11;
 u8 *VAR_12;
 u8 *VAR_13;
 u8 *VAR_14;
 u16 VAR_15, VAR_16;
 bool VAR_17, VAR_18, VAR_19;

 VAR_12 = VAR_5->data + VAR_6->rx_drvinfo_size + VAR_6->rx_bufshift;

 VAR_11 = (struct ieee80211_hdr *)VAR_12;
 VAR_15 = FUNC_5(VAR_11->frame_control);
 VAR_16 = FUNC_0(VAR_11->frame_control);
 VAR_13 = VAR_11->addr1;
 VAR_14 = FUNC_3(VAR_11);
 FUNC_6(VAR_6->psaddr, VAR_14, VAR_0);

 VAR_17 = ((VAR_3 != VAR_16) &&
      (FUNC_2(VAR_9->bssid, (VAR_15 & VAR_2) ?
      VAR_11->addr1 : (VAR_15 & VAR_1) ?
      VAR_11->addr2 : VAR_11->addr3)) &&
      (!VAR_6->hwerror) &&
      (!VAR_6->crc) && (!VAR_6->icv));

 VAR_18 = VAR_17 &&
     (FUNC_2(VAR_13, VAR_10->dev_addr));






 if (FUNC_4(VAR_11->frame_control))
  VAR_19 = 1;
 else
  VAR_19 = 0;

 if (VAR_19 && VAR_17)
  FUNC_9(VAR_4)->dm.dbginfo.num_qry_beacon_pkt++;

 FUNC_1(VAR_4, VAR_6, VAR_7, VAR_8,
         VAR_17,
         VAR_18,
         VAR_19);

 FUNC_10(VAR_4, VAR_12, VAR_6);
}
