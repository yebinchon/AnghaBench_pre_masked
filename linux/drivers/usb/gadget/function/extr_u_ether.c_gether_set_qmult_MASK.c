
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct eth_dev {unsigned int qmult; } ;


 struct eth_dev* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_0, unsigned VAR_1)
{
 struct eth_dev *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2->qmult = VAR_1;
}
