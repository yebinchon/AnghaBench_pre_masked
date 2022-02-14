
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns_dphy {TYPE_1__* ops; int psm_clk; } ;
struct TYPE_2__ {int (* set_psm_div ) (struct cdns_dphy*,unsigned long) ;} ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct cdns_dphy*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct cdns_dphy *VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_1->psm_clk);
 unsigned long VAR_3;

 if (!VAR_2 || VAR_2 > 100000000)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2, 1000000);
 if (VAR_1->ops->set_psm_div)
  VAR_1->ops->set_psm_div(VAR_1, VAR_3);

 return 0;
}
