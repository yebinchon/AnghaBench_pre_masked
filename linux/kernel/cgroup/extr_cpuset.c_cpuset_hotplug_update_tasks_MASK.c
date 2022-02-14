
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpmasks {int dummy; } ;
struct cpuset {scalar_t__ attach_in_progress; scalar_t__ partition_root_state; int effective_mems; int effective_cpus; int subparts_cpus; scalar_t__ nr_subparts_cpus; int mems_allowed; } ;
typedef int nodemask_t ;
typedef int cpumask_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct cpuset*,struct cpuset*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (struct cpuset*,int *,int *,int,int) ;
 int FUNC_8 (struct cpuset*,int *,int *,int,int) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (struct cpuset*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 struct cpuset* FUNC_13 (struct cpuset*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct cpuset*,int ,int *,struct tmpmasks*) ;
 int FUNC_17 (int ,int) ;

__attribute__((used)) static void FUNC_18(struct cpuset *VAR_5, struct tmpmasks *VAR_6)
{
 static cpumask_t VAR_7;
 static nodemask_t VAR_8;
 bool VAR_9;
 bool VAR_10;
 struct cpuset *VAR_11;
retry:
 FUNC_17(VAR_1, VAR_5->attach_in_progress == 0);

 FUNC_14(&VAR_2);





 if (VAR_5->attach_in_progress) {
  FUNC_15(&VAR_2);
  goto retry;
 }

 VAR_11 = FUNC_13(VAR_5);
 FUNC_0(&VAR_7, VAR_5, VAR_11);
 FUNC_11(VAR_8, VAR_5->mems_allowed, VAR_11->effective_mems);

 if (VAR_5->nr_subparts_cpus)




  FUNC_1(&VAR_7, &VAR_7, VAR_5->subparts_cpus);

 if (!VAR_6 || !VAR_5->partition_root_state)
  goto update_tasks;






 if (FUNC_10(VAR_5) && (FUNC_3(&VAR_7) ||
    (VAR_11->partition_root_state == VAR_0))) {
  if (VAR_5->nr_subparts_cpus) {
   VAR_5->nr_subparts_cpus = 0;
   FUNC_2(VAR_5->subparts_cpus);
   FUNC_0(&VAR_7, VAR_5, VAR_11);
  }







  if ((VAR_11->partition_root_state == VAR_0) ||
       FUNC_3(&VAR_7)) {
   FUNC_16(VAR_5, VAR_3,
             ((void*)0), VAR_6);
   VAR_5->partition_root_state = VAR_0;
  }
  FUNC_6();
 }






 if (FUNC_10(VAR_11) &&
    ((VAR_5->partition_root_state == VAR_0) ||
     !FUNC_5(&VAR_7, VAR_11->subparts_cpus)) &&
      FUNC_16(VAR_5, VAR_4, ((void*)0), VAR_6))
  FUNC_6();

update_tasks:
 VAR_9 = !FUNC_4(&VAR_7, VAR_5->effective_cpus);
 VAR_10 = !FUNC_12(VAR_8, VAR_5->effective_mems);

 if (FUNC_9())
  FUNC_7(VAR_5, &VAR_7, &VAR_8,
         VAR_9, VAR_10);
 else
  FUNC_8(VAR_5, &VAR_7, &VAR_8,
         VAR_9, VAR_10);

 FUNC_15(&VAR_2);
}
