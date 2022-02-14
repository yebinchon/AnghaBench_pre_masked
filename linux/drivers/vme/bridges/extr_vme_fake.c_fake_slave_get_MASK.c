
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vme_slave_resource {unsigned int number; int mtx; TYPE_1__* parent; } ;
struct fake_driver {TYPE_2__* slaves; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int enabled; unsigned long long vme_base; unsigned long long size; int cycle; int aspace; int buf_base; } ;
struct TYPE_3__ {struct fake_driver* driver_priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vme_slave_resource *VAR_0, int *VAR_1,
  unsigned long long *VAR_2, unsigned long long *VAR_3,
  dma_addr_t *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7;
 struct fake_driver *VAR_8;

 VAR_8 = VAR_0->parent->driver_priv;

 VAR_7 = VAR_0->number;

 FUNC_1(&VAR_0->mtx);

 *VAR_1 = VAR_8->slaves[VAR_7].enabled;
 *VAR_2 = VAR_8->slaves[VAR_7].vme_base;
 *VAR_3 = VAR_8->slaves[VAR_7].size;
 *VAR_4 = FUNC_0(VAR_8->slaves[VAR_7].buf_base);
 *VAR_5 = VAR_8->slaves[VAR_7].aspace;
 *VAR_6 = VAR_8->slaves[VAR_7].cycle;

 FUNC_2(&VAR_0->mtx);

 return 0;
}
