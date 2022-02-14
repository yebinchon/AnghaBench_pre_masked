
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int flags; } ;
struct TYPE_5__ {TYPE_1__* nsproxy; } ;
struct TYPE_4__ {int * cgroup_ns; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_5)
{
 if (VAR_3->nsproxy->cgroup_ns == &VAR_4) {
  if (VAR_5 & VAR_1)
   VAR_2.flags |= VAR_1;
  else
   VAR_2.flags &= ~VAR_1;

  if (VAR_5 & VAR_0)
   VAR_2.flags |= VAR_0;
  else
   VAR_2.flags &= ~VAR_0;
 }
}
