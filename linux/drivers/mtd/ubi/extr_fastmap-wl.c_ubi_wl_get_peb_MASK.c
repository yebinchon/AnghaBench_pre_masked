
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_fm_pool {scalar_t__ used; scalar_t__ size; int* pebs; } ;
struct ubi_device {int wl_lock; int * lookuptbl; int fm_eba_sem; struct ubi_fm_pool fm_wl_pool; struct ubi_fm_pool fm_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ubi_device*) ;
 int FUNC_2 (struct ubi_device*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ubi_device*,char*) ;
 int FUNC_7 (struct ubi_device*,char*,int) ;
 int FUNC_8 (struct ubi_device*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct ubi_device *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 struct ubi_fm_pool *VAR_4 = &VAR_1->fm_pool;
 struct ubi_fm_pool *VAR_5 = &VAR_1->fm_wl_pool;

again:
 FUNC_0(&VAR_1->fm_eba_sem);
 FUNC_3(&VAR_1->wl_lock);



 if (VAR_4->used == VAR_4->size || VAR_5->used == VAR_5->size) {
  FUNC_4(&VAR_1->wl_lock);
  FUNC_9(&VAR_1->fm_eba_sem);
  VAR_2 = FUNC_8(VAR_1);
  if (VAR_2) {
   FUNC_7(VAR_1, "Unable to write a new fastmap: %i", VAR_2);
   FUNC_0(&VAR_1->fm_eba_sem);
   return -VAR_0;
  }
  FUNC_0(&VAR_1->fm_eba_sem);
  FUNC_3(&VAR_1->wl_lock);
 }

 if (VAR_4->used == VAR_4->size) {
  FUNC_4(&VAR_1->wl_lock);
  VAR_3++;
  if (VAR_3 == 10) {
   FUNC_6(VAR_1, "Unable to get a free PEB from user WL pool");
   VAR_2 = -VAR_0;
   goto out;
  }
  FUNC_9(&VAR_1->fm_eba_sem);
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 < 0) {
   FUNC_0(&VAR_1->fm_eba_sem);
   goto out;
  }
  goto again;
 }

 FUNC_5(VAR_4->used < VAR_4->size);
 VAR_2 = VAR_4->pebs[VAR_4->used++];
 FUNC_2(VAR_1, VAR_1->lookuptbl[VAR_2]);
 FUNC_4(&VAR_1->wl_lock);
out:
 return VAR_2;
}
