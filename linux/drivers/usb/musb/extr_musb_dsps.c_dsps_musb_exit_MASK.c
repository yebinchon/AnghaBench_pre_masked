
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int phy; int dev_timer; struct device* controller; } ;
struct dsps_glue {int dbgfs_root; } ;
struct device {int parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct dsps_glue* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct musb *VAR_0)
{
 struct device *VAR_1 = VAR_0->controller;
 struct dsps_glue *VAR_2 = FUNC_2(VAR_1->parent);

 FUNC_1(&VAR_0->dev_timer);
 FUNC_4(VAR_0->phy);
 FUNC_3(VAR_0->phy);
 FUNC_0(VAR_2->dbgfs_root);

 return 0;
}
