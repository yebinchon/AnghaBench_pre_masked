
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_5__ {int regmap; } ;
struct TYPE_4__ {int regmap; } ;
struct TYPE_6__ {TYPE_2__ ioss_config; TYPE_1__ pss_config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 FUNC_1();
 FUNC_0(VAR_0->pss_config.regmap);
 FUNC_0(VAR_0->ioss_config.regmap);

 return 0;
}
