
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_6__ {int nr_resets; int of_node; int * ops; int owner; } ;
struct meson_reset {TYPE_2__ rcdev; int lock; int reg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,struct resource*) ;
 struct meson_reset* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int VAR_6 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct meson_reset*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct meson_reset *VAR_8;
 struct resource *VAR_9;

 VAR_8 = FUNC_3(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_7, VAR_3, 0);
 VAR_8->reg_base = FUNC_2(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_8->reg_base))
  return FUNC_1(VAR_8->reg_base);

 FUNC_6(VAR_7, VAR_8);

 FUNC_7(&VAR_8->lock);

 VAR_8->rcdev.owner = VAR_5;
 VAR_8->rcdev.nr_resets = VAR_4 * VAR_0;
 VAR_8->rcdev.ops = &VAR_6;
 VAR_8->rcdev.of_node = VAR_7->dev.of_node;

 return FUNC_4(&VAR_7->dev, &VAR_8->rcdev);
}
