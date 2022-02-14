
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ops; } ;
struct cgroup_namespace {TYPE_1__ ns; int count; } ;


 int VAR_0 ;
 struct cgroup_namespace* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cgroup_namespace*) ;
 struct cgroup_namespace* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static struct cgroup_namespace *FUNC_5(void)
{
 struct cgroup_namespace *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(sizeof(struct cgroup_namespace), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 VAR_4 = FUNC_3(&VAR_3->ns);
 if (VAR_4) {
  FUNC_1(VAR_3);
  return FUNC_0(VAR_4);
 }
 FUNC_4(&VAR_3->count, 1);
 VAR_3->ns.ops = &VAR_2;
 return VAR_3;
}
