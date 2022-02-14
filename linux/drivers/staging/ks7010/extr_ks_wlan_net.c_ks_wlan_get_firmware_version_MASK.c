
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ version_size; int firmware_version; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; } ;


 struct ks_wlan_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
     struct iw_request_info *VAR_1,
     struct iw_point *VAR_2, char *VAR_3)
{
 struct ks_wlan_private *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, VAR_4->firmware_version);
 VAR_2->length = VAR_4->version_size + 1;
 return 0;
}
