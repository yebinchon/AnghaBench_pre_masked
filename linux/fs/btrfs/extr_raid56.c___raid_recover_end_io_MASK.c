
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct btrfs_raid_bio {int real_stripes; int faila; int failb; scalar_t__ operation; int stripe_npages; int nr_data; int flags; TYPE_1__* bbio; int dbitmap; int bio_list_lock; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_2__ {int map_type; scalar_t__* raid_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct btrfs_raid_bio*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 (struct btrfs_raid_bio*,int ) ;
 int FUNC_7 (struct btrfs_raid_bio*) ;
 int FUNC_8 (struct btrfs_raid_bio*) ;
 void** FUNC_9 (int,int,int ) ;
 int FUNC_10 (void**) ;
 void* FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 struct page* FUNC_13 (struct btrfs_raid_bio*,int,int,int ) ;
 int FUNC_14 (int,int ,int,int,void**) ;
 int FUNC_15 (int,int ,int,void**) ;
 int FUNC_16 (struct btrfs_raid_bio*,scalar_t__) ;
 struct page* FUNC_17 (struct btrfs_raid_bio*,int,int) ;
 int FUNC_18 (void**,int,int ) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int,int ) ;

__attribute__((used)) static void FUNC_23(struct btrfs_raid_bio *VAR_14)
{
 int VAR_15, VAR_16;
 void **VAR_17;
 int VAR_18 = -1, VAR_19 = -1;
 struct page *VAR_20;
 blk_status_t VAR_21;
 int VAR_22;

 VAR_17 = FUNC_9(VAR_14->real_stripes, sizeof(void *), VAR_8);
 if (!VAR_17) {
  VAR_21 = VAR_2;
  goto cleanup_io;
 }

 VAR_18 = VAR_14->faila;
 VAR_19 = VAR_14->failb;

 if (VAR_14->operation == VAR_5 ||
     VAR_14->operation == VAR_6) {
  FUNC_20(&VAR_14->bio_list_lock);
  FUNC_19(VAR_13, &VAR_14->flags);
  FUNC_21(&VAR_14->bio_list_lock);
 }

 FUNC_8(VAR_14);

 for (VAR_15 = 0; VAR_15 < VAR_14->stripe_npages; VAR_15++) {




  if (VAR_14->operation == VAR_4 &&
      !FUNC_22(VAR_15, VAR_14->dbitmap))
   continue;




  for (VAR_16 = 0; VAR_16 < VAR_14->real_stripes; VAR_16++) {




   if ((VAR_14->operation == VAR_5 ||
        VAR_14->operation == VAR_6) &&
       (VAR_16 == VAR_18 || VAR_16 == VAR_19)) {
    VAR_20 = FUNC_13(VAR_14, VAR_16, VAR_15, 0);
   } else {
    VAR_20 = FUNC_17(VAR_14, VAR_16, VAR_15);
   }
   VAR_17[VAR_16] = FUNC_11(VAR_20);
  }


  if (VAR_14->bbio->map_type & VAR_3) {




   if (VAR_19 < 0) {
    if (VAR_18 == VAR_14->nr_data) {





     VAR_21 = VAR_0;
     goto cleanup;
    }




    goto pstripe;
   }


   if (VAR_18 > VAR_19) {
    int VAR_23 = VAR_19;
    VAR_19 = VAR_18;
    VAR_18 = VAR_23;
   }







   if (VAR_14->bbio->raid_map[VAR_19] == VAR_11) {
    if (VAR_14->bbio->raid_map[VAR_18] ==
        VAR_10) {
     VAR_21 = VAR_0;
     goto cleanup;
    }




    goto pstripe;
   }

   if (VAR_14->bbio->raid_map[VAR_19] == VAR_10) {
    FUNC_15(VAR_14->real_stripes,
        VAR_9, VAR_18, VAR_17);
   } else {
    FUNC_14(VAR_14->real_stripes,
        VAR_9, VAR_18, VAR_19,
        VAR_17);
   }
  } else {
   void *VAR_24;


   FUNC_1(VAR_19 != -1);
pstripe:

   FUNC_5(VAR_17[VAR_18], VAR_17[VAR_14->nr_data]);


   VAR_24 = VAR_17[VAR_18];
   for (VAR_16 = VAR_18; VAR_16 < VAR_14->nr_data - 1; VAR_16++)
    VAR_17[VAR_16] = VAR_17[VAR_16 + 1];
   VAR_17[VAR_14->nr_data - 1] = VAR_24;


   FUNC_18(VAR_17, VAR_14->nr_data - 1, VAR_9);
  }






  if (VAR_14->operation == VAR_7) {
   for (VAR_22 = 0; VAR_22 < VAR_14->stripe_npages; VAR_22++) {
    if (VAR_18 != -1) {
     VAR_20 = FUNC_17(VAR_14, VAR_18, VAR_22);
     FUNC_2(VAR_20);
    }
    if (VAR_19 != -1) {
     VAR_20 = FUNC_17(VAR_14, VAR_19, VAR_22);
     FUNC_2(VAR_20);
    }
   }
  }
  for (VAR_16 = 0; VAR_16 < VAR_14->real_stripes; VAR_16++) {




   if ((VAR_14->operation == VAR_5 ||
        VAR_14->operation == VAR_6) &&
       (VAR_16 == VAR_18 || VAR_16 == VAR_19)) {
    VAR_20 = FUNC_13(VAR_14, VAR_16, VAR_15, 0);
   } else {
    VAR_20 = FUNC_17(VAR_14, VAR_16, VAR_15);
   }
   FUNC_12(VAR_20);
  }
 }

 VAR_21 = VAR_1;
cleanup:
 FUNC_10(VAR_17);

cleanup_io:





 if (VAR_14->operation == VAR_5 ||
     VAR_14->operation == VAR_6) {
  if (VAR_21 == VAR_1 && VAR_14->failb < 0)
   FUNC_3(VAR_14);
  else
   FUNC_4(VAR_12, &VAR_14->flags);

  FUNC_16(VAR_14, VAR_21);
 } else if (VAR_21 == VAR_1) {
  VAR_14->faila = -1;
  VAR_14->failb = -1;

  if (VAR_14->operation == VAR_7)
   FUNC_7(VAR_14);
  else if (VAR_14->operation == VAR_4)
   FUNC_6(VAR_14, 0);
  else
   FUNC_0();
 } else {
  FUNC_16(VAR_14, VAR_21);
 }
}
