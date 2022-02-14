
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int cpus_allowed; int flags; } ;
typedef int cpuset_flagbits_t ;


 int VAR_0 ;
 struct cpuset* FUNC_0 (struct cpuset*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cpuset*) ;
 scalar_t__ FUNC_4 (struct cpuset*) ;
 scalar_t__ FUNC_5 (struct cpuset*) ;
 scalar_t__ FUNC_6 (struct cpuset*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct cpuset*) ;
 int FUNC_12 (struct cpuset*,struct cpuset*) ;

__attribute__((used)) static int FUNC_13(cpuset_flagbits_t VAR_2, struct cpuset *VAR_3,
         int VAR_4)
{
 struct cpuset *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_4)
  FUNC_8(VAR_2, &VAR_5->flags);
 else
  FUNC_1(VAR_2, &VAR_5->flags);

 VAR_8 = FUNC_12(VAR_3, VAR_5);
 if (VAR_8 < 0)
  goto out;

 VAR_6 = (FUNC_4(VAR_3) !=
    FUNC_4(VAR_5));

 VAR_7 = ((FUNC_6(VAR_3) != FUNC_6(VAR_5))
   || (FUNC_5(VAR_3) != FUNC_5(VAR_5)));

 FUNC_9(&VAR_1);
 VAR_3->flags = VAR_5->flags;
 FUNC_10(&VAR_1);

 if (!FUNC_2(VAR_5->cpus_allowed) && VAR_6)
  FUNC_7();

 if (VAR_7)
  FUNC_11(VAR_3);
out:
 FUNC_3(VAR_5);
 return VAR_8;
}
