
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int* buff; int qtail; } ;
struct ks_wlan_private {TYPE_1__ hostt; } ;
struct iw_request_info {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct iw_request_info *VAR_2,
    __u32 *VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6;
 struct ks_wlan_private *VAR_7 = FUNC_0(VAR_1);

 for (VAR_5 = 63; VAR_5 >= 0; VAR_5--) {
  VAR_6 =
      VAR_7->hostt.buff[(VAR_7->hostt.qtail - 1 - VAR_5) %
         VAR_0];
  FUNC_1(VAR_1, VAR_6);
 }
 return 0;
}
