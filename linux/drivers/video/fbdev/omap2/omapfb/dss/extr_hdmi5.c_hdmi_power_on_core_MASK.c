
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int core_enabled; int vdda_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct omap_dss_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1.vdda_reg);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3)
  goto err_runtime_get;


 FUNC_0(VAR_0);

 VAR_1.core_enabled = 1;

 return 0;

err_runtime_get:
 FUNC_2(VAR_1.vdda_reg);

 return VAR_3;
}
