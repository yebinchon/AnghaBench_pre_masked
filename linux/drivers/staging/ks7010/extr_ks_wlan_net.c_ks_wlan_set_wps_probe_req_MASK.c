
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ielen; scalar_t__ ie; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_1__ wps; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
typedef int len ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 int* FUNC_1 (scalar_t__,...) ;
 int FUNC_2 (struct net_device*,char*,int,int,int,int,int,int,int,int,int) ;
 struct ks_wlan_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
         struct iw_request_info *VAR_5,
         struct iw_point *VAR_6, char *VAR_7)
{
 u8 *VAR_8 = VAR_7;
 unsigned char VAR_9;
 struct ks_wlan_private *VAR_10 = FUNC_3(VAR_4);

 if (VAR_10->sleep_mode == VAR_2)
  return -VAR_1;


 if (VAR_8[1] + 2 != VAR_6->length || VAR_6->length > 256)
  return -VAR_0;

 VAR_10->wps.ielen = VAR_8[1] + 2 + 1;
 VAR_9 = VAR_8[1] + 2;

 FUNC_1(VAR_10->wps.ie, &VAR_9, sizeof(VAR_9));
 VAR_8 = FUNC_1(VAR_10->wps.ie + 1, VAR_8, VAR_9);

 FUNC_2(VAR_4, "%d(%#x): %02X %02X %02X %02X ... %02X %02X %02X\n",
     VAR_10->wps.ielen, VAR_10->wps.ielen, VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3],
     VAR_8[VAR_10->wps.ielen - 3], VAR_8[VAR_10->wps.ielen - 2],
     VAR_8[VAR_10->wps.ielen - 1]);

 FUNC_0(VAR_10, VAR_3);

 return 0;
}
