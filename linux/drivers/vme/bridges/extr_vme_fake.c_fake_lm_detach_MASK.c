
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vme_lm_resource {int monitors; int mtx; TYPE_1__* parent; } ;
struct fake_driver {scalar_t__ lm_enabled; int ** lm_callback; int ** lm_data; } ;
struct TYPE_2__ {struct fake_driver* driver_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vme_lm_resource *VAR_0, int VAR_1)
{
 u32 VAR_2;
 int VAR_3;
 struct fake_driver *VAR_4;

 VAR_4 = VAR_0->parent->driver_priv;

 FUNC_0(&VAR_0->mtx);


 VAR_4->lm_callback[VAR_1] = ((void*)0);
 VAR_4->lm_data[VAR_1] = ((void*)0);


 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->monitors; VAR_3++) {
  if (VAR_4->lm_callback[VAR_3])
   VAR_2 = 1;
 }

 if (VAR_2 == 0)
  VAR_4->lm_enabled = 0;

 FUNC_1(&VAR_0->mtx);

 return 0;
}
