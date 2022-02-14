
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_frozen_descendants; } ;
struct cgroup {scalar_t__ nr_descendants; int events_file; int flags; TYPE_1__ freezer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cgroup*,int) ;
 int FUNC_1 (int *) ;
 struct cgroup* FUNC_2 (struct cgroup*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct cgroup *VAR_3, bool VAR_4)
{
 int VAR_5 = 1;







 while ((VAR_3 = FUNC_2(VAR_3))) {
  if (VAR_4) {
   VAR_3->freezer.nr_frozen_descendants += VAR_5;
   if (!FUNC_5(VAR_1, &VAR_3->flags) &&
       FUNC_5(VAR_0, &VAR_3->flags) &&
       VAR_3->freezer.nr_frozen_descendants ==
       VAR_3->nr_descendants) {
    FUNC_4(VAR_1, &VAR_3->flags);
    FUNC_1(&VAR_3->events_file);
    FUNC_0(VAR_2, VAR_3, 1);
    VAR_5++;
   }
  } else {
   VAR_3->freezer.nr_frozen_descendants -= VAR_5;
   if (FUNC_5(VAR_1, &VAR_3->flags)) {
    FUNC_3(VAR_1, &VAR_3->flags);
    FUNC_1(&VAR_3->events_file);
    FUNC_0(VAR_2, VAR_3, 0);
    VAR_5++;
   }
  }
 }
}
