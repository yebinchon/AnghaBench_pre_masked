
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ disabled; int value; } ;
union iwreq_data {TYPE_1__ retry; } ;
typedef int u8 ;
struct wl3501_card {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int retry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wl3501_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wl3501_card*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7, char *VAR_8)
{
 u8 VAR_9;
 struct wl3501_card *VAR_10 = FUNC_0(VAR_5);
 int VAR_11 = FUNC_1(VAR_10,
          VAR_3,
          &VAR_9, sizeof(VAR_9));
 if (VAR_11)
  goto out;
 if (VAR_7->retry.flags & VAR_1) {
  VAR_7->retry.flags = VAR_0 | VAR_1;
  goto set_value;
 }
 VAR_11 = FUNC_1(VAR_10, VAR_4,
      &VAR_9, sizeof(VAR_9));
 if (VAR_11)
  goto out;
 VAR_7->retry.flags = VAR_0 | VAR_2;
set_value:
 VAR_7->retry.value = VAR_9;
 VAR_7->retry.disabled = 0;
out:
 return VAR_11;
}
