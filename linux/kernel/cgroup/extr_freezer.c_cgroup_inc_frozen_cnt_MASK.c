
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_frozen_tasks; } ;
struct cgroup {TYPE_1__ freezer; } ;



__attribute__((used)) static void FUNC_0(struct cgroup *VAR_0)
{
 VAR_0->freezer.nr_frozen_tasks++;
}
