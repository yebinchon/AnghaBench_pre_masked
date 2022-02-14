
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; int flags; } ;
union iwreq_data {TYPE_1__ power; } ;
typedef int u8 ;
struct wl3501_card {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int pwr_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct wl3501_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wl3501_card*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
       struct iw_request_info *VAR_3,
       union iwreq_data *VAR_4, char *VAR_5)
{
 u8 VAR_6;
 struct wl3501_card *VAR_7 = FUNC_0(VAR_2);
 int VAR_8 = FUNC_1(VAR_7,
          VAR_1,
          &VAR_6, sizeof(VAR_6));
 if (VAR_8)
  goto out;
 VAR_4->power.disabled = !VAR_6;
 VAR_4->power.flags = VAR_0;
out:
 return VAR_8;
}
