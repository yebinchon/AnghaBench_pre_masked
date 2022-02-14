
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {int ec; int pnum; } ;
struct ubi_fastmap_layout {int used_blocks; struct ubi_wl_entry** e; int * to_be_tortured; } ;
struct ubi_device {int fm_size; int leb_size; int fm_protect; int work_sem; int fm_eba_sem; int wl_lock; struct ubi_fastmap_layout* fm; scalar_t__ fm_disabled; scalar_t__ ro_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ubi_device*,int ) ;
 int FUNC_2 (struct ubi_device*) ;
 int FUNC_3 (struct ubi_fastmap_layout*) ;
 struct ubi_fastmap_layout* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ubi_device*,struct ubi_fastmap_layout*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubi_device*) ;
 int FUNC_9 (struct ubi_device*,char*) ;
 int FUNC_10 (struct ubi_device*) ;
 int FUNC_11 (struct ubi_device*) ;
 int FUNC_12 (struct ubi_device*,char*,int) ;
 struct ubi_wl_entry* FUNC_13 (struct ubi_device*,int) ;
 int FUNC_14 (struct ubi_device*,struct ubi_wl_entry*,int,int ) ;
 int FUNC_15 (struct ubi_device*,struct ubi_fastmap_layout*) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct ubi_device *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct ubi_fastmap_layout *VAR_8, *VAR_9;
 struct ubi_wl_entry *VAR_10;

 FUNC_0(&VAR_4->fm_protect);
 FUNC_0(&VAR_4->work_sem);
 FUNC_0(&VAR_4->fm_eba_sem);

 FUNC_10(VAR_4);

 if (VAR_4->ro_mode || VAR_4->fm_disabled) {
  FUNC_16(&VAR_4->fm_eba_sem);
  FUNC_16(&VAR_4->work_sem);
  FUNC_16(&VAR_4->fm_protect);
  return 0;
 }

 VAR_5 = FUNC_8(VAR_4);
 if (VAR_5) {
  FUNC_16(&VAR_4->fm_eba_sem);
  FUNC_16(&VAR_4->work_sem);
  FUNC_16(&VAR_4->fm_protect);
  return VAR_5;
 }

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_16(&VAR_4->fm_eba_sem);
  FUNC_16(&VAR_4->work_sem);
  FUNC_16(&VAR_4->fm_protect);
  return -VAR_0;
 }

 VAR_8->used_blocks = VAR_4->fm_size / VAR_4->leb_size;
 VAR_9 = VAR_4->fm;
 VAR_4->fm = ((void*)0);

 if (VAR_8->used_blocks > VAR_3) {
  FUNC_9(VAR_4, "fastmap too large");
  VAR_5 = -VAR_1;
  goto err;
 }

 for (VAR_6 = 1; VAR_6 < VAR_8->used_blocks; VAR_6++) {
  FUNC_6(&VAR_4->wl_lock);
  VAR_10 = FUNC_13(VAR_4, 0);
  FUNC_7(&VAR_4->wl_lock);

  if (!VAR_10) {
   if (VAR_9 && VAR_9->e[VAR_6]) {
    VAR_5 = FUNC_1(VAR_4, VAR_9->e[VAR_6]->pnum);
    if (VAR_5 < 0) {
     FUNC_9(VAR_4, "could not erase old fastmap PEB");

     for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++) {
      FUNC_14(VAR_4, VAR_8->e[VAR_7],
          VAR_7, 0);
      VAR_8->e[VAR_7] = ((void*)0);
     }
     goto err;
    }
    VAR_8->e[VAR_6] = VAR_9->e[VAR_6];
    VAR_9->e[VAR_6] = ((void*)0);
   } else {
    FUNC_9(VAR_4, "could not get any free erase block");

    for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++) {
     FUNC_14(VAR_4, VAR_8->e[VAR_7], VAR_7, 0);
     VAR_8->e[VAR_7] = ((void*)0);
    }

    VAR_5 = -VAR_1;
    goto err;
   }
  } else {
   VAR_8->e[VAR_6] = VAR_10;

   if (VAR_9 && VAR_9->e[VAR_6]) {
    FUNC_14(VAR_4, VAR_9->e[VAR_6], VAR_6,
        VAR_9->to_be_tortured[VAR_6]);
    VAR_9->e[VAR_6] = ((void*)0);
   }
  }
 }


 if (VAR_9 && VAR_8->used_blocks < VAR_9->used_blocks) {
  for (VAR_6 = VAR_8->used_blocks; VAR_6 < VAR_9->used_blocks; VAR_6++) {
   FUNC_14(VAR_4, VAR_9->e[VAR_6], VAR_6,
       VAR_9->to_be_tortured[VAR_6]);
   VAR_9->e[VAR_6] = ((void*)0);
  }
 }

 FUNC_6(&VAR_4->wl_lock);
 VAR_10 = FUNC_13(VAR_4, 1);
 FUNC_7(&VAR_4->wl_lock);

 if (VAR_9) {

  if (!VAR_10) {
   VAR_5 = FUNC_1(VAR_4, VAR_9->e[0]->pnum);
   if (VAR_5 < 0) {
    FUNC_9(VAR_4, "could not erase old anchor PEB");

    for (VAR_6 = 1; VAR_6 < VAR_8->used_blocks; VAR_6++) {
     FUNC_14(VAR_4, VAR_8->e[VAR_6],
         VAR_6, 0);
     VAR_8->e[VAR_6] = ((void*)0);
    }
    goto err;
   }
   VAR_8->e[0] = VAR_9->e[0];
   VAR_8->e[0]->ec = VAR_5;
   VAR_9->e[0] = ((void*)0);
  } else {

   FUNC_14(VAR_4, VAR_9->e[0], 0,
       VAR_9->to_be_tortured[0]);
   VAR_8->e[0] = VAR_10;
   VAR_9->e[0] = ((void*)0);
  }
 } else {
  if (!VAR_10) {
   FUNC_9(VAR_4, "could not find any anchor PEB");

   for (VAR_6 = 1; VAR_6 < VAR_8->used_blocks; VAR_6++) {
    FUNC_14(VAR_4, VAR_8->e[VAR_6], VAR_6, 0);
    VAR_8->e[VAR_6] = ((void*)0);
   }

   VAR_5 = -VAR_1;
   goto err;
  }
  VAR_8->e[0] = VAR_10;
 }

 VAR_5 = FUNC_15(VAR_4, VAR_8);

 if (VAR_5)
  goto err;

out_unlock:
 FUNC_16(&VAR_4->fm_eba_sem);
 FUNC_16(&VAR_4->work_sem);
 FUNC_16(&VAR_4->fm_protect);
 FUNC_3(VAR_9);
 return VAR_5;

err:
 FUNC_12(VAR_4, "Unable to write new fastmap, err=%i", VAR_5);

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0) {
  FUNC_9(VAR_4, "Unable to invalidate current fastmap!");
  FUNC_11(VAR_4);
 } else {
  FUNC_5(VAR_4, VAR_9);
  FUNC_5(VAR_4, VAR_8);
  VAR_5 = 0;
 }

 FUNC_3(VAR_8);
 goto out_unlock;
}
