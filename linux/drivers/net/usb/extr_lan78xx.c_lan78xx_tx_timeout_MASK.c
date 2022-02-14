
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lan78xx_net {int bh; int txq; } ;


 struct lan78xx_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lan78xx_net*,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct lan78xx_net *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1, &VAR_1->txq);
 FUNC_1(&VAR_1->bh);
}
