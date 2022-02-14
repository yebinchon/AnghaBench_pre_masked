
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtllib_device {int bNetPromiscuousMode; int (* SetHwRegHandler ) (struct net_device*,int ,int *) ;int (* AllowAllDestAddrHandler ) (struct net_device*,int,int) ;} ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct rtllib_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int ,int *) ;

void FUNC_4(struct net_device *VAR_1,
  bool VAR_2)
{
 bool VAR_3 = 1;

 struct rtllib_device *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, "========>Exit Intel Promiscuous Mode\n");

 VAR_4->AllowAllDestAddrHandler(VAR_1, 0, !VAR_2);
 VAR_4->SetHwRegHandler(VAR_1, VAR_0,
        (u8 *)&VAR_3);

 VAR_4->bNetPromiscuousMode = 0;
}
