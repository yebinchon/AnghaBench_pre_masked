
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_device {short proto_started; int sync_scan_hurryup; scalar_t__ iw_mode; int wap_set; int wx_mutex; int lock; TYPE_1__ current_network; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct ieee80211_device *VAR_4,
    struct iw_request_info *VAR_5,
    union iwreq_data *VAR_6,
    char *VAR_7)
{

 int VAR_8 = 0;
 unsigned long VAR_9;

 short VAR_10 = VAR_4->proto_started;
 struct sockaddr *VAR_11 = (struct sockaddr *)VAR_6;

 VAR_4->sync_scan_hurryup = 1;

 FUNC_4(&VAR_4->wx_mutex);

 if (VAR_4->iw_mode == VAR_3) {
  VAR_8 = -1;
  goto out;
 }

 if (VAR_11->sa_family != VAR_0) {
  VAR_8 = -VAR_1;
  goto out;
 }

 if (VAR_10)
  FUNC_1(VAR_4);




 FUNC_6(&VAR_4->lock, VAR_9);

 FUNC_3(VAR_4->current_network.bssid, VAR_11->sa_data, VAR_2);
 VAR_4->wap_set = !FUNC_2(VAR_11->sa_data);

 FUNC_7(&VAR_4->lock, VAR_9);

 if (VAR_10)
  FUNC_0(VAR_4);
out:
 FUNC_5(&VAR_4->wx_mutex);
 return VAR_8;
}
