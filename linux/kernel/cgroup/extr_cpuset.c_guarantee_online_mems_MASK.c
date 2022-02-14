
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int effective_mems; } ;
typedef int nodemask_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct cpuset* FUNC_2 (struct cpuset*) ;

__attribute__((used)) static void FUNC_3(struct cpuset *VAR_2, nodemask_t *VAR_3)
{
 while (!FUNC_1(VAR_2->effective_mems, VAR_1[VAR_0]))
  VAR_2 = FUNC_2(VAR_2);
 FUNC_0(*VAR_3, VAR_2->effective_mems, VAR_1[VAR_0]);
}
