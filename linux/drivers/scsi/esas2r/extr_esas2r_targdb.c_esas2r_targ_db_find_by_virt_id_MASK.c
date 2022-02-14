
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct esas2r_target {scalar_t__ target_state; scalar_t__ virt_targ_id; } ;
struct esas2r_adapter {struct esas2r_target* targetdb_end; struct esas2r_target* targetdb; } ;


 scalar_t__ VAR_0 ;

struct esas2r_target *FUNC_0(struct esas2r_adapter *VAR_1,
           u16 VAR_2)
{
 struct esas2r_target *VAR_3;

 for (VAR_3 = VAR_1->targetdb; VAR_3 < VAR_1->targetdb_end; VAR_3++) {
  if (VAR_3->target_state != VAR_0)
   continue;

  if (VAR_3->virt_targ_id == VAR_2)
   return VAR_3;
 }

 return ((void*)0);
}
