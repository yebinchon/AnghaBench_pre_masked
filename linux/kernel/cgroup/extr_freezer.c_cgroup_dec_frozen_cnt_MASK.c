
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_frozen_tasks; } ;
struct cgroup {TYPE_1__ freezer; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct cgroup *VAR_0)
{
 VAR_0->freezer.nr_frozen_tasks--;
 FUNC_0(VAR_0->freezer.nr_frozen_tasks < 0);
}
