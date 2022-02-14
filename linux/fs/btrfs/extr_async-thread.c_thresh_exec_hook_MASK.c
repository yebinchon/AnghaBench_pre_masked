
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __btrfs_workqueue {int thresh; int count; int current_active; int normal_wq; int thres_lock; int limit_active; int pending; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static inline void FUNC_6(struct __btrfs_workqueue *VAR_1)
{
 int VAR_2;
 long VAR_3;
 int VAR_4 = 0;

 if (VAR_1->thresh == VAR_0)
  return;

 FUNC_0(&VAR_1->pending);
 FUNC_3(&VAR_1->thres_lock);




 VAR_1->count++;
 VAR_1->count %= (VAR_1->thresh / 4);
 if (!VAR_1->count)
  goto out;
 VAR_2 = VAR_1->current_active;





 VAR_3 = FUNC_1(&VAR_1->pending);
 if (VAR_3 > VAR_1->thresh)
  VAR_2++;
 if (VAR_3 < VAR_1->thresh / 2)
  VAR_2--;
 VAR_2 = FUNC_2(VAR_2, 1, VAR_1->limit_active);
 if (VAR_2 != VAR_1->current_active) {
  VAR_4 = 1;
  VAR_1->current_active = VAR_2;
 }
out:
 FUNC_4(&VAR_1->thres_lock);

 if (VAR_4) {
  FUNC_5(VAR_1->normal_wq, VAR_1->current_active);
 }
}
