
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cgroup {int dummy; } ;
struct TYPE_7__ {int mems_allowed; } ;
struct TYPE_5__ {struct cgroup* cgroup; } ;
struct TYPE_6__ {TYPE_1__ css; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct cgroup*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;

void FUNC_6(void)
{
 struct cgroup *VAR_1;

 FUNC_3();

 VAR_1 = FUNC_5(VAR_0)->css.cgroup;
 FUNC_1(",cpuset=");
 FUNC_2(VAR_1);
 FUNC_1(",mems_allowed=%*pbl",
  FUNC_0(&VAR_0->mems_allowed));

 FUNC_4();
}
