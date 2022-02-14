
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb; } ;
struct ubi_wl_entry {TYPE_1__ u; int pnum; } ;
struct ubi_device {int peb_count; int work_sem; int wl_lock; int free_count; int free; int scrub; int used; struct ubi_wl_entry** lookuptbl; int buf_mutex; int peb_size; int peb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ubi_device*,int) ;
 scalar_t__ FUNC_2 (struct ubi_device*,struct ubi_wl_entry*) ;
 scalar_t__ FUNC_3 (struct ubi_wl_entry*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ubi_device*,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct ubi_device*,struct ubi_wl_entry*,int ,int ,int,int) ;
 int FUNC_9 (struct ubi_device*,struct ubi_wl_entry*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ubi_device*,int ,int,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ubi_wl_entry*,int *) ;

int FUNC_15(struct ubi_device *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10 = 0;
 struct ubi_wl_entry *VAR_11;

 if (VAR_8 < 0 || VAR_8 >= VAR_7->peb_count) {
  VAR_10 = -VAR_2;
  goto out;
 }





 FUNC_0(&VAR_7->work_sem);





 FUNC_10(&VAR_7->wl_lock);
 VAR_11 = VAR_7->lookuptbl[VAR_8];
 if (!VAR_11) {
  FUNC_11(&VAR_7->wl_lock);
  VAR_10 = -VAR_3;
  goto out_resume;
 }




 if (!FUNC_9(VAR_7, VAR_11)) {
  FUNC_11(&VAR_7->wl_lock);
  VAR_10 = -VAR_1;
  goto out_resume;
 }
 FUNC_11(&VAR_7->wl_lock);

 if (!VAR_9) {
  FUNC_4(&VAR_7->buf_mutex);
  VAR_10 = FUNC_12(VAR_7, VAR_7->peb_buf, VAR_8, 0, VAR_7->peb_size);
  FUNC_5(&VAR_7->buf_mutex);
 }

 if (VAR_9 || VAR_10 == VAR_5) {



  FUNC_10(&VAR_7->wl_lock);





  VAR_11 = VAR_7->lookuptbl[VAR_8];
  if (!VAR_11) {
   FUNC_11(&VAR_7->wl_lock);
   VAR_10 = -VAR_3;
   goto out_resume;
  }




  if (!FUNC_9(VAR_7, VAR_11)) {
   FUNC_11(&VAR_7->wl_lock);
   VAR_10 = -VAR_1;
   goto out_resume;
  }

  if (FUNC_2(VAR_7, VAR_11)) {
   FUNC_6(VAR_7, VAR_11->pnum);
   FUNC_14(VAR_11, &VAR_7->scrub);
   FUNC_11(&VAR_7->wl_lock);

   VAR_10 = FUNC_1(VAR_7, 1);
  } else if (FUNC_3(VAR_11, &VAR_7->used)) {
   FUNC_7(&VAR_11->u.rb, &VAR_7->used);
   FUNC_14(VAR_11, &VAR_7->scrub);
   FUNC_11(&VAR_7->wl_lock);

   VAR_10 = FUNC_1(VAR_7, 1);
  } else if (FUNC_3(VAR_11, &VAR_7->free)) {
   FUNC_7(&VAR_11->u.rb, &VAR_7->free);
   VAR_7->free_count--;
   FUNC_11(&VAR_7->wl_lock);





   VAR_10 = FUNC_8(VAR_7, VAR_11, VAR_6, VAR_6,
          VAR_9 ? 0 : 1, 1);
  } else {
   FUNC_11(&VAR_7->wl_lock);
   VAR_10 = -VAR_0;
  }

  if (!VAR_10 && !VAR_9)
   VAR_10 = -VAR_4;
 } else {
  VAR_10 = 0;
 }

out_resume:
 FUNC_13(&VAR_7->work_sem);
out:

 return VAR_10;
}
