
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct TYPE_2__ {int bssid; } ;
struct rtllib_device {short proto_started; scalar_t__ iw_mode; int wap_set; int cannot_notify; int wx_mutex; int lock; TYPE_1__ current_network; } ;
struct iw_request_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rtllib_device*) ;
 int FUNC_5 (struct rtllib_device*,int) ;
 int FUNC_6 (struct rtllib_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

int FUNC_9(struct rtllib_device *VAR_3,
    struct iw_request_info *VAR_4,
    union iwreq_data *VAR_5,
    char *VAR_6)
{

 int VAR_7 = 0;
 unsigned long VAR_8;

 short VAR_9 = VAR_3->proto_started;
 struct sockaddr *VAR_10 = (struct sockaddr *)VAR_5;

 FUNC_6(VAR_3);

 FUNC_2(&VAR_3->wx_mutex);

 if (VAR_3->iw_mode == VAR_2) {
  VAR_7 = -1;
  goto out;
 }

 if (VAR_10->sa_family != VAR_0) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (FUNC_1(VAR_10->sa_data)) {
  FUNC_7(&VAR_3->lock, VAR_8);
  FUNC_0(VAR_3->current_network.bssid, VAR_10->sa_data);
  VAR_3->wap_set = 0;
  FUNC_8(&VAR_3->lock, VAR_8);
  VAR_7 = -1;
  goto out;
 }


 if (VAR_9)
  FUNC_5(VAR_3, 1);




 FUNC_7(&VAR_3->lock, VAR_8);

 VAR_3->cannot_notify = 0;
 FUNC_0(VAR_3->current_network.bssid, VAR_10->sa_data);
 VAR_3->wap_set = !FUNC_1(VAR_10->sa_data);

 FUNC_8(&VAR_3->lock, VAR_8);

 if (VAR_9)
  FUNC_4(VAR_3);
out:
 FUNC_3(&VAR_3->wx_mutex);
 return VAR_7;
}
