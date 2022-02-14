
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bdRT2RTAggregation; } ;
struct rtllib_network {TYPE_1__ bssht; scalar_t__ broadcom_cap_exist; int bssid; scalar_t__ ralink_cap_exist; } ;
struct rtllib_device {struct rtllib_network current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

bool FUNC_1(struct rtllib_device *VAR_8)
{
 bool VAR_9 = 0;
 struct rtllib_network *VAR_10 = &VAR_8->current_network;

 if ((FUNC_0(VAR_10->bssid, VAR_2, 3) == 0) ||
     (FUNC_0(VAR_10->bssid, VAR_1, 3) == 0) ||
     (FUNC_0(VAR_10->bssid, VAR_6, 3) == 0) ||
     (FUNC_0(VAR_10->bssid, VAR_3, 3) == 0) ||
     (FUNC_0(VAR_10->bssid, VAR_0, 3) == 0) ||
     (VAR_10->ralink_cap_exist))
  VAR_9 = 1;
 else if (!FUNC_0(VAR_10->bssid, VAR_7, 3) ||
  !FUNC_0(VAR_10->bssid, VAR_4, 3) ||
  !FUNC_0(VAR_10->bssid, VAR_5, 3) ||
  (VAR_10->broadcom_cap_exist))
  VAR_9 = 1;
 else if (VAR_10->bssht.bdRT2RTAggregation)
  VAR_9 = 1;
 else
  VAR_9 = 0;

 return VAR_9;
}
