
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdata_local {int napi; int clk; TYPE_1__* pdev; } ;
struct net_device {int phydev; int name; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct netdata_local*) ;
 int FUNC_1 (struct netdata_local*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 struct netdata_local* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct netdata_local*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_0)
{
 struct netdata_local *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 if (FUNC_6(VAR_1))
  FUNC_3(&VAR_1->pdev->dev, "enabling %s\n", VAR_0->name);

 VAR_2 = FUNC_2(VAR_1->clk);
 if (VAR_2)
  return VAR_2;


 FUNC_8(VAR_0->phydev);


 FUNC_1(VAR_1);
 FUNC_0(VAR_1);


 FUNC_9(VAR_0->phydev);
 FUNC_7(VAR_0);
 FUNC_4(&VAR_1->napi);

 return 0;
}
