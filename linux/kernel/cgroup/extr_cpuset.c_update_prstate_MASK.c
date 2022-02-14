
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpmasks {int dummy; } ;
struct cpuset {int partition_root_state; scalar_t__ child_ecpus_count; int cpus_allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,struct tmpmasks*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,struct tmpmasks*) ;
 struct cpuset* FUNC_3 (struct cpuset*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 struct cpuset VAR_7 ;
 int FUNC_5 (int ,struct cpuset*,int) ;
 int FUNC_6 (struct cpuset*,int ,int *,struct tmpmasks*) ;
 int FUNC_7 (struct cpuset*,struct cpuset*,struct tmpmasks*) ;
 int FUNC_8 (struct cpuset*) ;

__attribute__((used)) static int FUNC_9(struct cpuset *VAR_8, int VAR_9)
{
 int VAR_10;
 struct cpuset *VAR_11 = FUNC_3(VAR_8);
 struct tmpmasks VAR_12;

 if ((VAR_9 != 0) && (VAR_9 != 1))
  return -VAR_1;
 if (VAR_9 == VAR_8->partition_root_state)
  return 0;





 if (VAR_9 && VAR_8->partition_root_state)
  return -VAR_1;

 if (FUNC_0(((void*)0), &VAR_12))
  return -VAR_2;

 VAR_10 = -VAR_1;
 if (!VAR_8->partition_root_state) {





  if (FUNC_1(VAR_8->cpus_allowed))
   goto out;

  VAR_10 = FUNC_5(VAR_0, VAR_8, 1);
  if (VAR_10)
   goto out;

  VAR_10 = FUNC_6(VAR_8, VAR_6,
           ((void*)0), &VAR_12);
  if (VAR_10) {
   FUNC_5(VAR_0, VAR_8, 0);
   goto out;
  }
  VAR_8->partition_root_state = VAR_3;
 } else {




  if (VAR_8->partition_root_state == VAR_4) {
   VAR_8->partition_root_state = 0;
   FUNC_5(VAR_0, VAR_8, 0);
   VAR_10 = 0;
   goto out;
  }

  VAR_10 = FUNC_6(VAR_8, VAR_5,
           ((void*)0), &VAR_12);
  if (VAR_10)
   goto out;

  VAR_8->partition_root_state = 0;


  FUNC_5(VAR_0, VAR_8, 0);
 }





 if (VAR_11 != &VAR_7)
  FUNC_8(VAR_11);

 if (VAR_11->child_ecpus_count)
  FUNC_7(VAR_11, VAR_8, &VAR_12);

 FUNC_4();
out:
 FUNC_2(((void*)0), &VAR_12);
 return VAR_10;
}
