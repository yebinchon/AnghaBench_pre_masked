
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; int flags; int value; } ;
union iwreq_data {TYPE_1__ power; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {int ps; int ps_timeout; int ps_period; int wx_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ieee80211_device *VAR_9,
     struct iw_request_info *VAR_10,
     union iwreq_data *VAR_11, char *VAR_12)
{
 FUNC_0(&VAR_9->wx_mutex);

 if (VAR_9->ps == VAR_0) {
  VAR_11->power.disabled = 1;
  goto exit;
 }

 VAR_11->power.disabled = 0;

 if ((VAR_11->power.flags & VAR_7) == VAR_6) {
  VAR_11->power.flags = VAR_6;
  VAR_11->power.value = VAR_9->ps_timeout * 1000;
 } else {


  VAR_11->power.flags = VAR_5;
  VAR_11->power.value = VAR_9->ps_period * 1000;

 }

 if ((VAR_9->ps & (VAR_1 | VAR_2)) == (VAR_1 | VAR_2))
  VAR_11->power.flags |= VAR_3;
 else if (VAR_9->ps & VAR_1)
  VAR_11->power.flags |= VAR_4;
 else
  VAR_11->power.flags |= VAR_8;

exit:
 FUNC_1(&VAR_9->wx_mutex);
 return 0;

}
