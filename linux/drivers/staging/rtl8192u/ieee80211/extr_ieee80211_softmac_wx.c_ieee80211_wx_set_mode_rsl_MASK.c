
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iwreq_data {scalar_t__ mode; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {int sync_scan_hurryup; scalar_t__ iw_mode; int wx_mutex; int proto_started; TYPE_1__* dev; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ieee80211_device *VAR_3, struct iw_request_info *VAR_4,
        union iwreq_data *VAR_5, char *VAR_6)
{

 VAR_3->sync_scan_hurryup = 1;

 FUNC_2(&VAR_3->wx_mutex);

 if (VAR_5->mode == VAR_3->iw_mode)
  goto out;

 if (VAR_5->mode == VAR_2)
  VAR_3->dev->type = VAR_1;
 else
  VAR_3->dev->type = VAR_0;

 if (!VAR_3->proto_started) {
  VAR_3->iw_mode = VAR_5->mode;
 } else {
  FUNC_1(VAR_3);
  VAR_3->iw_mode = VAR_5->mode;
  FUNC_0(VAR_3);
 }

out:
 FUNC_3(&VAR_3->wx_mutex);
 return 0;
}
