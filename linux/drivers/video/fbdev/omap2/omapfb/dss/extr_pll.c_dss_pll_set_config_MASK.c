
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_pll_clock_info {int dummy; } ;
struct dss_pll {struct dss_pll_clock_info cinfo; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_config ) (struct dss_pll*,struct dss_pll_clock_info const*) ;} ;


 int FUNC_0 (struct dss_pll*,struct dss_pll_clock_info const*) ;

int FUNC_1(struct dss_pll *VAR_0, const struct dss_pll_clock_info *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->ops->set_config(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_0->cinfo = *VAR_1;

 return 0;
}
