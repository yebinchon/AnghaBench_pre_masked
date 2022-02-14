
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {int dummy; } ;
struct ubi_fm_pool {scalar_t__ used; scalar_t__ size; int* pebs; } ;
struct ubi_device {int fm_work_scheduled; struct ubi_wl_entry** lookuptbl; int fm_work; int fm_eba_sem; struct ubi_fm_pool fm_wl_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct ubi_wl_entry *FUNC_3(struct ubi_device *VAR_0)
{
 struct ubi_fm_pool *VAR_1 = &VAR_0->fm_wl_pool;
 int VAR_2;

 FUNC_2(FUNC_0(&VAR_0->fm_eba_sem));

 if (VAR_1->used == VAR_1->size) {



  if (!VAR_0->fm_work_scheduled) {
   VAR_0->fm_work_scheduled = 1;
   FUNC_1(&VAR_0->fm_work);
  }
  return ((void*)0);
 }

 VAR_2 = VAR_1->pebs[VAR_1->used++];
 return VAR_0->lookuptbl[VAR_2];
}
