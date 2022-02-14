
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; } ;
struct iw_request_info {int dummy; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 int FUNC_1 (struct net_device*,char*,scalar_t__) ;
 int FUNC_2 (struct net_device*,char*,scalar_t__) ;
 struct ks_wlan_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
      struct iw_request_info *VAR_6,
      __u32 *VAR_7, char *VAR_8)
{
 struct ks_wlan_private *VAR_9 = FUNC_3(VAR_5);

 if (*VAR_7 != VAR_2 &&
     *VAR_7 != VAR_1) {
  FUNC_1(VAR_5, "SET_SLEEP_MODE %d error\n", *VAR_7);
  return -VAR_0;
 }

 VAR_9->sleep_mode = *VAR_7;
 FUNC_2(VAR_5, "SET_SLEEP_MODE %d\n", VAR_9->sleep_mode);

 if (*VAR_7 == VAR_2)
  FUNC_0(VAR_9, VAR_4);

 FUNC_0(VAR_9, VAR_3);

 return 0;
}
