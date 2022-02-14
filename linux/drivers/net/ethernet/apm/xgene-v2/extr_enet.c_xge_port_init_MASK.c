
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {int phy_speed; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct xge_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xge_pdata*) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_1)
{
 struct xge_pdata *VAR_2 = FUNC_0(VAR_1);

 VAR_2->phy_speed = VAR_0;
 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
}
