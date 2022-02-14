
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; int e; } ;
union iwreq_data {TYPE_1__ freq; } ;
struct wl3501_card {int chan; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct iw_request_info *VAR_2,
      union iwreq_data *VAR_3, char *VAR_4)
{
 struct wl3501_card *VAR_5 = FUNC_1(VAR_1);

 VAR_3->freq.m = 100000 *
  FUNC_0(VAR_5->chan, VAR_0);
 VAR_3->freq.e = 1;
 return 0;
}
