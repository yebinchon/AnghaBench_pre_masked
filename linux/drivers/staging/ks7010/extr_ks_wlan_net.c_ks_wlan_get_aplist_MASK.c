
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; int length; } ;
union iwreq_data {TYPE_3__ data; } ;
struct sockaddr {int sa_family; int sa_data; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int size; TYPE_1__* ap; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_2__ aplist; } ;
struct iw_request_info {int dummy; } ;
struct iw_quality {int updated; scalar_t__ noise; int qual; scalar_t__ level; } ;
struct TYPE_4__ {int sq; scalar_t__ rssi; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,struct iw_quality**,int) ;
 struct ks_wlan_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
         struct iw_request_info *VAR_5,
         union iwreq_data *VAR_6, char *VAR_7)
{
 struct ks_wlan_private *VAR_8 = FUNC_2(VAR_4);
 struct sockaddr *VAR_9 = (struct sockaddr *)VAR_7;
 struct iw_quality VAR_10[VAR_2];
 int VAR_11;

 if (VAR_8->sleep_mode == VAR_3)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_8->aplist.size; VAR_11++) {
  FUNC_0(VAR_9[VAR_11].sa_data, VAR_8->aplist.ap[VAR_11].bssid);
  VAR_9[VAR_11].sa_family = VAR_0;
  VAR_10[VAR_11].level = 256 - VAR_8->aplist.ap[VAR_11].rssi;
  VAR_10[VAR_11].qual = VAR_8->aplist.ap[VAR_11].sq;
  VAR_10[VAR_11].noise = 0;
  VAR_10[VAR_11].updated = 7;
 }
 if (VAR_11) {
  VAR_6->data.flags = 1;
  FUNC_1(VAR_7 + sizeof(struct sockaddr) * VAR_11,
         &VAR_10, sizeof(struct iw_quality) * VAR_11);
 }
 VAR_6->data.length = VAR_11;

 return 0;
}
