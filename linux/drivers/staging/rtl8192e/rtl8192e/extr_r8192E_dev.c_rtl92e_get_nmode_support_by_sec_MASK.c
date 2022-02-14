
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int (* rtllib_ap_sec_type ) (struct rtllib_device*) ;} ;
struct r8192_priv {struct rtllib_device* rtllib; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rtllib_device*) ;

bool FUNC_2(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_2);
 struct rtllib_device *VAR_4 = VAR_3->rtllib;

 if (VAR_4->rtllib_ap_sec_type &&
    (VAR_4->rtllib_ap_sec_type(VAR_3->rtllib)&(VAR_1 |
         VAR_0))) {
  return 0;
 } else {
  return 1;
 }
}
