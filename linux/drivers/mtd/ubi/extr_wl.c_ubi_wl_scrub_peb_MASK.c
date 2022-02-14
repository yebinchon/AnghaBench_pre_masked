
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb; } ;
struct ubi_wl_entry {int pnum; TYPE_1__ u; } ;
struct ubi_device {int wl_lock; int scrub; int used; struct ubi_wl_entry* move_to; int erroneous; struct ubi_wl_entry* move_from; struct ubi_wl_entry** lookuptbl; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ubi_device*,int ) ;
 scalar_t__ FUNC_2 (struct ubi_wl_entry*,int *) ;
 int FUNC_3 (struct ubi_device*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ubi_device*,struct ubi_wl_entry*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubi_device*,char*,int) ;
 int FUNC_9 (struct ubi_device*,char*,int) ;
 int FUNC_10 (struct ubi_device*) ;
 int FUNC_11 (struct ubi_wl_entry*,int *) ;
 int FUNC_12 () ;

int FUNC_13(struct ubi_device *VAR_0, int VAR_1)
{
 struct ubi_wl_entry *VAR_2;

 FUNC_9(VAR_0, "schedule PEB %d for scrubbing", VAR_1);

retry:
 FUNC_6(&VAR_0->wl_lock);
 VAR_2 = VAR_0->lookuptbl[VAR_1];
 if (VAR_2 == VAR_0->move_from || FUNC_2(VAR_2, &VAR_0->scrub) ||
       FUNC_2(VAR_2, &VAR_0->erroneous)) {
  FUNC_7(&VAR_0->wl_lock);
  return 0;
 }

 if (VAR_2 == VAR_0->move_to) {






  FUNC_7(&VAR_0->wl_lock);
  FUNC_0("the PEB %d is not in proper tree, retry", VAR_1);
  FUNC_12();
  goto retry;
 }

 if (FUNC_2(VAR_2, &VAR_0->used)) {
  FUNC_5(VAR_0, VAR_2, &VAR_0->used);
  FUNC_4(&VAR_2->u.rb, &VAR_0->used);
 } else {
  int VAR_3;

  VAR_3 = FUNC_3(VAR_0, VAR_2->pnum);
  if (VAR_3) {
   FUNC_8(VAR_0, "PEB %d not found", VAR_1);
   FUNC_10(VAR_0);
   FUNC_7(&VAR_0->wl_lock);
   return VAR_3;
  }
 }

 FUNC_11(VAR_2, &VAR_0->scrub);
 FUNC_7(&VAR_0->wl_lock);





 return FUNC_1(VAR_0, 0);
}
