
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_fw_event_work {int list; struct esas2r_adapter* a; } ;
struct esas2r_adapter {int fw_event_lock; } ;


 int FUNC_0 (struct esas2r_fw_event_work*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct esas2r_fw_event_work *VAR_0)
{
 unsigned long VAR_1;
 struct esas2r_adapter *VAR_2 = VAR_0->a;

 FUNC_2(&VAR_2->fw_event_lock, VAR_1);
 FUNC_1(&VAR_0->list);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_2->fw_event_lock, VAR_1);
}
