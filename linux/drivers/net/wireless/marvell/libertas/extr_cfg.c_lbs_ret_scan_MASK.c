
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct wiphy {int dummy; } ;
struct lbs_private {TYPE_1__* wdev; } ;
struct ieee80211_channel {int flags; } ;
struct cmd_header {int size; } ;
struct cmd_ds_802_11_scan_rsp {int const bssdescriptsize; int nr_sets; int* bssdesc_and_tlvbuffer; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_2__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct cfg80211_bss* FUNC_1 (struct wiphy*,struct ieee80211_channel*,int ,int const*,int ,void*,void*,int const*,int,int,int ) ;
 int FUNC_2 (struct wiphy*,struct cfg80211_bss*) ;
 void* FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int,int ) ;
 struct ieee80211_channel* FUNC_6 (struct wiphy*,int) ;
 int FUNC_7 (int ,char*,int*,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct lbs_private *VAR_10, unsigned long VAR_11,
 struct cmd_header *VAR_12)
{
 struct cfg80211_bss *VAR_13;
 struct cmd_ds_802_11_scan_rsp *VAR_14 = (void *)VAR_12;
 int VAR_15;
 const u8 *VAR_16;
 const u8 *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20 = -VAR_1;

 VAR_15 = FUNC_3(&VAR_14->bssdescriptsize);

 FUNC_8("scan response: %d BSSs (%d bytes); resp size %d bytes\n",
   VAR_14->nr_sets, VAR_15, FUNC_9(VAR_12->size));

 if (VAR_14->nr_sets == 0) {
  VAR_20 = 0;
  goto done;
 }
 VAR_16 = VAR_14->bssdesc_and_tlvbuffer;

 FUNC_7(VAR_5, "SCAN_RSP", VAR_14->bssdesc_and_tlvbuffer,
   VAR_14->bssdescriptsize);

 VAR_17 = VAR_16 + VAR_15;
 VAR_18 = 4 + 8 * VAR_14->nr_sets;
 FUNC_7(VAR_5, "SCAN_TSF", (u8 *) VAR_17, VAR_18);


 VAR_19 = FUNC_3(VAR_17);
 VAR_17 += 2;
 if (VAR_19 != VAR_7) {
  FUNC_8("scan response: invalid TSF Timestamp %d\n", VAR_19);
  goto done;
 }





 VAR_19 = FUNC_3(VAR_17);
 VAR_17 += 2;
 if (VAR_19 / 8 != VAR_14->nr_sets) {
  FUNC_8("scan response: invalid number of TSF timestamp "
        "sets (expected %d got %d)\n", VAR_14->nr_sets,
        VAR_19 / 8);
  goto done;
 }

 for (VAR_19 = 0; VAR_19 < VAR_14->nr_sets; VAR_19++) {
  const u8 *VAR_21;
  const u8 *VAR_22;
  int VAR_23;
  int VAR_24;
  int VAR_25;
  u16 VAR_26;
  u16 VAR_27;
  int VAR_28 = -1;
  const u8 *VAR_29 = ((void*)0);
  u8 VAR_30 = 0;

  int VAR_31 = FUNC_3(VAR_16);
  VAR_16 += 2;


  VAR_21 = VAR_16;
  VAR_16 += VAR_2;

  VAR_25 = *VAR_16++;

  VAR_16 += 8;

  VAR_26 = FUNC_3(VAR_16);
  VAR_16 += 2;

  VAR_27 = FUNC_3(VAR_16);
  VAR_16 += 2;


  VAR_22 = VAR_16;




  VAR_24 = VAR_23 = VAR_31 - (6 + 1 + 8 + 2 + 2);
  while (VAR_23 >= 2) {
   u8 VAR_32, VAR_33;
   VAR_32 = *VAR_16++;
   VAR_33 = *VAR_16++;
   VAR_23 -= 2;
   if (VAR_33 > VAR_23) {
    FUNC_8("scan response: invalid IE fmt\n");
    goto done;
   }

   if (VAR_32 == VAR_8)
    VAR_28 = *VAR_16;
   if (VAR_32 == VAR_9) {
    VAR_29 = VAR_16;
    VAR_30 = VAR_33;
   }
   VAR_23 -= VAR_33;
   VAR_16 += VAR_33;
  }


  if (VAR_28 != -1) {
   struct wiphy *VAR_34 = VAR_10->wdev->wiphy;
   int VAR_35 = FUNC_5(VAR_28,
       VAR_6);
   struct ieee80211_channel *VAR_36 =
    FUNC_6(VAR_34, VAR_35);

   FUNC_8("scan: %pM, capa %04x, chan %2d, %*pE, %d dBm\n",
         VAR_21, VAR_27, VAR_28, VAR_30, VAR_29,
         FUNC_0(VAR_25)/100);

   if (VAR_36 &&
       !(VAR_36->flags & VAR_4)) {
    VAR_13 = FUNC_1(VAR_34, VAR_36,
     VAR_0,
     VAR_21, FUNC_4(VAR_17),
     VAR_27, VAR_26, VAR_22, VAR_24,
     FUNC_0(VAR_25),
     VAR_3);
    FUNC_2(VAR_34, VAR_13);
   }
  } else
   FUNC_8("scan response: missing BSS channel IE\n");

  VAR_17 += 8;
 }
 VAR_20 = 0;

 done:
 return VAR_20;
}
