
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void perf_callchain_entry ;
struct callchain_cpus_entries {scalar_t__* cpu_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct callchain_cpus_entries* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct perf_callchain_entry *FUNC_5(int *VAR_2)
{
 int VAR_3;
 struct callchain_cpus_entries *VAR_4;

 *VAR_2 = FUNC_0(FUNC_4(VAR_1));
 if (*VAR_2 == -1)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_3();

 return (((void *)VAR_4->cpu_entries[VAR_3]) +
  (*VAR_2 * FUNC_1()));
}
