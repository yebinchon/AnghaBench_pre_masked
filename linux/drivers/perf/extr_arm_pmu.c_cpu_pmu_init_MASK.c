
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_pmu {int node; } ;


 int VAR_0 ;
 int FUNC_0 (struct arm_pmu*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct arm_pmu *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0,
           &VAR_1->node);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  goto out_unregister;

 return 0;

out_unregister:
 FUNC_2(VAR_0,
         &VAR_1->node);
out:
 return VAR_2;
}
