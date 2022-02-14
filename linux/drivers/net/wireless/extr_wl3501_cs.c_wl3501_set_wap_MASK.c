
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_family; int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct wl3501_card {int bssid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct wl3501_card* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct iw_request_info *VAR_4,
     union iwreq_data *VAR_5, char *VAR_6)
{
 struct wl3501_card *VAR_7 = FUNC_2(VAR_3);
 int VAR_8 = -VAR_1;


 if (VAR_5->ap_addr.sa_family != VAR_0)
  goto out;
 if (FUNC_0(VAR_5->ap_addr.sa_data)) {

 } else
  FUNC_1(VAR_7->bssid, VAR_5->ap_addr.sa_data, VAR_2);

 VAR_8 = 0;
out:
 return VAR_8;
}
