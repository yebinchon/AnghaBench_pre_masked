
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wmi_set_tx_select_rates32_cmd {int * ratemask; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cfg80211_bitrate_mask {TYPE_1__* control; } ;
typedef int ratemask ;
struct TYPE_2__ {int legacy; int* ht_mcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int**,int ,int) ;

__attribute__((used)) static int FUNC_5(struct wmi *VAR_11, u8 VAR_12,
         const struct cfg80211_bitrate_mask *VAR_13)
{
 struct sk_buff *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19[VAR_1];
 struct wmi_set_tx_select_rates32_cmd *VAR_20;

 FUNC_4(&VAR_19, 0, sizeof(VAR_19));


 for (VAR_17 = 0; VAR_17 <= VAR_4; VAR_17++) {

  VAR_19[VAR_17] = VAR_13->control[VAR_17].legacy;
  if (VAR_17 == VAR_4)
   VAR_19[VAR_17] =
    VAR_13->control[VAR_17].legacy << 4;


  VAR_18 = VAR_13->control[VAR_17].ht_mcs[0];
  VAR_19[VAR_17] |= VAR_18 << 12;
  VAR_19[VAR_17] |= VAR_18 << 20;
 }

 FUNC_0(VAR_0,
     "Ratemask 32 bit: 2.4:%x 5:%x\n",
     VAR_19[0], VAR_19[1]);

 VAR_14 = FUNC_2(sizeof(*VAR_20) * VAR_9);
 if (!VAR_14)
  return -VAR_2;

 VAR_20 = (struct wmi_set_tx_select_rates32_cmd *) VAR_14->data;
 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {

  if (VAR_16 == VAR_6 ||
      VAR_16 == VAR_7 ||
      VAR_16 == VAR_8)
   VAR_17 = VAR_4;
  else
   VAR_17 = VAR_3;
  VAR_20->ratemask[VAR_16] = FUNC_3(VAR_19[VAR_17]);
 }

 VAR_15 = FUNC_1(VAR_11, VAR_12, VAR_14,
      VAR_10,
      VAR_5);
 return VAR_15;
}
