
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct btrfs_raid_bio {int real_stripes; int faila; int failb; int stripe_npages; scalar_t__ operation; int fs_info; int stripes_pending; TYPE_1__* bbio; int error; int stripe_len; } ;
struct bio_list {int dummy; } ;
struct bio {int bi_opf; int bi_end_io; struct btrfs_raid_bio* bi_private; } ;
struct TYPE_2__ {scalar_t__ max_errors; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_5 ;
 int FUNC_1 (struct btrfs_raid_bio*) ;
 int FUNC_2 (struct btrfs_raid_bio*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct bio_list*) ;
 struct bio* FUNC_7 (struct bio_list*) ;
 int FUNC_8 (struct bio_list*) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (int ,struct bio*,int ) ;
 int VAR_6 ;
 int FUNC_11 (struct btrfs_raid_bio*,struct bio_list*,struct page*,int,int,int ) ;
 int FUNC_12 (struct btrfs_raid_bio*,int ) ;
 struct page* FUNC_13 (struct btrfs_raid_bio*,int,int) ;
 int FUNC_14 (struct bio*) ;

__attribute__((used)) static int FUNC_15(struct btrfs_raid_bio *VAR_7)
{
 int VAR_8 = 0;
 struct bio_list VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 struct bio *VAR_13;

 FUNC_6(&VAR_9);

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  goto cleanup;

 FUNC_5(&VAR_7->error, 0);






 for (VAR_12 = 0; VAR_12 < VAR_7->real_stripes; VAR_12++) {
  if (VAR_7->faila == VAR_12 || VAR_7->failb == VAR_12) {
   FUNC_3(&VAR_7->error);
   continue;
  }

  for (VAR_11 = 0; VAR_11 < VAR_7->stripe_npages; VAR_11++) {
   struct page *VAR_14;





   VAR_14 = FUNC_13(VAR_7, VAR_12, VAR_11);
   if (FUNC_0(VAR_14))
    continue;

   VAR_10 = FUNC_11(VAR_7, &VAR_9,
           FUNC_13(VAR_7, VAR_12, VAR_11),
           VAR_12, VAR_11, VAR_7->stripe_len);
   if (VAR_10 < 0)
    goto cleanup;
  }
 }

 VAR_8 = FUNC_8(&VAR_9);
 if (!VAR_8) {





  if (FUNC_4(&VAR_7->error) <= VAR_7->bbio->max_errors) {
   FUNC_1(VAR_7);
   goto out;
  } else {
   goto cleanup;
  }
 }





 FUNC_5(&VAR_7->stripes_pending, VAR_8);
 while (1) {
  VAR_13 = FUNC_7(&VAR_9);
  if (!VAR_13)
   break;

  VAR_13->bi_private = VAR_7;
  VAR_13->bi_end_io = VAR_6;
  VAR_13->bi_opf = VAR_5;

  FUNC_10(VAR_7->fs_info, VAR_13, VAR_3);

  FUNC_14(VAR_13);
 }
out:
 return 0;

cleanup:
 if (VAR_7->operation == VAR_1 ||
     VAR_7->operation == VAR_2)
  FUNC_12(VAR_7, VAR_0);

 while ((VAR_13 = FUNC_7(&VAR_9)))
  FUNC_9(VAR_13);

 return -VAR_4;
}
