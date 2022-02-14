
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int timeout; int napi; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 struct pxa168_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct pxa168_eth_private*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3)
{
 struct pxa168_eth_private *VAR_4 = FUNC_4(VAR_3);
 FUNC_1(VAR_3);


 FUNC_8(VAR_4, VAR_1, 0);
 FUNC_8(VAR_4, VAR_0, 0);

 FUNC_8(VAR_4, VAR_2, 0);
 FUNC_3(&VAR_4->napi);
 FUNC_0(&VAR_4->timeout);
 FUNC_5(VAR_3);
 FUNC_2(VAR_3->irq, VAR_3);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3);

 return 0;
}
