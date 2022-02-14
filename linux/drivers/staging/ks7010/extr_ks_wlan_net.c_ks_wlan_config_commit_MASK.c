
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ need_commit; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (struct ks_wlan_private*,scalar_t__) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
     struct iw_request_info *VAR_1,
     union iwreq_data *VAR_2,
     char *VAR_3)
{
 struct ks_wlan_private *VAR_4 = FUNC_1(VAR_0);

 if (!VAR_4->need_commit)
  return 0;

 FUNC_0(VAR_4, VAR_4->need_commit);
 VAR_4->need_commit = 0;
 return 0;
}
