
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vme_master_resource {unsigned int number; TYPE_1__* parent; } ;
struct fake_driver {TYPE_2__* masters; } ;
struct TYPE_4__ {int enabled; unsigned long long vme_base; unsigned long long size; int dwidth; int cycle; int aspace; } ;
struct TYPE_3__ {struct fake_driver* driver_priv; } ;



__attribute__((used)) static int FUNC_0(struct vme_master_resource *VAR_0, int *VAR_1,
  unsigned long long *VAR_2, unsigned long long *VAR_3,
  u32 *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7;
 struct fake_driver *VAR_8;

 VAR_8 = VAR_0->parent->driver_priv;

 VAR_7 = VAR_0->number;

 *VAR_1 = VAR_8->masters[VAR_7].enabled;
 *VAR_2 = VAR_8->masters[VAR_7].vme_base;
 *VAR_3 = VAR_8->masters[VAR_7].size;
 *VAR_4 = VAR_8->masters[VAR_7].aspace;
 *VAR_5 = VAR_8->masters[VAR_7].cycle;
 *VAR_6 = VAR_8->masters[VAR_7].dwidth;

 return 0;
}
