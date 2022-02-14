
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_netdev {int qp; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct net_device*) ;
 struct ntb_netdev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(VAR_0);
 struct ntb_netdev *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(VAR_1);
 FUNC_3(VAR_2->qp);
 FUNC_1(VAR_1);
}
