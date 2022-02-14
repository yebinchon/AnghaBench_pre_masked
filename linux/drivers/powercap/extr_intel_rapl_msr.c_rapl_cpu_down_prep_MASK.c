
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rapl_package {unsigned int lead_cpu; int cpumask; } ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct rapl_package* FUNC_2 (unsigned int,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct rapl_package*) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2)
{
 struct rapl_package *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2, &VAR_1);
 if (!VAR_3)
  return 0;

 FUNC_0(VAR_2, &VAR_3->cpumask);
 VAR_4 = FUNC_1(&VAR_3->cpumask);
 if (VAR_4 >= VAR_0)
  FUNC_3(VAR_3);
 else if (VAR_3->lead_cpu == VAR_2)
  VAR_3->lead_cpu = VAR_4;
 return 0;
}
