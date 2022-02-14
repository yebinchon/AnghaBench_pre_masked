
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct wl3501_card {int bssid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct iw_request_info *VAR_3,
     union iwreq_data *VAR_4, char *VAR_5)
{
 struct wl3501_card *VAR_6 = FUNC_1(VAR_2);

 VAR_4->ap_addr.sa_family = VAR_0;
 FUNC_0(VAR_4->ap_addr.sa_data, VAR_6->bssid, VAR_1);
 return 0;
}
