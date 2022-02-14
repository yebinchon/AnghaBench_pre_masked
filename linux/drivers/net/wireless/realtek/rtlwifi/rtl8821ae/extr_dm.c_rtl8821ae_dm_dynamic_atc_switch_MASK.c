
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_10__ {scalar_t__ hw_type; } ;
struct TYPE_9__ {int cfo_threshold; scalar_t__ crystal_cap; } ;
struct TYPE_8__ {scalar_t__ rf_type; } ;
struct TYPE_7__ {int crystalcap; } ;
struct TYPE_6__ {scalar_t__ link_state; } ;
struct rtl_priv {TYPE_5__ rtlhal; TYPE_4__ dm; TYPE_3__ phy; TYPE_2__ efuse; TYPE_1__ mac80211; } ;
struct rtl_dm {scalar_t__ atc_status; int crystal_cap; int* cfo_tail; scalar_t__ packet_count; scalar_t__ packet_count_pre; int cfo_ave_pre; int large_cfo_hit; int cfo_threshold; int is_freeze; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_dm* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_3(VAR_10);
 struct rtl_dm *VAR_12 = FUNC_2(FUNC_3(VAR_10));
 u8 VAR_13;
 u32 VAR_14;
 int VAR_15, VAR_16, VAR_17 = 0, VAR_18 = 0;
 int VAR_19;

 if (VAR_11->mac80211.link_state < VAR_6) {

  if (VAR_12->atc_status == VAR_0) {
   FUNC_4(VAR_10, VAR_8, FUNC_0(14), VAR_1);
   VAR_12->atc_status = VAR_1;
  }

  FUNC_1(VAR_11, VAR_3, VAR_4, "No link!!\n");
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "atc_status = %d\n", VAR_12->atc_status);

  if (VAR_12->crystal_cap != VAR_11->efuse.crystalcap) {
   VAR_12->crystal_cap = VAR_11->efuse.crystalcap;
   VAR_13 = VAR_12->crystal_cap & 0x3f;
   VAR_13 = VAR_13 & 0x3f;
   if (VAR_11->rtlhal.hw_type == VAR_5)
    FUNC_4(VAR_10, VAR_7,
           0x7ff80000, (VAR_13 |
           (VAR_13 << 6)));
   else
    FUNC_4(VAR_10, VAR_7,
           0xfff000, (VAR_13 |
           (VAR_13 << 6)));
  }
  FUNC_1(VAR_11, VAR_3, VAR_4, "crystal_cap = 0x%x\n",
    VAR_12->crystal_cap);
 } else{

  VAR_15 = (int)(VAR_12->cfo_tail[0] * 3125) / 1280;
  VAR_16 = (int)(VAR_12->cfo_tail[1] * 3125) / 1280;
  VAR_14 = VAR_12->packet_count;


  if (VAR_14 == VAR_12->packet_count_pre) {
   FUNC_1(VAR_11, VAR_3, VAR_4,
     "packet counter doesn't change\n");
   return;
  }

  VAR_12->packet_count_pre = VAR_14;
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "packet counter = %d\n",
    VAR_12->packet_count);


  if (VAR_11->phy.rf_type == VAR_9)
   VAR_17 = VAR_15;
  else
   VAR_17 = (VAR_15 + VAR_16) >> 1;

  FUNC_1(VAR_11, VAR_3, VAR_4,
    "cfo_khz_a = %dkHz, cfo_khz_b = %dkHz, cfo_ave = %dkHz\n",
    VAR_15, VAR_16, VAR_17);


  VAR_19 = (VAR_12->cfo_ave_pre >= VAR_17) ?
      (VAR_12->cfo_ave_pre - VAR_17) :
      (VAR_17 - VAR_12->cfo_ave_pre);

  if (VAR_19 > 20 && VAR_12->large_cfo_hit == 0) {
   FUNC_1(VAR_11, VAR_3, VAR_4,
     "first large CFO hit\n");
   VAR_12->large_cfo_hit = 1;
   return;
  } else
   VAR_12->large_cfo_hit = 0;

  VAR_12->cfo_ave_pre = VAR_17;




  if (VAR_17 >= -VAR_12->cfo_threshold &&
   VAR_17 <= VAR_12->cfo_threshold &&
   VAR_12->is_freeze == 0) {
   if (VAR_12->cfo_threshold == VAR_2) {
    VAR_12->cfo_threshold = VAR_2 + 10;
    VAR_12->is_freeze = 1;
   } else {
    VAR_12->cfo_threshold = VAR_2;
   }
  }
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "Dynamic threshold = %d\n",
    VAR_12->cfo_threshold);


  if (VAR_17 > VAR_12->cfo_threshold && VAR_12->crystal_cap < 0x3f)
   VAR_18 = ((VAR_17 - VAR_2) >> 2) + 1;
  else if ((VAR_17 < -VAR_11->dm.cfo_threshold) &&
    VAR_11->dm.crystal_cap > 0)
   VAR_18 = ((VAR_17 + VAR_2) >> 2) - 1;
  FUNC_1(VAR_11, VAR_3, VAR_4,
    "Crystal cap = 0x%x, Crystal cap offset = %d\n",
    VAR_12->crystal_cap, VAR_18);


  if (VAR_18 != 0) {
   VAR_12->is_freeze = 0;
   VAR_12->crystal_cap += VAR_18;

   if (VAR_12->crystal_cap > 0x3f)
    VAR_12->crystal_cap = 0x3f;
   else if (VAR_12->crystal_cap < 0)
    VAR_12->crystal_cap = 0;

   VAR_13 = VAR_12->crystal_cap & 0x3f;
   VAR_13 = VAR_13 & 0x3f;
   if (VAR_11->rtlhal.hw_type == VAR_5)
    FUNC_4(VAR_10, VAR_7,
           0x7ff80000, (VAR_13 |
           (VAR_13 << 6)));
   else
    FUNC_4(VAR_10, VAR_7,
           0xfff000, (VAR_13 |
           (VAR_13 << 6)));
   FUNC_1(VAR_11, VAR_3, VAR_4,
     "New crystal cap = 0x%x\n",
     VAR_12->crystal_cap);
  }
 }
}
