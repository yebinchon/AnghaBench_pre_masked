
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csiphy_device {int cfg; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* lanes_disable ) (struct csiphy_device*,int *) ;} ;


 int FUNC_0 (struct csiphy_device*,int *) ;

__attribute__((used)) static void FUNC_1(struct csiphy_device *VAR_0)
{
 VAR_0->ops->lanes_disable(VAR_0, &VAR_0->cfg);
}
