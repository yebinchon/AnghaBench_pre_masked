
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {scalar_t__ nr_descendants; scalar_t__ max_descendants; int max_depth; } ;


 int VAR_0 ;
 struct cgroup* FUNC_0 (struct cgroup*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct cgroup *VAR_1)
{
 struct cgroup *VAR_2;
 int VAR_3 = 0;
 int VAR_4 = 1;

 FUNC_1(&VAR_0);

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = FUNC_0(VAR_2)) {
  if (VAR_2->nr_descendants >= VAR_2->max_descendants)
   goto fail;

  if (VAR_4 > VAR_2->max_depth)
   goto fail;

  VAR_4++;
 }

 VAR_3 = 1;
fail:
 return VAR_3;
}
