
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rapl_package {int cpumask; } ;


 scalar_t__ FUNC_0 (struct rapl_package*) ;
 int FUNC_1 (struct rapl_package*) ;
 int FUNC_2 (unsigned int,int *) ;
 struct rapl_package* FUNC_3 (unsigned int,int *) ;
 struct rapl_package* FUNC_4 (unsigned int,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1)
{
 struct rapl_package *VAR_2;

 VAR_2 = FUNC_4(VAR_1, &VAR_0);
 if (!VAR_2) {
  VAR_2 = FUNC_3(VAR_1, &VAR_0);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);
 }
 FUNC_2(VAR_1, &VAR_2->cpumask);
 return 0;
}
