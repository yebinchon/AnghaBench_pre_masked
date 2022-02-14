
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsu_pmu {int associated_cpus; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask*,int *,int ) ;
 int FUNC_1 (struct cpumask*,int) ;

__attribute__((used)) static int FUNC_2(struct dsu_pmu *VAR_1, int VAR_2)
{
 struct cpumask VAR_3;

 FUNC_0(&VAR_3,
    &VAR_1->associated_cpus, VAR_0);
 return FUNC_1(&VAR_3, VAR_2);
}
