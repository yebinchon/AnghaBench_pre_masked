
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; int flags; } ;
union iwreq_data {TYPE_2__ essid; } ;
struct TYPE_3__ {char* ssid; int ssid_len; } ;
struct rtllib_device {scalar_t__ iw_mode; scalar_t__ state; scalar_t__ ssid_set; int lock; TYPE_1__ current_network; } ;
struct iw_request_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(struct rtllib_device *VAR_3, struct iw_request_info *VAR_4,
    union iwreq_data *VAR_5, char *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 unsigned long VAR_9;

 if (VAR_3->iw_mode == VAR_0)
  return -1;


 FUNC_0(&VAR_3->lock, VAR_9);

 if (VAR_3->current_network.ssid[0] == '\0' ||
  VAR_3->current_network.ssid_len == 0) {
  VAR_8 = -1;
  goto out;
 }

 if (VAR_3->state != VAR_1 &&
  VAR_3->state != VAR_2 &&
  VAR_3->ssid_set == 0) {
  VAR_8 = -1;
  goto out;
 }
 VAR_7 = VAR_3->current_network.ssid_len;
 VAR_5->essid.length = VAR_7;
 FUNC_2(VAR_6, VAR_3->current_network.ssid, VAR_7);
 VAR_5->essid.flags = 1;

out:
 FUNC_1(&VAR_3->lock, VAR_9);

 return VAR_8;

}
