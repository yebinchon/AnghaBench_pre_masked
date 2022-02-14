
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct omap_overlay {int id; int kobj; } ;


 int FUNC_0 (int *,int *,int *,char*,int ) ;
 int VAR_0 ;

int FUNC_1(struct omap_overlay *VAR_1,
  struct platform_device *VAR_2)
{
 return FUNC_0(&VAR_1->kobj, &VAR_0,
   &VAR_2->dev.kobj, "overlay%d", VAR_1->id);
}
