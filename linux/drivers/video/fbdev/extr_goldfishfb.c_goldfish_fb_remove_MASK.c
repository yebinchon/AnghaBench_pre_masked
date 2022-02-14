
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_4__ {int smem_start; } ;
struct TYPE_5__ {int xres_virtual; int yres_virtual; } ;
struct TYPE_6__ {TYPE_1__ fix; scalar_t__ screen_base; TYPE_2__ var; } ;
struct goldfish_fb {int reg_base; TYPE_3__ fb; int irq; } ;


 int FUNC_0 (int *,size_t,void*,int ) ;
 int FUNC_1 (int ,struct goldfish_fb*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct goldfish_fb*) ;
 struct goldfish_fb* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 size_t VAR_1;
 struct goldfish_fb *VAR_2 = FUNC_4(VAR_0);

 VAR_1 = VAR_2->fb.var.xres_virtual * VAR_2->fb.var.yres_virtual * 2;
 FUNC_5(&VAR_2->fb);
 FUNC_1(VAR_2->irq, VAR_2);

 FUNC_0(&VAR_0->dev, VAR_1, (void *)VAR_2->fb.screen_base,
      VAR_2->fb.fix.smem_start);
 FUNC_2(VAR_2->reg_base);
 FUNC_3(VAR_2);
 return 0;
}
