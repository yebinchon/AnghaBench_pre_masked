
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerclamp_worker_data {unsigned long cpu; int clamping; int balancing_work; struct kthread_worker* worker; int idle_injection_work; scalar_t__ count; } ;
struct kthread_worker {int task; } ;


 scalar_t__ FUNC_0 (struct kthread_worker*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kthread_worker* FUNC_1 (unsigned long,int ,char*,unsigned long) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct kthread_worker*,int *) ;
 struct powerclamp_worker_data* FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (unsigned long,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_6)
{
 struct powerclamp_worker_data *VAR_7 = FUNC_5(VAR_5, VAR_6);
 struct kthread_worker *VAR_8;

 VAR_8 = FUNC_1(VAR_6, 0, "kidle_inj/%ld", VAR_6);
 if (FUNC_0(VAR_8))
  return;

 VAR_7->worker = VAR_8;
 VAR_7->count = 0;
 VAR_7->cpu = VAR_6;
 VAR_7->clamping = 1;
 FUNC_7(VAR_6, VAR_3);
 FUNC_6(VAR_8->task, VAR_0, &VAR_4);
 FUNC_3(&VAR_7->balancing_work, VAR_1);
 FUNC_2(&VAR_7->idle_injection_work,
      VAR_2);
 FUNC_4(VAR_7->worker, &VAR_7->balancing_work);
}
