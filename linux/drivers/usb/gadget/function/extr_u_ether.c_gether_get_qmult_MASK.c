
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct eth_dev {int qmult; } ;


 struct eth_dev* FUNC_0 (struct net_device*) ;

unsigned FUNC_1(struct net_device *VAR_0)
{
 struct eth_dev *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1->qmult;
}
