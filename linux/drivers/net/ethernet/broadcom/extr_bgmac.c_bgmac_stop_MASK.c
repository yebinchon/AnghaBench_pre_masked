
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct bgmac {int irq; int napi; } ;


 int FUNC_0 (struct bgmac*) ;
 int FUNC_1 (struct bgmac*) ;
 int FUNC_2 (struct bgmac*) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (int *) ;
 struct bgmac* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0)
{
 struct bgmac *VAR_1 = FUNC_5(VAR_0);

 FUNC_6(VAR_0);

 FUNC_7(VAR_0->phydev);

 FUNC_4(&VAR_1->napi);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1->irq, VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);

 return 0;
}
