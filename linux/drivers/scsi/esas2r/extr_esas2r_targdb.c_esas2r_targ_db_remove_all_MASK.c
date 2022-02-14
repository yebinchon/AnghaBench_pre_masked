
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_target {scalar_t__ target_state; } ;
struct esas2r_adapter {int mem_lock; struct esas2r_target* targetdb_end; struct esas2r_target* targetdb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_target*) ;
 int FUNC_1 (struct esas2r_target*,struct esas2r_adapter*) ;
 int FUNC_2 (struct esas2r_adapter*,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct esas2r_adapter *VAR_2, bool VAR_3)
{
 struct esas2r_target *VAR_4;
 unsigned long VAR_5;

 for (VAR_4 = VAR_2->targetdb; VAR_4 < VAR_2->targetdb_end; VAR_4++) {
  if (VAR_4->target_state != VAR_1)
   continue;

  FUNC_4(&VAR_2->mem_lock, VAR_5);
  FUNC_0(VAR_2, VAR_4);
  FUNC_5(&VAR_2->mem_lock, VAR_5);

  if (VAR_3) {
   FUNC_3("remove id:%d", FUNC_1(VAR_4,
         VAR_2));
   FUNC_2(VAR_2, FUNC_1(VAR_4,
           VAR_2),
          VAR_0);
  }
 }
}
