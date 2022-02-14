
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; scalar_t__ flags; } ;
union iwreq_data {TYPE_1__ essid; } ;
struct TYPE_4__ {char* ssid; int ssid_len; } ;
struct rtllib_device {short proto_started; scalar_t__ iw_mode; int cannot_notify; int ssid_set; int wx_mutex; int lock; TYPE_2__ current_network; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtllib_device*) ;
 int FUNC_4 (struct rtllib_device*,int) ;
 int FUNC_5 (struct rtllib_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (char*,char*,int) ;

int FUNC_9(struct rtllib_device *VAR_3,
   struct iw_request_info *VAR_4,
   union iwreq_data *VAR_5, char *VAR_6)
{

 int VAR_7 = 0, VAR_8, VAR_9;
 short VAR_10;
 unsigned long VAR_11;

 FUNC_5(VAR_3);
 FUNC_1(&VAR_3->wx_mutex);

 VAR_10 = VAR_3->proto_started;

 VAR_8 = FUNC_0(VAR_2, VAR_5->essid.length, VAR_0);

 if (VAR_3->iw_mode == VAR_1) {
  VAR_7 = -1;
  goto out;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (VAR_6[VAR_9] < 0) {
   VAR_7 = -1;
   goto out;
  }
 }

 if (VAR_10)
  FUNC_4(VAR_3, 1);





 FUNC_6(&VAR_3->lock, VAR_11);

 if (VAR_5->essid.flags && VAR_5->essid.length) {
  FUNC_8(VAR_3->current_network.ssid, VAR_6, VAR_8);
  VAR_3->current_network.ssid_len = VAR_8;
  VAR_3->cannot_notify = 0;
  VAR_3->ssid_set = 1;
 } else {
  VAR_3->ssid_set = 0;
  VAR_3->current_network.ssid[0] = '\0';
  VAR_3->current_network.ssid_len = 0;
 }
 FUNC_7(&VAR_3->lock, VAR_11);

 if (VAR_10)
  FUNC_3(VAR_3);
out:
 FUNC_2(&VAR_3->wx_mutex);
 return VAR_7;
}
