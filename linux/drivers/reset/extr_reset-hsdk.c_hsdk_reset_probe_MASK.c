
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int of_reset_n_cells; int nr_resets; int of_node; int * ops; int owner; } ;
struct hsdk_rst {TYPE_1__ rcdev; int lock; void* regs_rst; void* regs_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 void* FUNC_2 (TYPE_2__*,struct resource*) ;
 struct hsdk_rst* FUNC_3 (TYPE_2__*,int,int ) ;
 int VAR_5 ;
 struct resource* FUNC_4 (struct platform_device*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct hsdk_rst *VAR_7;
 struct resource *VAR_8;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_6, VAR_3, 0);
 VAR_7->regs_ctl = FUNC_2(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->regs_ctl))
  return FUNC_1(VAR_7->regs_ctl);

 VAR_8 = FUNC_4(VAR_6, VAR_3, 1);
 VAR_7->regs_rst = FUNC_2(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->regs_rst))
  return FUNC_1(VAR_7->regs_rst);

 FUNC_6(&VAR_7->lock);

 VAR_7->rcdev.owner = VAR_4;
 VAR_7->rcdev.ops = &VAR_5;
 VAR_7->rcdev.of_node = VAR_6->dev.of_node;
 VAR_7->rcdev.nr_resets = VAR_2;
 VAR_7->rcdev.of_reset_n_cells = 1;

 return FUNC_5(&VAR_7->rcdev);
}
