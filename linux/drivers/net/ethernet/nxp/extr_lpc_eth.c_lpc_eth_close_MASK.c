
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdata_local {int clk; int lock; int net_base; int napi; TYPE_1__* pdev; } ;
struct net_device {scalar_t__ phydev; int name; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct netdata_local*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 struct netdata_local* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct netdata_local*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_0)
{
 unsigned long VAR_1;
 struct netdata_local *VAR_2 = FUNC_6(VAR_0);

 if (FUNC_8(VAR_2))
  FUNC_4(&VAR_2->pdev->dev, "shutting down %s\n", VAR_0->name);

 FUNC_5(&VAR_2->napi);
 FUNC_9(VAR_0);

 if (VAR_0->phydev)
  FUNC_10(VAR_0->phydev);

 FUNC_11(&VAR_2->lock, VAR_1);
 FUNC_2(VAR_2);
 FUNC_7(VAR_0);
 FUNC_13(0, FUNC_0(VAR_2->net_base));
 FUNC_13(0, FUNC_1(VAR_2->net_base));
 FUNC_12(&VAR_2->lock, VAR_1);

 FUNC_3(VAR_2->clk);

 return 0;
}
