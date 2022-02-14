
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; int name; } ;
struct bgmac {int napi; int dev; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct bgmac*) ;
 int FUNC_1 (struct bgmac*) ;
 int FUNC_2 (struct bgmac*) ;
 int FUNC_3 (struct bgmac*) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *) ;
 struct bgmac* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_2)
{
 struct bgmac *VAR_3 = FUNC_6(VAR_2);
 int VAR_4 = 0;

 FUNC_1(VAR_3);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;


 FUNC_0(VAR_3);

 VAR_4 = FUNC_9(VAR_3->irq, VAR_1, VAR_0,
     VAR_2->name, VAR_2);
 if (VAR_4 < 0) {
  FUNC_4(VAR_3->dev, "IRQ request error: %d!\n", VAR_4);
  FUNC_2(VAR_3);
  return VAR_4;
 }
 FUNC_5(&VAR_3->napi);

 FUNC_8(VAR_2->phydev);

 FUNC_7(VAR_2);

 return 0;
}
