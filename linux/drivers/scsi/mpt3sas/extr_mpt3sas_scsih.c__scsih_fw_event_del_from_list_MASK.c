
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {int list; } ;
struct MPT3SAS_ADAPTER {int fw_event_lock; } ;


 int FUNC_0 (struct fw_event_work*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_0, struct fw_event_work
 *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_0->fw_event_lock, VAR_2);
 if (!FUNC_2(&VAR_1->list)) {
  FUNC_1(&VAR_1->list);
  FUNC_0(VAR_1);
 }
 FUNC_4(&VAR_0->fw_event_lock, VAR_2);
}
