
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {int work; int list; } ;
struct MPT3SAS_ADAPTER {int fw_event_lock; int * firmware_event_thread; int fw_event_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct fw_event_work*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct MPT3SAS_ADAPTER *VAR_1, struct fw_event_work *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1->firmware_event_thread == ((void*)0))
  return;

 FUNC_5(&VAR_1->fw_event_lock, VAR_3);
 FUNC_2(VAR_2);
 FUNC_0(&VAR_2->list);
 FUNC_3(&VAR_2->list, &VAR_1->fw_event_list);
 FUNC_1(&VAR_2->work, VAR_0);
 FUNC_2(VAR_2);
 FUNC_4(VAR_1->firmware_event_thread, &VAR_2->work);
 FUNC_6(&VAR_1->fw_event_lock, VAR_3);
}
