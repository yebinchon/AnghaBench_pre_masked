
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct rproc {struct omap_rproc* priv; TYPE_1__ dev; } ;
struct TYPE_4__ {struct omap_rproc_pdata* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct omap_rproc_pdata {int (* device_shutdown ) (struct platform_device*) ;} ;
struct omap_rproc {int mbox; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct rproc *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev.parent;
 struct platform_device *VAR_2 = FUNC_2(VAR_1);
 struct omap_rproc_pdata *VAR_3 = VAR_2->dev.platform_data;
 struct omap_rproc *VAR_4 = VAR_0->priv;
 int VAR_5;

 VAR_5 = VAR_3->device_shutdown(VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_4->mbox);

 return 0;
}
