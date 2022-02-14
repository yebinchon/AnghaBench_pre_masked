
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_page {int io_error; int page; TYPE_1__* dev; } ;
struct scrub_block {int page_count; scalar_t__ no_io_error_seen; struct scrub_page** pagev; } ;
struct btrfs_fs_info {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int bdev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bio*,int ,int ,int ) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int ) ;
 struct bio* FUNC_5 (int ) ;
 int FUNC_6 (struct scrub_block*) ;
 scalar_t__ FUNC_7 (struct btrfs_fs_info*,struct bio*,struct scrub_page*) ;

__attribute__((used)) static void FUNC_8(struct btrfs_fs_info *VAR_2,
       struct scrub_block *VAR_3)
{
 struct scrub_page *VAR_4 = VAR_3->pagev[0];
 struct bio *VAR_5;
 int VAR_6;


 FUNC_0(VAR_4->dev);
 if (!VAR_4->dev->bdev)
  goto out;

 VAR_5 = FUNC_5(VAR_0);
 FUNC_4(VAR_5, VAR_4->dev->bdev);

 for (VAR_6 = 0; VAR_6 < VAR_3->page_count; VAR_6++) {
  struct scrub_page *VAR_7 = VAR_3->pagev[VAR_6];

  FUNC_1(!VAR_7->page);
  FUNC_2(VAR_5, VAR_7->page, VAR_1, 0);
 }

 if (FUNC_7(VAR_2, VAR_5, VAR_4)) {
  FUNC_3(VAR_5);
  goto out;
 }

 FUNC_3(VAR_5);

 FUNC_6(VAR_3);

 return;
out:
 for (VAR_6 = 0; VAR_6 < VAR_3->page_count; VAR_6++)
  VAR_3->pagev[VAR_6]->io_error = 1;

 VAR_3->no_io_error_seen = 0;
}
