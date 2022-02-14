
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpmasks {int new_cpus; int delmask; int addmask; } ;
struct cpuset {scalar_t__ child_ecpus_count; scalar_t__ partition_root_state; int subparts_cpus; scalar_t__ nr_subparts_cpus; int cpus_allowed; int effective_cpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 struct cpuset* FUNC_8 (struct cpuset*) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct cpuset VAR_4 ;
 int FUNC_11 (struct cpuset*,struct tmpmasks*) ;
 scalar_t__ FUNC_12 (struct cpuset*,int ,int ,struct tmpmasks*) ;
 int FUNC_13 (struct cpuset*,struct cpuset*,struct tmpmasks*) ;
 int FUNC_14 (struct cpuset*,struct cpuset*) ;

__attribute__((used)) static int FUNC_15(struct cpuset *VAR_5, struct cpuset *VAR_6,
     const char *VAR_7)
{
 int VAR_8;
 struct tmpmasks VAR_9;


 if (VAR_5 == &VAR_4)
  return -VAR_0;







 if (!*VAR_7) {
  FUNC_2(VAR_6->cpus_allowed);
 } else {
  VAR_8 = FUNC_0(VAR_7, VAR_6->cpus_allowed);
  if (VAR_8 < 0)
   return VAR_8;

  if (!FUNC_6(VAR_6->cpus_allowed,
        VAR_4.cpus_allowed))
   return -VAR_1;
 }


 if (FUNC_5(VAR_5->cpus_allowed, VAR_6->cpus_allowed))
  return 0;

 VAR_8 = FUNC_14(VAR_5, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_5->partition_root_state) {

  if (FUNC_4(VAR_6->cpus_allowed))
   return -VAR_1;
  if (FUNC_12(VAR_5, VAR_3,
     VAR_6->cpus_allowed, &VAR_9) < 0)
   return -VAR_1;
 }

 FUNC_9(&VAR_2);
 FUNC_3(VAR_5->cpus_allowed, VAR_6->cpus_allowed);




 if (VAR_5->nr_subparts_cpus) {
  FUNC_1(VAR_5->subparts_cpus, VAR_5->subparts_cpus,
          VAR_5->cpus_allowed);
  VAR_5->nr_subparts_cpus = FUNC_7(VAR_5->subparts_cpus);
 }
 FUNC_10(&VAR_2);

 FUNC_11(VAR_5, &VAR_9);

 if (VAR_5->partition_root_state) {
  struct cpuset *VAR_10 = FUNC_8(VAR_5);





  if (VAR_10->child_ecpus_count)
   FUNC_13(VAR_10, VAR_5, &VAR_9);
 }
 return 0;
}
