
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vexpress_syscfg {int base; int funcs; TYPE_1__* dev; } ;
struct resource {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct vexpress_syscfg* FUNC_5 (TYPE_1__*,int,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 struct device* FUNC_7 (int ,int *,struct vexpress_syscfg*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct vexpress_syscfg *VAR_5;
 struct resource *VAR_6;
 struct device *VAR_7;

 VAR_5 = FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->dev = &VAR_4->dev;
 FUNC_0(&VAR_5->funcs);

 VAR_6 = FUNC_6(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_4(&VAR_4->dev, VAR_6);
 if (FUNC_1(VAR_5->base))
  return FUNC_2(VAR_5->base);


 VAR_7 = FUNC_7(VAR_4->dev.parent,
   &VAR_3, VAR_5);

 return FUNC_3(VAR_7);
}
