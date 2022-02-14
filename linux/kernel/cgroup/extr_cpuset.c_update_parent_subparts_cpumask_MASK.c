
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpmasks {struct cpumask* delmask; struct cpumask* addmask; } ;
struct cpuset {int partition_root_state; struct cpumask* subparts_cpus; int nr_subparts_cpus; struct cpumask* effective_cpus; struct cpumask* cpus_allowed; int css; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 struct cpumask* VAR_3 ;
 int FUNC_0 (struct cpumask*,struct cpumask*,struct cpumask*) ;
 int FUNC_1 (struct cpumask*,struct cpumask*,struct cpumask*) ;
 int FUNC_2 (struct cpumask*,struct cpumask*) ;
 scalar_t__ FUNC_3 (struct cpumask*) ;
 int FUNC_4 (struct cpumask*,struct cpumask*) ;
 int FUNC_5 (struct cpumask*,struct cpumask*,struct cpumask*) ;
 int FUNC_6 (struct cpumask*,struct cpumask*) ;
 int FUNC_7 (struct cpumask*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct cpuset*) ;
 struct cpuset* FUNC_10 (struct cpuset*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct cpuset *VAR_8, int VAR_9,
       struct cpumask *VAR_10,
       struct tmpmasks *VAR_11)
{
 struct cpuset *VAR_12 = FUNC_10(VAR_8);
 int VAR_13;
 int VAR_14;
 bool VAR_15 = 0;

 FUNC_11(&VAR_4);






 if (!FUNC_9(VAR_12) ||
    (VAR_10 && FUNC_3(VAR_10)) ||
    (!VAR_10 && FUNC_3(VAR_8->cpus_allowed)))
  return -VAR_1;





 if ((VAR_9 != VAR_7) && FUNC_8(&VAR_8->css))
  return -VAR_0;






 if ((VAR_9 == VAR_6) &&
    (!FUNC_6(VAR_8->cpus_allowed, VAR_12->effective_cpus) ||
      FUNC_4(VAR_8->cpus_allowed, VAR_12->effective_cpus)))
  return -VAR_1;




 VAR_13 = VAR_14 = 0;
 if (VAR_9 == VAR_6) {
  FUNC_2(VAR_11->addmask, VAR_8->cpus_allowed);
  VAR_13 = 1;
 } else if (VAR_9 == VAR_5) {
  VAR_14 = FUNC_0(VAR_11->delmask, VAR_8->cpus_allowed,
           VAR_12->subparts_cpus);
 } else if (VAR_10) {







  FUNC_1(VAR_11->delmask, VAR_8->cpus_allowed, VAR_10);
  VAR_14 = FUNC_0(VAR_11->delmask, VAR_11->delmask,
           VAR_12->subparts_cpus);

  FUNC_0(VAR_11->addmask, VAR_10, VAR_12->effective_cpus);
  VAR_13 = FUNC_1(VAR_11->addmask, VAR_11->addmask,
     VAR_12->subparts_cpus);



  if (VAR_13 &&
      FUNC_4(VAR_12->effective_cpus, VAR_11->addmask)) {
   if (!VAR_14)
    return -VAR_1;





   if (!FUNC_0(VAR_11->addmask, VAR_11->delmask,
      VAR_3))
    return -VAR_1;
   FUNC_2(VAR_11->addmask, VAR_12->effective_cpus);
  }
 } else {
  VAR_13 = FUNC_0(VAR_11->addmask, VAR_8->cpus_allowed,
         VAR_12->effective_cpus);
  VAR_15 = FUNC_4(VAR_11->addmask,
        VAR_12->effective_cpus);
 }

 if (VAR_9 == VAR_7) {
  int VAR_16 = VAR_8->partition_root_state;





  switch (VAR_8->partition_root_state) {
  case 129:
   if (VAR_15)
    VAR_8->partition_root_state = 128;
   break;
  case 128:
   if (!VAR_15)
    VAR_8->partition_root_state = 129;
   break;
  }



  VAR_15 = (VAR_16 == 128);
 }

 if (!VAR_15 && (VAR_8->partition_root_state == 128))
  return 0;

 if (VAR_8->partition_root_state == 128) {



  VAR_13 = 0;
  VAR_14 = FUNC_0(VAR_11->delmask, VAR_8->cpus_allowed,
           VAR_12->subparts_cpus);
 }

 if (!VAR_13 && !VAR_14)
  return 0;






 FUNC_12(&VAR_2);
 if (VAR_13) {
  FUNC_5(VAR_12->subparts_cpus,
      VAR_12->subparts_cpus, VAR_11->addmask);
  FUNC_1(VAR_12->effective_cpus,
          VAR_12->effective_cpus, VAR_11->addmask);
 }
 if (VAR_14) {
  FUNC_1(VAR_12->subparts_cpus,
          VAR_12->subparts_cpus, VAR_11->delmask);



  FUNC_0(VAR_11->delmask, VAR_11->delmask, VAR_3);
  FUNC_5(VAR_12->effective_cpus,
      VAR_12->effective_cpus, VAR_11->delmask);
 }

 VAR_12->nr_subparts_cpus = FUNC_7(VAR_12->subparts_cpus);
 FUNC_13(&VAR_2);

 return VAR_9 == VAR_7;
}
