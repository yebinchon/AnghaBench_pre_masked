
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsurf100_ax_plat_data {scalar_t__ base_regs; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 struct xsurf100_ax_plat_data* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct xsurf100_ax_plat_data *VAR_2 = FUNC_0(&VAR_1->dev);

 return (FUNC_1(VAR_2->base_regs + VAR_0) & 0xaaaa) != 0;
}
