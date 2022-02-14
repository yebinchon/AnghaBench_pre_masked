
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct list_head {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int bus; } ;
struct cdns_pcie_rc {TYPE_1__ pcie; struct resource* bus_range; } ;


 int FUNC_0 (struct cdns_pcie_rc*) ;
 int FUNC_1 (struct cdns_pcie_rc*) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct device*,struct list_head*,struct resource**) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
          struct list_head *VAR_1,
          struct cdns_pcie_rc *VAR_2)
{
 struct resource *VAR_3 = ((void*)0);
 int VAR_4;


 VAR_4 = FUNC_3(VAR_0, VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_2->bus_range = VAR_3;
 VAR_2->pcie.bus = VAR_3->start;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  goto err_out;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  goto err_out;

 return 0;

 err_out:
 FUNC_2(VAR_1);
 return VAR_4;
}
