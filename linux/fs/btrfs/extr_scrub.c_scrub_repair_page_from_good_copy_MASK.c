
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scrub_page {int physical; TYPE_4__* dev; int * page; scalar_t__ io_error; } ;
struct scrub_block {scalar_t__ checksum_error; scalar_t__ header_error; TYPE_1__* sctx; struct scrub_page** pagev; } ;
struct TYPE_7__ {int num_write_errors; } ;
struct btrfs_fs_info {TYPE_3__ dev_replace; } ;
struct TYPE_6__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; } ;
struct TYPE_8__ {int bdev; } ;
struct TYPE_5__ {struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*,int *,int,int ) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 struct bio* FUNC_6 (int) ;
 int FUNC_7 (struct btrfs_fs_info*,char*) ;
 scalar_t__ FUNC_8 (struct bio*) ;

__attribute__((used)) static int FUNC_9(struct scrub_block *VAR_4,
         struct scrub_block *VAR_5,
         int VAR_6, int VAR_7)
{
 struct scrub_page *VAR_8 = VAR_4->pagev[VAR_6];
 struct scrub_page *VAR_9 = VAR_5->pagev[VAR_6];
 struct btrfs_fs_info *VAR_10 = VAR_4->sctx->fs_info;

 FUNC_0(VAR_8->page == ((void*)0));
 FUNC_0(VAR_9->page == ((void*)0));
 if (VAR_7 || VAR_4->header_error ||
     VAR_4->checksum_error || VAR_8->io_error) {
  struct bio *VAR_11;
  int VAR_12;

  if (!VAR_8->dev->bdev) {
   FUNC_7(VAR_10,
    "scrub_repair_page_from_good_copy(bdev == NULL) is unexpected");
   return -VAR_1;
  }

  VAR_11 = FUNC_6(1);
  FUNC_4(VAR_11, VAR_8->dev->bdev);
  VAR_11->bi_iter.bi_sector = VAR_8->physical >> 9;
  VAR_11->bi_opf = VAR_3;

  VAR_12 = FUNC_2(VAR_11, VAR_9->page, VAR_2, 0);
  if (VAR_2 != VAR_12) {
   FUNC_3(VAR_11);
   return -VAR_1;
  }

  if (FUNC_8(VAR_11)) {
   FUNC_5(VAR_8->dev,
    VAR_0);
   FUNC_1(&VAR_10->dev_replace.num_write_errors);
   FUNC_3(VAR_11);
   return -VAR_1;
  }
  FUNC_3(VAR_11);
 }

 return 0;
}
