
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int m; int e; } ;
union iwreq_data {TYPE_2__ freq; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ channel; } ;
struct TYPE_6__ {scalar_t__ channel; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_1__ reg; TYPE_3__ current_ap; int connect_status; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
       struct iw_request_info *VAR_4,
       union iwreq_data *VAR_5, char *VAR_6)
{
 struct ks_wlan_private *VAR_7 = FUNC_1(VAR_3);
 int VAR_8;

 if (VAR_7->sleep_mode == VAR_1)
  return -VAR_0;


 if (FUNC_0(VAR_7->connect_status))
  VAR_8 = (int)VAR_7->current_ap.channel;
 else
  VAR_8 = (int)VAR_7->reg.channel;

 VAR_5->freq.m = VAR_2[VAR_8 - 1] * 100000;
 VAR_5->freq.e = 1;

 return 0;
}
