
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; int length; } ;
union iwreq_data {TYPE_3__ essid; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_5__ {TYPE_1__ el; int essid; } ;
struct wl3501_card {int lock; TYPE_2__ essid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
       struct iw_request_info *VAR_1,
       union iwreq_data *VAR_2, char *VAR_3)
{
 struct wl3501_card *VAR_4 = FUNC_1(VAR_0);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->lock, VAR_5);
 VAR_2->essid.flags = 1;
 VAR_2->essid.length = VAR_4->essid.el.len;
 FUNC_0(VAR_3, VAR_4->essid.essid, VAR_4->essid.el.len);
 FUNC_3(&VAR_4->lock, VAR_5);
 return 0;
}
