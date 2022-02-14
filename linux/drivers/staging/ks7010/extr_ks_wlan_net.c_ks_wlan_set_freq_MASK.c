
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int e; int m; } ;
union iwreq_data {TYPE_1__ freq; } ;
typedef int u8 ;
struct net_device {int name; } ;
struct TYPE_4__ {int channel; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int need_commit; TYPE_2__ reg; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (struct net_device*,char*,int ,int) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_7,
       struct iw_request_info *VAR_8,
       union iwreq_data *VAR_9, char *VAR_10)
{
 struct ks_wlan_private *VAR_11 = FUNC_1(VAR_7);
 int VAR_12;

 if (VAR_11->sleep_mode == VAR_4)
  return -VAR_3;



 if ((VAR_9->freq.e == 1) &&
     (VAR_9->freq.m >= 241200000) && (VAR_9->freq.m <= 248700000)) {
  int VAR_13 = VAR_9->freq.m / 100000;
  int VAR_14 = 0;

  while ((VAR_14 < 14) && (VAR_13 != VAR_6[VAR_14]))
   VAR_14++;

  VAR_9->freq.e = 0;
  VAR_9->freq.m = VAR_14 + 1;
 }

 if ((VAR_9->freq.m > 1000) || (VAR_9->freq.e > 0))
  return -VAR_2;

 VAR_12 = VAR_9->freq.m;



 if ((VAR_12 < 1) || (VAR_12 > 14)) {
  FUNC_0(VAR_7, "%s: New channel value of %d is invalid!\n",
      VAR_7->name, VAR_9->freq.m);
  return -VAR_1;
 }


 VAR_11->reg.channel = (u8)(VAR_12);
 VAR_11->need_commit |= VAR_5;

 return -VAR_0;
}
