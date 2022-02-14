
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_cpus_entries {int rcu_head; } ;


 int FUNC_0 (struct callchain_cpus_entries*,int *) ;
 int FUNC_1 (int *,int ) ;
 struct callchain_cpus_entries* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct callchain_cpus_entries *VAR_2;

 VAR_2 = VAR_0;
 FUNC_0(VAR_0, ((void*)0));
 FUNC_1(&VAR_2->rcu_head, VAR_1);
}
