
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_2__* top_pd; } ;
struct meson_ee_pwrc_domain {TYPE_3__ desc; TYPE_1__* pwrc; } ;
struct TYPE_5__ {int sleep_mask; int sleep_reg; } ;
struct TYPE_4__ {int regmap_ao; } ;


 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static bool FUNC_1(struct meson_ee_pwrc_domain *VAR_0)
{
 u32 VAR_1;

 FUNC_0(VAR_0->pwrc->regmap_ao,
      VAR_0->desc.top_pd->sleep_reg, &VAR_1);

 return (VAR_1 & VAR_0->desc.top_pd->sleep_mask);
}
