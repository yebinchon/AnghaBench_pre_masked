
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scrub_page {int io_error; int physical; int page; TYPE_1__* dev; } ;
struct scrub_block {int no_io_error_seen; int page_count; struct scrub_page** pagev; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_4__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; } ;
struct TYPE_3__ {int * bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bio*,int ,int ,int ) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int *) ;
 struct bio* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 scalar_t__ FUNC_6 (struct scrub_page*) ;
 int FUNC_7 (struct scrub_block*) ;
 void FUNC_8 (struct btrfs_fs_info*,struct scrub_block*) ;

__attribute__((used)) static void FUNC_9(struct btrfs_fs_info *VAR_2,
    struct scrub_block *VAR_3,
    int VAR_4)
{
 int VAR_5;

 VAR_3->no_io_error_seen = 1;


 if (!VAR_4 && FUNC_6(VAR_3->pagev[0]))
  return FUNC_8(VAR_2, VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_3->page_count; VAR_5++) {
  struct bio *VAR_6;
  struct scrub_page *VAR_7 = VAR_3->pagev[VAR_5];

  if (VAR_7->dev->bdev == ((void*)0)) {
   VAR_7->io_error = 1;
   VAR_3->no_io_error_seen = 0;
   continue;
  }

  FUNC_0(!VAR_7->page);
  VAR_6 = FUNC_4(1);
  FUNC_3(VAR_6, VAR_7->dev->bdev);

  FUNC_1(VAR_6, VAR_7->page, VAR_0, 0);
  VAR_6->bi_iter.bi_sector = VAR_7->physical >> 9;
  VAR_6->bi_opf = VAR_1;

  if (FUNC_5(VAR_6)) {
   VAR_7->io_error = 1;
   VAR_3->no_io_error_seen = 0;
  }

  FUNC_2(VAR_6);
 }

 if (VAR_3->no_io_error_seen)
  FUNC_7(VAR_3);
}
