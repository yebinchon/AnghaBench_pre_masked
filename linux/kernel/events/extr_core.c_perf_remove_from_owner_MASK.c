
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int perf_event_mutex; } ;
struct perf_event {int owner; int owner_entry; } ;


 struct task_struct* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void FUNC_9(struct perf_event *VAR_1)
{
 struct task_struct *VAR_2;

 FUNC_6();






 VAR_2 = FUNC_0(VAR_1->owner);
 if (VAR_2) {





  FUNC_1(VAR_2);
 }
 FUNC_7();

 if (VAR_2) {
  FUNC_3(&VAR_2->perf_event_mutex, VAR_0);







  if (VAR_1->owner) {
   FUNC_2(&VAR_1->owner_entry);
   FUNC_8(&VAR_1->owner, ((void*)0));
  }
  FUNC_4(&VAR_2->perf_event_mutex);
  FUNC_5(VAR_2);
 }
}
