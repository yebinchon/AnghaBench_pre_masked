
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {scalar_t__ mode; } ;
struct wl3501_card {scalar_t__ net_type; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct wl3501_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, struct iw_request_info *VAR_5,
      union iwreq_data *VAR_6, char *VAR_7)
{
 int VAR_8 = -VAR_0;

 if (VAR_6->mode == VAR_3 ||
     VAR_6->mode == VAR_1 ||
     VAR_6->mode == VAR_2) {
  struct wl3501_card *VAR_9 = FUNC_0(VAR_4);

  VAR_9->net_type = VAR_6->mode;
  VAR_8 = FUNC_1(VAR_4);
 }
 return VAR_8;
}
