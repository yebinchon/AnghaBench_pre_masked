
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int bHalfWirelessN24GMode; } ;
struct r8192_priv {struct rtllib_device* rtllib; } ;
struct net_device {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

bool FUNC_1(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_0(VAR_0);
 struct rtllib_device *VAR_2 = VAR_1->rtllib;

 return VAR_2->bHalfWirelessN24GMode;
}
