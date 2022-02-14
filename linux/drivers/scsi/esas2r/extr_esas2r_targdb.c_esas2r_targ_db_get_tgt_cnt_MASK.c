
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct esas2r_target {scalar_t__ target_state; } ;
struct esas2r_adapter {int mem_lock; struct esas2r_target* targetdb_end; struct esas2r_target* targetdb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

u16 FUNC_2(struct esas2r_adapter *VAR_1)
{
 u16 VAR_2 = 0;
 struct esas2r_target *VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_1->mem_lock, VAR_4);
 for (VAR_3 = VAR_1->targetdb; VAR_3 < VAR_1->targetdb_end; VAR_3++)
  if (VAR_3->target_state == VAR_0)
   VAR_2++;

 FUNC_1(&VAR_1->mem_lock, VAR_4);

 return VAR_2;
}
