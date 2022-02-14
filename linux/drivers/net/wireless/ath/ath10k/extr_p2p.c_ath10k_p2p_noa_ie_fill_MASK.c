
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wmi_p2p_noa_info {int ctwindow_oppps; int num_descriptors; TYPE_2__* descriptors; int index; } ;
struct ieee80211_p2p_noa_desc {int dummy; } ;
struct ieee80211_p2p_noa_attr {int oppps_ctwindow; TYPE_1__* desc; int index; } ;
typedef int __le16 ;
struct TYPE_4__ {int start_time; int interval; int duration; int type_count; } ;
struct TYPE_3__ {int start_time; int interval; int duration; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_7, size_t VAR_8,
       const struct wmi_p2p_noa_info *VAR_9)
{
 struct ieee80211_p2p_noa_attr *VAR_10;
 u8 VAR_11 = VAR_9->ctwindow_oppps;
 u8 VAR_12 = VAR_11 >> VAR_5;
 bool VAR_13 = !!(VAR_11 & VAR_6);
 __le16 *VAR_14;
 u16 VAR_15;
 u8 VAR_16 = VAR_9->num_descriptors;
 int VAR_17;


 VAR_7[0] = VAR_2;
 VAR_7[1] = VAR_8 - 2;
 VAR_7[2] = (VAR_4 >> 16) & 0xff;
 VAR_7[3] = (VAR_4 >> 8) & 0xff;
 VAR_7[4] = (VAR_4 >> 0) & 0xff;
 VAR_7[5] = VAR_3;


 VAR_7[6] = VAR_0;
 VAR_14 = (__le16 *)&VAR_7[7];
 VAR_10 = (struct ieee80211_p2p_noa_attr *)&VAR_7[9];

 VAR_10->index = VAR_9->index;
 VAR_10->oppps_ctwindow = VAR_12;
 if (VAR_13)
  VAR_10->oppps_ctwindow |= VAR_1;

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_10->desc[VAR_17].count =
   FUNC_1(VAR_9->descriptors[VAR_17].type_count);
  VAR_10->desc[VAR_17].duration = VAR_9->descriptors[VAR_17].duration;
  VAR_10->desc[VAR_17].interval = VAR_9->descriptors[VAR_17].interval;
  VAR_10->desc[VAR_17].start_time = VAR_9->descriptors[VAR_17].start_time;
 }

 VAR_15 = 2;
 VAR_15 += VAR_16 * sizeof(struct ieee80211_p2p_noa_desc);
 *VAR_14 = FUNC_0(VAR_15);
}
