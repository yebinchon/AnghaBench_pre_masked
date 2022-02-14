
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; } ;
struct zorro_dev {TYPE_1__ resource; } ;
struct xsurf100_ax_plat_data {int data_area; int base_regs; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct xsurf100_ax_plat_data* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (scalar_t__,int) ;
 struct platform_device* FUNC_4 (struct zorro_dev*) ;

__attribute__((used)) static void FUNC_5(struct zorro_dev *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_4(VAR_2);
 struct xsurf100_ax_plat_data *VAR_4 = FUNC_0(&VAR_3->dev);

 FUNC_2(VAR_3);

 FUNC_1(VAR_4->base_regs);
 FUNC_3(VAR_2->resource.start, 0x100);
 FUNC_1(VAR_4->data_area);
 FUNC_3(VAR_2->resource.start + VAR_0,
      VAR_1);
}
