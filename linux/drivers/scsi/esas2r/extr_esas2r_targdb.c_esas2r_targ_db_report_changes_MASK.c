
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct esas2r_target {scalar_t__ buffered_target_state; scalar_t__ target_state; } ;
struct esas2r_adapter {int mem_lock; struct esas2r_target* targetdb_end; struct esas2r_target* targetdb; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct esas2r_target*,struct esas2r_adapter*) ;
 int FUNC_1 (struct esas2r_adapter*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct esas2r_adapter *VAR_2)
{
 struct esas2r_target *VAR_3;
 unsigned long VAR_4;

 FUNC_3();

 if (FUNC_7(VAR_0, &VAR_2->flags)) {
  FUNC_4();
  return;
 }

 for (VAR_3 = VAR_2->targetdb; VAR_3 < VAR_2->targetdb_end; VAR_3++) {
  u8 VAR_5 = VAR_1;

  FUNC_5(&VAR_2->mem_lock, VAR_4);
  if (VAR_3->buffered_target_state != VAR_3->target_state)
   VAR_5 = VAR_3->buffered_target_state = VAR_3->target_state;

  FUNC_6(&VAR_2->mem_lock, VAR_4);
  if (VAR_5 != VAR_1) {
   FUNC_2("targ_db_report_changes:%d",
         FUNC_0(
          VAR_3,
          VAR_2));
   FUNC_2("state:%d", VAR_5);

   FUNC_1(VAR_2,
          FUNC_0(VAR_3,
               VAR_2),
          VAR_5);
  }
 }

 FUNC_4();
}
