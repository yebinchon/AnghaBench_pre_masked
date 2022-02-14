
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {int (* get_power ) (struct meson_ee_pwrc_domain*) ;} ;
struct meson_ee_pwrc_domain {int base; TYPE_2__ desc; } ;
struct TYPE_3__ {int num_domains; } ;
struct meson_ee_pwrc {struct meson_ee_pwrc_domain* domains; TYPE_1__ xlate; } ;


 int FUNC_0 (int *) ;
 struct meson_ee_pwrc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct meson_ee_pwrc_domain*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0)
{
 struct meson_ee_pwrc *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0 ; VAR_2 < VAR_1->xlate.num_domains ; ++VAR_2) {
  struct meson_ee_pwrc_domain *VAR_3 = &VAR_1->domains[VAR_2];

  if (VAR_3->desc.get_power && !VAR_3->desc.get_power(VAR_3))
   FUNC_0(&VAR_3->base);
 }
}
