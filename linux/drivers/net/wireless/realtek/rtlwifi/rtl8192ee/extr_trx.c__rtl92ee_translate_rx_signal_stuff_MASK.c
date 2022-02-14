
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int * data; } ;
struct rx_fwinfo {int dummy; } ;
struct rtl_stats {int rx_drvinfo_size; int rx_bufshift; int icv; int crc; int hwerror; int psaddr; } ;
struct rtl_mac {int * bssid; } ;
struct rtl_efuse {int * dev_addr; } ;
struct ieee80211_qos_hdr {int qos_ctrl; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int * addr3; int * addr2; int * addr1; } ;
typedef int __le16 ;
struct TYPE_6__ {int num_non_be_pkt; int num_qry_beacon_pkt; } ;
struct TYPE_7__ {TYPE_1__ dbginfo; } ;
struct TYPE_8__ {TYPE_2__ dm; } ;


 int FUNC_0 (struct ieee80211_hw*,struct rtl_stats*,int *,struct rx_fwinfo*,int,int,int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ieee80211_hdr*) ;
 int * FUNC_4 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct rtl_efuse* FUNC_12 (TYPE_3__*) ;
 struct rtl_mac* FUNC_13 (TYPE_3__*) ;
 TYPE_3__* FUNC_14 (struct ieee80211_hw*) ;
 int FUNC_15 (struct ieee80211_hw*,int *,struct rtl_stats*) ;

__attribute__((used)) static void FUNC_16(struct ieee80211_hw *VAR_0,
            struct sk_buff *VAR_1,
            struct rtl_stats *VAR_2,
            u8 *VAR_3,
            struct rx_fwinfo *VAR_4)
{
 struct rtl_mac *VAR_5 = FUNC_13(FUNC_14(VAR_0));
 struct rtl_efuse *VAR_6 = FUNC_12(FUNC_14(VAR_0));
 struct ieee80211_hdr *VAR_7;
 u8 *VAR_8;
 u8 *VAR_9;
 u8 *VAR_10;
 __le16 VAR_11;
 bool VAR_12, VAR_13, VAR_14;

 VAR_8 = VAR_1->data + VAR_2->rx_drvinfo_size +
    VAR_2->rx_bufshift + 24;

 VAR_7 = (struct ieee80211_hdr *)VAR_8;
 VAR_11 = VAR_7->frame_control;
 VAR_9 = VAR_7->addr1;
 VAR_10 = FUNC_4(VAR_7);
 FUNC_1(VAR_2->psaddr, VAR_10);

 VAR_12 = (!FUNC_8(VAR_11) &&
          (FUNC_2(VAR_5->bssid,
      FUNC_6(VAR_11) ?
      VAR_7->addr1 :
      FUNC_5(VAR_11) ?
      VAR_7->addr2 : VAR_7->addr3)) &&
    (!VAR_2->hwerror) && (!VAR_2->crc) &&
    (!VAR_2->icv));

 VAR_13 = VAR_12 &&
    (FUNC_2(VAR_9, VAR_6->dev_addr));

 if (FUNC_7(VAR_11))
  VAR_14 = 1;
 else
  VAR_14 = 0;

 if (VAR_14 && VAR_12)
  FUNC_14(VAR_0)->dm.dbginfo.num_qry_beacon_pkt++;

 if (VAR_12 && FUNC_9(VAR_7->frame_control) &&
     !FUNC_10(FUNC_3(VAR_7))) {
  struct ieee80211_qos_hdr *VAR_15 =
         (struct ieee80211_qos_hdr *)VAR_8;
  u16 VAR_16 = FUNC_11(VAR_15->qos_ctrl) & 0xf;

  if (VAR_16 != 0 && VAR_16 != 3)
   FUNC_14(VAR_0)->dm.dbginfo.num_non_be_pkt++;
 }

 FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4,
       VAR_12, VAR_13,
       VAR_14);
 FUNC_15(VAR_0, VAR_8, VAR_2);
}
