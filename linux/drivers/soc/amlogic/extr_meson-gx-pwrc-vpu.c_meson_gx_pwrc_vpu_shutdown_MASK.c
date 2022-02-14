
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int (* power_off ) (TYPE_1__*) ;} ;
struct meson_gx_pwrc_vpu {TYPE_1__ genpd; } ;


 int FUNC_0 (struct meson_gx_pwrc_vpu*) ;
 struct meson_gx_pwrc_vpu* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0)
{
 struct meson_gx_pwrc_vpu *VAR_1 = FUNC_1(VAR_0);
 bool VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  VAR_1->genpd.power_off(&VAR_1->genpd);
}
