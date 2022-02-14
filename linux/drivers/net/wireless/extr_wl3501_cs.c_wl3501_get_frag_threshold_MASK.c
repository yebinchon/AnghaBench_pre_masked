
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int disabled; int fixed; } ;
union iwreq_data {TYPE_1__ frag; } ;
typedef int u16 ;
typedef int threshold ;
struct wl3501_card {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 struct wl3501_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wl3501_card*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
         struct iw_request_info *VAR_2,
         union iwreq_data *VAR_3, char *VAR_4)
{
 u16 VAR_5;
 struct wl3501_card *VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = FUNC_1(VAR_6, VAR_0,
          &VAR_5, sizeof(VAR_5));
 if (!VAR_7) {
  VAR_3->frag.value = VAR_5;
  VAR_3->frag.disabled = VAR_5 >= 2346;
  VAR_3->frag.fixed = 1;
 }
 return VAR_7;
}
