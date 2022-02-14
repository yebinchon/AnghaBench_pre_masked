
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns_dphy_cfg {int dummy; } ;
struct cdns_dphy {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_pll_cfg ) (struct cdns_dphy*,struct cdns_dphy_cfg const*) ;} ;


 int FUNC_0 (struct cdns_dphy*,struct cdns_dphy_cfg const*) ;

__attribute__((used)) static void FUNC_1(struct cdns_dphy *VAR_0,
      const struct cdns_dphy_cfg *VAR_1)
{
 if (VAR_0->ops->set_pll_cfg)
  VAR_0->ops->set_pll_cfg(VAR_0, VAR_1);
}
