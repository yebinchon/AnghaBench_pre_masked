
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int v ;
typedef int u16 ;
struct sk_buff {int ip_summed; int protocol; int * dev; int pkt_type; } ;
struct rx_hdr {size_t* rssi; scalar_t__ len; scalar_t__ status; } ;
struct iw_quality {size_t qual; int level; int updated; int noise; } ;
struct TYPE_15__ {int noise; } ;
struct TYPE_16__ {TYPE_5__ qual; } ;
struct TYPE_13__ {scalar_t__ spy_number; } ;
struct TYPE_12__ {scalar_t__ enabled; } ;
struct airo_info {TYPE_8__* dev; int * wifidev; int flags; TYPE_6__ wstats; TYPE_4__* rssi; TYPE_3__ spy_data; TYPE_2__ micstats; } ;
typedef int micbuf ;
typedef int hdr ;
typedef int fc ;
typedef int etherHead ;
typedef scalar_t__ __le16 ;
struct TYPE_11__ {int rx_dropped; } ;
struct TYPE_18__ {int name; TYPE_1__ stats; } ;
struct TYPE_17__ {int typelen; } ;
struct TYPE_14__ {int rssidBm; } ;
typedef TYPE_7__ MICBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct airo_info*,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct airo_info*,scalar_t__*,int,int ) ;
 int FUNC_4 (struct airo_info*,int,int,int ) ;
 scalar_t__ FUNC_5 (struct airo_info*,TYPE_7__*,int *,int) ;
 struct sk_buff* FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,TYPE_8__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct airo_info*) ;
 int FUNC_13 (struct airo_info*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int ) ;
 scalar_t__* FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 int FUNC_21 (TYPE_8__*,char*,struct iw_quality*) ;

__attribute__((used)) static void FUNC_22(struct airo_info *VAR_14)
{
 struct sk_buff *VAR_15 = ((void*)0);
 __le16 VAR_16, VAR_17, *VAR_18, VAR_19[4];
 u16 VAR_20, VAR_21 = 0, VAR_22, VAR_23;
 struct rx_hdr VAR_24;
 int VAR_25 = 0;

 if (FUNC_20(VAR_8, &VAR_14->flags)) {
  if (FUNC_20(VAR_7, &VAR_14->flags))
   FUNC_12(VAR_14);
  else
   FUNC_13(VAR_14);
  FUNC_1(VAR_14, VAR_5, VAR_6);
  return;
 }

 VAR_23 = FUNC_0(VAR_14, VAR_13);


 if (FUNC_20(VAR_7, &VAR_14->flags)) {
  FUNC_4 (VAR_14, VAR_23, 4, VAR_1);
  FUNC_3 (VAR_14, (__le16*)&VAR_24, sizeof(VAR_24), VAR_1);

  if (FUNC_11(VAR_24.status) & 2)
   VAR_24.len = 0;
  if (VAR_14->wifidev == ((void*)0))
   VAR_24.len = 0;
 } else {
  FUNC_4(VAR_14, VAR_23, 0x36, VAR_1);
  FUNC_3(VAR_14, &VAR_24.len, 2, VAR_1);
 }
 VAR_20 = FUNC_11(VAR_24.len);

 if (VAR_20 > VAR_0) {
  FUNC_2(VAR_14->dev->name, "Bad size %d", VAR_20);
  goto done;
 }
 if (VAR_20 == 0)
  goto done;

 if (FUNC_20(VAR_7, &VAR_14->flags)) {
  FUNC_3(VAR_14, &VAR_16, sizeof (VAR_16), VAR_1);
  VAR_21 = FUNC_9(VAR_16);
 } else
  VAR_21 = VAR_3 * 2;

 VAR_15 = FUNC_6(VAR_20 + VAR_21 + 2 + 2);
 if (!VAR_15) {
  VAR_14->dev->stats.rx_dropped++;
  goto done;
 }

 FUNC_17(VAR_15, 2);
 VAR_18 = FUNC_16(VAR_15, VAR_20 + VAR_21);
 if (FUNC_20(VAR_7, &VAR_14->flags)) {
  VAR_18[0] = VAR_16;
  FUNC_3(VAR_14, VAR_18 + 1, VAR_21 - 2, VAR_1);
  if (VAR_21 == 24)
   FUNC_3(VAR_14, VAR_19, 6, VAR_1);

  FUNC_3(VAR_14, &VAR_17, sizeof(VAR_17), VAR_1);
  VAR_22 = FUNC_11(VAR_17);
  if (VAR_22) {
   if (VAR_22 <= 8) {
    FUNC_3(VAR_14, VAR_19, VAR_22, VAR_1);
   } else {
    FUNC_2(VAR_14->dev->name, "gaplen too "
     "big. Problems will follow...");
   }
  }
  FUNC_3(VAR_14, VAR_18 + VAR_21/2, VAR_20, VAR_1);
 } else {
  MICBuffer VAR_26;

  FUNC_3(VAR_14, VAR_18, VAR_3 * 2, VAR_1);
  if (VAR_14->micstats.enabled) {
   FUNC_3(VAR_14, (__le16 *) &VAR_26, sizeof (VAR_26), VAR_1);
   if (FUNC_15(VAR_26.typelen) > 0x05DC)
    FUNC_4(VAR_14, VAR_23, 0x44, VAR_1);
   else {
    if (VAR_20 <= sizeof (VAR_26)) {
     FUNC_7(VAR_15);
     goto done;
    }

    VAR_20 -= sizeof(VAR_26);
    FUNC_19(VAR_15, VAR_20 + VAR_21);
   }
  }

  FUNC_3(VAR_14, VAR_18 + VAR_3, VAR_20, VAR_1);
  if (FUNC_5(VAR_14, &VAR_26, (etherHead*) VAR_18, VAR_20))
   FUNC_7 (VAR_15);
  else
   VAR_25 = 1;
 }
done:
 FUNC_1(VAR_14, VAR_5, VAR_6);

 if (VAR_25) {
  if (FUNC_20(VAR_7, &VAR_14->flags)) {
   FUNC_18(VAR_15);
   VAR_15->pkt_type = VAR_12;
   VAR_15->dev = VAR_14->wifidev;
   VAR_15->protocol = FUNC_10(VAR_4);
  } else
   VAR_15->protocol = FUNC_8(VAR_15, VAR_14->dev);
  VAR_15->ip_summed = VAR_2;

  FUNC_14(VAR_15);
 }
}
