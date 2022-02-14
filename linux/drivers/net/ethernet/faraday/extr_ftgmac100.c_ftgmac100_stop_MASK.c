
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; scalar_t__ phydev; } ;
struct ftgmac100 {int ndev; scalar_t__ use_ncsi; int napi; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct ftgmac100*) ;
 int FUNC_2 (struct ftgmac100*) ;
 int FUNC_3 (struct ftgmac100*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct ftgmac100* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1)
{
 struct ftgmac100 *VAR_2 = FUNC_7(VAR_1);
 FUNC_4(0, VAR_2->base + VAR_0);

 FUNC_9(VAR_1);
 FUNC_5(&VAR_2->napi);
 FUNC_8(&VAR_2->napi);
 if (VAR_1->phydev)
  FUNC_10(VAR_1->phydev);
 else if (VAR_2->use_ncsi)
  FUNC_6(VAR_2->ndev);

 FUNC_3(VAR_2);
 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 return 0;
}
