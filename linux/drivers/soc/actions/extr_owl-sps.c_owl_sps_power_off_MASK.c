
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct owl_sps_domain {TYPE_2__* info; TYPE_1__* sps; } ;
struct generic_pm_domain {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct owl_sps_domain*,int) ;
 struct owl_sps_domain* FUNC_2 (struct generic_pm_domain*) ;

__attribute__((used)) static int FUNC_3(struct generic_pm_domain *VAR_0)
{
 struct owl_sps_domain *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->sps->dev, "%s power off", VAR_1->info->name);

 return FUNC_1(VAR_1, 0);
}
