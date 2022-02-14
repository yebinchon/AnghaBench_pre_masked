
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
struct axs10x_rst {TYPE_2__ rcdev; int lock; int regs_rst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,struct resource*) ;
 struct axs10x_rst* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct axs10x_rst *VAR_7;
 struct resource *VAR_8;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_6, VAR_3, 0);
 VAR_7->regs_rst = FUNC_2(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->regs_rst))
  return FUNC_1(VAR_7->regs_rst);

 FUNC_6(&VAR_7->lock);

 VAR_7->rcdev.owner = VAR_4;
 VAR_7->rcdev.ops = &VAR_5;
 VAR_7->rcdev.of_node = VAR_6->dev.of_node;
 VAR_7->rcdev.nr_resets = VAR_0;

 return FUNC_4(&VAR_6->dev, &VAR_7->rcdev);
}
