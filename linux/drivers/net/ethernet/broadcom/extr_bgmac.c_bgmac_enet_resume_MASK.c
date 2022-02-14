
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct bgmac {TYPE_1__* net_dev; int napi; } ;
struct TYPE_6__ {int phydev; } ;


 int FUNC_0 (struct bgmac*) ;
 int FUNC_1 (struct bgmac*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct bgmac *VAR_0)
{
 int VAR_1;

 if (!FUNC_4(VAR_0->net_dev))
  return 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0);

 FUNC_2(&VAR_0->napi);

 FUNC_6(VAR_0->net_dev);
 FUNC_3(VAR_0->net_dev);
 FUNC_7(VAR_0->net_dev);

 FUNC_5(VAR_0->net_dev);

 FUNC_8(VAR_0->net_dev->phydev);

 return 0;
}
