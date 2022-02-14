
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int nr_populated_csets; int nr_populated_threaded_children; int nr_populated_domain_children; int events_file; } ;


 int FUNC_0 (int ,struct cgroup*,int) ;
 int FUNC_1 (struct cgroup*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cgroup*) ;
 scalar_t__ FUNC_4 (struct cgroup*) ;
 struct cgroup* FUNC_5 (struct cgroup*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct cgroup *VAR_2, bool VAR_3)
{
 struct cgroup *VAR_4 = ((void*)0);
 int VAR_5 = VAR_3 ? 1 : -1;

 FUNC_6(&VAR_0);

 do {
  bool VAR_6 = FUNC_3(VAR_2);

  if (!VAR_4) {
   VAR_2->nr_populated_csets += VAR_5;
  } else {
   if (FUNC_4(VAR_4))
    VAR_2->nr_populated_threaded_children += VAR_5;
   else
    VAR_2->nr_populated_domain_children += VAR_5;
  }

  if (VAR_6 == FUNC_3(VAR_2))
   break;

  FUNC_1(VAR_2);
  FUNC_0(VAR_1, VAR_2,
      FUNC_3(VAR_2));
  FUNC_2(&VAR_2->events_file);

  VAR_4 = VAR_2;
  VAR_2 = FUNC_5(VAR_2);
 } while (VAR_2);
}
