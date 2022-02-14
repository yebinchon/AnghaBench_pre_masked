
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct btrfs_dio_private {int errors; int orig_bio; TYPE_3__* dio_bio; int pending_bios; int inode; scalar_t__ (* subio_endio ) (int ,int ,scalar_t__) ;} ;
struct TYPE_7__ {int bi_size; scalar_t__ bi_sector; } ;
struct bio {TYPE_2__ bi_iter; int bi_opf; scalar_t__ bi_status; struct btrfs_dio_private* bi_private; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_9__ {TYPE_1__* root; } ;
struct TYPE_8__ {int bi_status; } ;
struct TYPE_6__ {int fs_info; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (int ,char*,int ,int ,int ,unsigned long long,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct bio *VAR_1)
{
 struct btrfs_dio_private *VAR_2 = VAR_1->bi_private;
 blk_status_t VAR_3 = VAR_1->bi_status;

 if (VAR_3)
  FUNC_8(FUNC_0(VAR_2->inode)->root->fs_info,
      "direct IO failed ino %llu rw %d,%u sector %#Lx len %u err no %d",
      FUNC_6(FUNC_0(VAR_2->inode)), FUNC_4(VAR_1),
      VAR_1->bi_opf,
      (unsigned long long)VAR_1->bi_iter.bi_sector,
      VAR_1->bi_iter.bi_size, VAR_3);

 if (VAR_2->subio_endio)
  VAR_3 = VAR_2->subio_endio(VAR_2->inode, FUNC_7(VAR_1), VAR_3);

 if (VAR_3) {






  VAR_2->errors = 1;
 }


 if (!FUNC_1(&VAR_2->pending_bios))
  goto out;

 if (VAR_2->errors) {
  FUNC_3(VAR_2->orig_bio);
 } else {
  VAR_2->dio_bio->bi_status = VAR_0;
  FUNC_2(VAR_2->orig_bio);
 }
out:
 FUNC_5(VAR_1);
}
