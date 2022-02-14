
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wmi_tim_info_arg {scalar_t__ tim_mcast; scalar_t__* tim_bitmap; scalar_t__ tim_changed; scalar_t__ tim_len; } ;
struct sk_buff {int* data; } ;
struct ieee80211_tim_ie {int bitmap_ctrl; scalar_t__ dtim_count; int dtim_period; int virtual_map; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_4__ {int* tim_bitmap; int tim_len; } ;
struct TYPE_5__ {TYPE_1__ ap; } ;
struct ath10k_vif {scalar_t__ vdev_type; TYPE_2__ u; } ;
struct ath10k {int dummy; } ;
typedef scalar_t__ __le32 ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ath10k*,int ,char*,scalar_t__,int ,int,int) ;
 int FUNC_3 (struct ath10k*,char*,...) ;
 scalar_t__ FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (void*,void*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int* FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct ath10k *VAR_5,
      struct ath10k_vif *VAR_6,
      struct sk_buff *VAR_7,
      const struct wmi_tim_info_arg *VAR_8)
{
 struct ieee80211_hdr *VAR_9 = (struct ieee80211_hdr *)VAR_7->data;
 struct ieee80211_tim_ie *VAR_10;
 u8 *VAR_11, *VAR_12;
 u8 VAR_13, VAR_14;
 __le32 VAR_15;
 u32 VAR_16, VAR_17;




 VAR_17 = VAR_8->tim_len ? FUNC_1(VAR_8->tim_len) : 1;




 if (FUNC_1(VAR_8->tim_changed)) {
  int VAR_18;

  if (sizeof(VAR_6->u.ap.tim_bitmap) < VAR_17) {
   FUNC_3(VAR_5, "SWBA TIM field is too big (%u), truncated it to %zu",
        VAR_17, sizeof(VAR_6->u.ap.tim_bitmap));
   VAR_17 = sizeof(VAR_6->u.ap.tim_bitmap);
  }

  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
   VAR_15 = VAR_8->tim_bitmap[VAR_18 / 4];
   VAR_16 = FUNC_1(VAR_15);
   VAR_6->u.ap.tim_bitmap[VAR_18] = (VAR_16 >> ((VAR_18 % 4) * 8)) & 0xFF;
  }




  VAR_6->u.ap.tim_len = 0;
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
   if (VAR_6->u.ap.tim_bitmap[VAR_18])
    VAR_6->u.ap.tim_len = VAR_18;

  VAR_6->u.ap.tim_len++;
 }

 VAR_11 = VAR_7->data;
 VAR_11 += FUNC_5(VAR_9->frame_control);
 VAR_11 += 12;

 VAR_12 = (u8 *)FUNC_4(VAR_3, VAR_11,
        (u8 *)FUNC_9(VAR_7) - VAR_11);
 if (!VAR_12) {
  if (VAR_6->vdev_type != VAR_4)
   FUNC_3(VAR_5, "no tim ie found;\n");
  return;
 }

 VAR_10 = (void *)VAR_12 + 2;
 VAR_13 = VAR_12[1];
 VAR_14 = VAR_13 - 3;

 if (VAR_14 < VAR_6->u.ap.tim_len) {
  int VAR_19 = VAR_17 - VAR_14;
  int VAR_20 = FUNC_9(VAR_7) - (VAR_12 + 2 + VAR_13);
  void *VAR_21 = VAR_12 + 2 + VAR_13;

  if (FUNC_8(VAR_7, VAR_19)) {
   FUNC_7(VAR_21 + VAR_19, VAR_21, VAR_20);

   VAR_12[1] += VAR_19;
   VAR_13 += VAR_19;
   VAR_14 += VAR_19;
  } else {
   FUNC_3(VAR_5, "tim expansion failed\n");
  }
 }

 if (VAR_14 > VAR_17) {
  FUNC_3(VAR_5, "tim pvm length is too great (%d)\n", VAR_14);
  return;
 }

 VAR_10->bitmap_ctrl = !!FUNC_1(VAR_8->tim_mcast);
 FUNC_6(VAR_10->virtual_map, VAR_6->u.ap.tim_bitmap, VAR_14);

 if (VAR_10->dtim_count == 0) {
  FUNC_0(VAR_7)->flags |= VAR_2;

  if (FUNC_1(VAR_8->tim_mcast) == 1)
   FUNC_0(VAR_7)->flags |= VAR_1;
 }

 FUNC_2(VAR_5, VAR_0, "dtim %d/%d mcast %d pvmlen %d\n",
     VAR_10->dtim_count, VAR_10->dtim_period,
     VAR_10->bitmap_ctrl, VAR_14);
}
