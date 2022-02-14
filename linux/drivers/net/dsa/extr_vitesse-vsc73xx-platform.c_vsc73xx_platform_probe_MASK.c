
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ops; struct vsc73xx_platform* priv; struct device* dev; } ;
struct vsc73xx_platform {TYPE_1__ vsc; int base_addr; struct platform_device* pdev; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct resource*) ;
 struct vsc73xx_platform* FUNC_3 (struct device*,int,int ) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct platform_device*,struct vsc73xx_platform*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct vsc73xx_platform *VAR_7;
 struct resource *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 FUNC_5(VAR_5, VAR_7);
 VAR_7->pdev = VAR_5;
 VAR_7->vsc.dev = VAR_6;
 VAR_7->vsc.priv = VAR_7;
 VAR_7->vsc.ops = &VAR_4;


 VAR_8 = FUNC_4(VAR_5, VAR_3, 0);
 if (!VAR_8) {
  FUNC_1(&VAR_5->dev, "cannot obtain I/O memory space\n");
  VAR_9 = -VAR_1;
  return VAR_9;
 }

 VAR_7->base_addr = FUNC_2(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_7->base_addr)) {
  FUNC_1(&VAR_5->dev, "cannot request I/O memory space\n");
  VAR_9 = -VAR_1;
  return VAR_9;
 }

 return FUNC_6(&VAR_7->vsc);
}
