
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_lm_resource {int mtx; TYPE_1__* parent; } ;
struct fake_driver {unsigned long long lm_base; int lm_enabled; int lm_cycle; int lm_aspace; } ;
struct TYPE_2__ {struct fake_driver* driver_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vme_lm_resource *VAR_0,
  unsigned long long *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 struct fake_driver *VAR_4;

 VAR_4 = VAR_0->parent->driver_priv;

 FUNC_0(&VAR_0->mtx);

 *VAR_1 = VAR_4->lm_base;
 *VAR_2 = VAR_4->lm_aspace;
 *VAR_3 = VAR_4->lm_cycle;

 FUNC_1(&VAR_0->mtx);

 return VAR_4->lm_enabled;
}
