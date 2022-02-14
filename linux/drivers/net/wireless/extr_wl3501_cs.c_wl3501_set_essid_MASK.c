
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ flags; } ;
union iwreq_data {TYPE_1__ data; } ;
struct TYPE_4__ {int el; } ;
struct wl3501_card {TYPE_2__ essid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,int) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
       struct iw_request_info *VAR_2,
       union iwreq_data *VAR_3, char *VAR_4)
{
 struct wl3501_card *VAR_5 = FUNC_1(VAR_1);

 if (VAR_3->data.flags) {
  FUNC_0(VAR_0,
      &VAR_5->essid.el,
      VAR_4, VAR_3->data.length);
 } else {
  FUNC_0(VAR_0,
      &VAR_5->essid.el, "ANY", 3);
 }
 return FUNC_2(VAR_1);
}
