
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct btrfs_raid_bio {int nr_data; int stripe_npages; int fs_info; int stripes_pending; int stripe_len; int error; } ;
struct bio_list {int dummy; } ;
struct bio {int bi_opf; int bi_end_io; struct btrfs_raid_bio* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_3 ;
 int FUNC_1 (struct btrfs_raid_bio*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct bio_list*) ;
 struct bio* FUNC_4 (struct bio_list*) ;
 int FUNC_5 (struct bio_list*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (int ,struct bio*,int ) ;
 int FUNC_8 (struct btrfs_raid_bio*) ;
 struct page* FUNC_9 (struct btrfs_raid_bio*,int,int,int) ;
 int VAR_4 ;
 int FUNC_10 (struct btrfs_raid_bio*,struct bio_list*,struct page*,int,int,int ) ;
 int FUNC_11 (struct btrfs_raid_bio*,int ) ;
 struct page* FUNC_12 (struct btrfs_raid_bio*,int,int) ;
 int FUNC_13 (struct bio*) ;
 int FUNC_14 (struct btrfs_raid_bio*) ;

__attribute__((used)) static int FUNC_15(struct btrfs_raid_bio *VAR_5)
{
 int VAR_6 = 0;
 struct bio_list VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 struct bio *VAR_11;

 FUNC_3(&VAR_7);

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  goto cleanup;

 FUNC_8(VAR_5);

 FUNC_2(&VAR_5->error, 0);




 for (VAR_10 = 0; VAR_10 < VAR_5->nr_data; VAR_10++) {
  for (VAR_9 = 0; VAR_9 < VAR_5->stripe_npages; VAR_9++) {
   struct page *VAR_12;






   VAR_12 = FUNC_9(VAR_5, VAR_10, VAR_9, 1);
   if (VAR_12)
    continue;

   VAR_12 = FUNC_12(VAR_5, VAR_10, VAR_9);




   if (FUNC_0(VAR_12))
    continue;

   VAR_8 = FUNC_10(VAR_5, &VAR_7, VAR_12,
           VAR_10, VAR_9, VAR_5->stripe_len);
   if (VAR_8)
    goto cleanup;
  }
 }

 VAR_6 = FUNC_5(&VAR_7);
 if (!VAR_6) {






  goto finish;
 }





 FUNC_2(&VAR_5->stripes_pending, VAR_6);
 while (1) {
  VAR_11 = FUNC_4(&VAR_7);
  if (!VAR_11)
   break;

  VAR_11->bi_private = VAR_5;
  VAR_11->bi_end_io = VAR_4;
  VAR_11->bi_opf = VAR_3;

  FUNC_7(VAR_5->fs_info, VAR_11, VAR_1);

  FUNC_13(VAR_11);
 }

 return 0;

cleanup:
 FUNC_11(VAR_5, VAR_0);

 while ((VAR_11 = FUNC_4(&VAR_7)))
  FUNC_6(VAR_11);

 return -VAR_2;

finish:
 FUNC_14(VAR_5);
 return 0;
}
