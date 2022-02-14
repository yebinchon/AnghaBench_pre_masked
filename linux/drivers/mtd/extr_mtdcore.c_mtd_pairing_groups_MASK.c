
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {TYPE_1__* pairing; } ;
struct TYPE_2__ {int ngroups; } ;



int FUNC_0(struct mtd_info *VAR_0)
{
 if (!VAR_0->pairing || !VAR_0->pairing->ngroups)
  return 1;

 return VAR_0->pairing->ngroups;
}
