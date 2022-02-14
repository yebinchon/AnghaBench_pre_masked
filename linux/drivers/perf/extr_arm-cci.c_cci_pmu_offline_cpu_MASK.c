
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int cpu; int pmu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3)
{
 int VAR_4;

 if (!VAR_1 || VAR_3 != VAR_1->cpu)
  return 0;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 if (VAR_4 >= VAR_2)
  return 0;

 FUNC_1(&VAR_1->pmu, VAR_3, VAR_4);
 VAR_1->cpu = VAR_4;
 return 0;
}
