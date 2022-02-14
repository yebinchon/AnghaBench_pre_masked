
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nvmet_ctrl {scalar_t__ nr_changed_ns; scalar_t__* changed_ns_list; int lock; } ;
typedef scalar_t__ __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nvmet_ctrl *VAR_2, __le32 VAR_3)
{
 u32 VAR_4;

 FUNC_1(&VAR_2->lock);
 if (VAR_2->nr_changed_ns > VAR_0)
  goto out_unlock;

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_changed_ns; VAR_4++) {
  if (VAR_2->changed_ns_list[VAR_4] == VAR_3)
   goto out_unlock;
 }

 if (VAR_2->nr_changed_ns == VAR_0) {
  VAR_2->changed_ns_list[0] = FUNC_0(0xffffffff);
  VAR_2->nr_changed_ns = VAR_1;
  goto out_unlock;
 }

 VAR_2->changed_ns_list[VAR_2->nr_changed_ns++] = VAR_3;
out_unlock:
 FUNC_2(&VAR_2->lock);
}
