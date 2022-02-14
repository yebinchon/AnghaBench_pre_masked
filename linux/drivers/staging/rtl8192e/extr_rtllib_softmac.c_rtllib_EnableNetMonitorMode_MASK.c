
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int (* AllowAllDestAddrHandler ) (struct net_device*,int,int) ;} ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct rtllib_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int) ;

void FUNC_3(struct net_device *VAR_0,
  bool VAR_1)
{
 struct rtllib_device *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, "========>Enter Monitor Mode\n");

 VAR_2->AllowAllDestAddrHandler(VAR_0, 1, !VAR_1);
}
