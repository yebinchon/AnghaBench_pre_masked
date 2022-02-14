
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hw_disabled; } ;
struct TYPE_8__ {TYPE_1__ prop; } ;
struct TYPE_7__ {TYPE_4__ bus; int dev; } ;
struct sdw_intel {TYPE_3__ cdns; TYPE_2__* res; } ;
struct platform_device {int dummy; } ;
struct TYPE_6__ {int irq; } ;


 int FUNC_0 (int ,struct sdw_intel*) ;
 int FUNC_1 (struct sdw_intel*) ;
 struct sdw_intel* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct sdw_intel *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->cdns.bus.prop.hw_disabled) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->res->irq, VAR_1);
  FUNC_4(VAR_1->cdns.dev);
 }
 FUNC_3(&VAR_1->cdns.bus);

 return 0;
}
