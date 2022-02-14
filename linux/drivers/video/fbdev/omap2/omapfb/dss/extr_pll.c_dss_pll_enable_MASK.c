
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_pll {int clkin; scalar_t__ regulator; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable ) (struct dss_pll*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dss_pll*) ;

int FUNC_5(struct dss_pll *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->clkin);
 if (VAR_1)
  return VAR_1;

 if (VAR_0->regulator) {
  VAR_1 = FUNC_3(VAR_0->regulator);
  if (VAR_1)
   goto err_reg;
 }

 VAR_1 = VAR_0->ops->enable(VAR_0);
 if (VAR_1)
  goto err_enable;

 return 0;

err_enable:
 if (VAR_0->regulator)
  FUNC_2(VAR_0->regulator);
err_reg:
 FUNC_0(VAR_0->clkin);
 return VAR_1;
}
