
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_start_sched_scan_cmd {int num_of_channels; scalar_t__* channel_list; } ;
struct wil6210_priv {int dummy; } ;
struct ieee80211_channel {scalar_t__ hw_value; } ;


 int VAR_0 ;
 int FUNC_0 (struct wil6210_priv*,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct wil6210_priv *VAR_1,
       struct wmi_start_sched_scan_cmd *VAR_2,
       u32 VAR_3,
       struct ieee80211_channel **VAR_4)
{
 int VAR_5;

 if (VAR_3 > VAR_0) {
  FUNC_0(VAR_1, "too many channels (%d), use first %d\n",
       VAR_3, VAR_0);
  VAR_3 = VAR_0;
 }
 VAR_2->num_of_channels = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct ieee80211_channel *VAR_6 = VAR_4[VAR_5];

  VAR_2->channel_list[VAR_5] = VAR_6->hw_value - 1;
 }
}
