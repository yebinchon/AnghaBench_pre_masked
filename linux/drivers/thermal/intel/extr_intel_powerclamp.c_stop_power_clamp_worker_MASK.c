
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerclamp_worker_data {int clamping; int * worker; int cpu; int idle_injection_work; int balancing_work; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct powerclamp_worker_data* FUNC_4 (int ,unsigned long) ;
 int FUNC_5 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2)
{
 struct powerclamp_worker_data *VAR_3 = FUNC_4(VAR_1, VAR_2);

 if (!VAR_3->worker)
  return;

 VAR_3->clamping = 0;






 FUNC_5();
 FUNC_2(&VAR_3->balancing_work);
 FUNC_1(&VAR_3->idle_injection_work);







 FUNC_0(VAR_3->cpu, VAR_0);
 FUNC_3(VAR_3->worker);

 VAR_3->worker = ((void*)0);
}
