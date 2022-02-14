
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb; } ;
struct ubi_wl_entry {int pnum; TYPE_1__ u; } ;
struct ubi_device {int peb_count; int move_to_put; scalar_t__ erroneous_peb_count; int fm_protect; int wl_lock; int used; int erroneous; int scrub; struct ubi_wl_entry* move_to; int move_mutex; struct ubi_wl_entry* move_from; struct ubi_wl_entry** lookuptbl; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ubi_wl_entry*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubi_device*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct ubi_device*,struct ubi_wl_entry*,int,int,int,int) ;
 int FUNC_8 (struct ubi_device*,struct ubi_wl_entry*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct ubi_device*,char*,int) ;
 int FUNC_13 (struct ubi_device*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ubi_wl_entry*,int *) ;

int FUNC_16(struct ubi_device *VAR_0, int VAR_1, int VAR_2,
     int VAR_3, int VAR_4)
{
 int VAR_5;
 struct ubi_wl_entry *VAR_6;

 FUNC_0("PEB %d", VAR_3);
 FUNC_11(VAR_3 >= 0);
 FUNC_11(VAR_3 < VAR_0->peb_count);

 FUNC_1(&VAR_0->fm_protect);

retry:
 FUNC_9(&VAR_0->wl_lock);
 VAR_6 = VAR_0->lookuptbl[VAR_3];
 if (VAR_6 == VAR_0->move_from) {





  FUNC_0("PEB %d is being moved, wait", VAR_3);
  FUNC_10(&VAR_0->wl_lock);


  FUNC_3(&VAR_0->move_mutex);
  FUNC_4(&VAR_0->move_mutex);
  goto retry;
 } else if (VAR_6 == VAR_0->move_to) {
  FUNC_0("PEB %d is the target of data moving", VAR_3);
  FUNC_11(!VAR_0->move_to_put);
  VAR_0->move_to_put = 1;
  FUNC_10(&VAR_0->wl_lock);
  FUNC_14(&VAR_0->fm_protect);
  return 0;
 } else {
  if (FUNC_2(VAR_6, &VAR_0->used)) {
   FUNC_8(VAR_0, VAR_6, &VAR_0->used);
   FUNC_6(&VAR_6->u.rb, &VAR_0->used);
  } else if (FUNC_2(VAR_6, &VAR_0->scrub)) {
   FUNC_8(VAR_0, VAR_6, &VAR_0->scrub);
   FUNC_6(&VAR_6->u.rb, &VAR_0->scrub);
  } else if (FUNC_2(VAR_6, &VAR_0->erroneous)) {
   FUNC_8(VAR_0, VAR_6, &VAR_0->erroneous);
   FUNC_6(&VAR_6->u.rb, &VAR_0->erroneous);
   VAR_0->erroneous_peb_count -= 1;
   FUNC_11(VAR_0->erroneous_peb_count >= 0);

   VAR_4 = 1;
  } else {
   VAR_5 = FUNC_5(VAR_0, VAR_6->pnum);
   if (VAR_5) {
    FUNC_12(VAR_0, "PEB %d not found", VAR_3);
    FUNC_13(VAR_0);
    FUNC_10(&VAR_0->wl_lock);
    FUNC_14(&VAR_0->fm_protect);
    return VAR_5;
   }
  }
 }
 FUNC_10(&VAR_0->wl_lock);

 VAR_5 = FUNC_7(VAR_0, VAR_6, VAR_1, VAR_2, VAR_4, 0);
 if (VAR_5) {
  FUNC_9(&VAR_0->wl_lock);
  FUNC_15(VAR_6, &VAR_0->used);
  FUNC_10(&VAR_0->wl_lock);
 }

 FUNC_14(&VAR_0->fm_protect);
 return VAR_5;
}
