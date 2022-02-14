
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int flags; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct iw_scan_req {scalar_t__ scan_type; int essid; scalar_t__ essid_len; } ;
struct iw_request_info {int dummy; } ;
struct delayed_work {int dummy; } ;
struct ipw_priv {int user_requested_scan; int direct_scan_ssid_len; int mutex; struct delayed_work request_scan; struct delayed_work request_passive_scan; struct delayed_work request_direct_scan; int direct_scan_ssid; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct delayed_work*,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2,
      struct iw_request_info *VAR_3,
      union iwreq_data *VAR_4, char *VAR_5)
{
 struct ipw_priv *VAR_6 = FUNC_1(VAR_2);
 struct iw_scan_req *VAR_7 = (struct iw_scan_req *)VAR_5;
 struct delayed_work *VAR_8 = ((void*)0);

 FUNC_4(&VAR_6->mutex);

 VAR_6->user_requested_scan = 1;

 if (VAR_4->data.length == sizeof(struct iw_scan_req)) {
  if (VAR_4->data.flags & VAR_0) {
   int VAR_9 = FUNC_3((int)VAR_7->essid_len,
                 (int)sizeof(VAR_6->direct_scan_ssid));
   FUNC_2(VAR_6->direct_scan_ssid, VAR_7->essid, VAR_9);
   VAR_6->direct_scan_ssid_len = VAR_9;
   VAR_8 = &VAR_6->request_direct_scan;
  } else if (VAR_7->scan_type == VAR_1) {
   VAR_8 = &VAR_6->request_passive_scan;
  }
 } else {

  VAR_8 = &VAR_6->request_scan;
 }

 FUNC_5(&VAR_6->mutex);

 FUNC_0("Start scan\n");

 FUNC_6(VAR_8, 0);

 return 0;
}
