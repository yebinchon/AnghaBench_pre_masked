
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_device {scalar_t__ state; int actscanning; int scan_mutex; scalar_t__ sync_scan_hurryup; int dev; int (* set_chan ) (int ,short) ;} ;
struct TYPE_2__ {int channel_map; } ;


 TYPE_1__* FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ieee80211_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,short) ;

void FUNC_9(struct ieee80211_device *VAR_3)
{
 short VAR_4 = 0;
 u8 VAR_5[VAR_2 + 1];

 FUNC_4(VAR_5, FUNC_0(VAR_3)->channel_map, VAR_2 + 1);
 FUNC_6(&VAR_3->scan_mutex);

 while (1) {
  do {
   VAR_4++;
   if (VAR_4 > VAR_2)
    goto out;
  } while (!VAR_5[VAR_4]);
  if (VAR_3->state == VAR_0)
   goto out;
  VAR_3->set_chan(VAR_3->dev, VAR_4);
  if (VAR_5[VAR_4] == 1)
   FUNC_3(VAR_3);




  if (VAR_3->state >= VAR_0 && VAR_3->sync_scan_hurryup)
   goto out;

  FUNC_5(VAR_1);
 }
out:
 if (VAR_3->state < VAR_0) {
  VAR_3->actscanning = 0;
  FUNC_7(&VAR_3->scan_mutex);
 } else {
  VAR_3->sync_scan_hurryup = 0;
  if (FUNC_1(VAR_3))
   FUNC_2(VAR_3);
  FUNC_7(&VAR_3->scan_mutex);
 }
}
