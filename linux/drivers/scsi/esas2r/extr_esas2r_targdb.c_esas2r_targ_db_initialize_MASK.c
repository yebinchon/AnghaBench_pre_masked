
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_target {int new_target_state; void* buffered_target_state; void* target_state; } ;
struct esas2r_adapter {struct esas2r_target* targetdb_end; struct esas2r_target* targetdb; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct esas2r_target*,int ,int) ;

void FUNC_1(struct esas2r_adapter *VAR_2)
{
 struct esas2r_target *VAR_3;

 for (VAR_3 = VAR_2->targetdb; VAR_3 < VAR_2->targetdb_end; VAR_3++) {
  FUNC_0(VAR_3, 0, sizeof(struct esas2r_target));

  VAR_3->target_state = VAR_1;
  VAR_3->buffered_target_state = VAR_1;
  VAR_3->new_target_state = VAR_0;
 }
}
