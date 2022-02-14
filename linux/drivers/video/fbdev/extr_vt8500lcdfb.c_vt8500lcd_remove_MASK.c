
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {TYPE_2__ cmap; } ;
struct vt8500lcd_info {int regbase; int palette_phys; int palette_cpu; int palette_size; TYPE_1__ fb; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,struct vt8500lcd_info*) ;
 int FUNC_3 (int ) ;
 struct vt8500lcd_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct vt8500lcd_info *VAR_2 = FUNC_4(VAR_1);
 struct resource *VAR_3;
 int VAR_4;

 FUNC_9(&VAR_2->fb);

 FUNC_10(0, VAR_2->regbase);

 if (VAR_2->fb.cmap.len)
  FUNC_1(&VAR_2->fb.cmap);

 VAR_4 = FUNC_5(VAR_1, 0);
 FUNC_2(VAR_4, VAR_2);

 FUNC_0(&VAR_1->dev, VAR_2->palette_size,
     VAR_2->palette_cpu, VAR_2->palette_phys);

 FUNC_3(VAR_2->regbase);

 VAR_3 = FUNC_6(VAR_1, VAR_0, 0);
 FUNC_7(VAR_3->start, FUNC_8(VAR_3));

 return 0;
}
