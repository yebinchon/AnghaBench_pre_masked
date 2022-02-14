
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scrub_page {int physical_for_dev_replace; scalar_t__ logical; int page; } ;
struct scrub_ctx {scalar_t__ pages_per_wr_bio; int wr_lock; TYPE_1__* wr_tgtdev; struct scrub_bio* wr_curr_bio; } ;
struct scrub_bio {int page_count; int physical; scalar_t__ logical; struct scrub_page** pagev; struct bio* bio; scalar_t__ status; TYPE_1__* dev; struct scrub_ctx* sctx; } ;
struct TYPE_4__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; int bi_end_io; struct scrub_bio* bi_private; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bio*,int ,int,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 struct bio* FUNC_3 (scalar_t__) ;
 struct scrub_bio* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct scrub_page*) ;
 int VAR_5 ;
 int FUNC_8 (struct scrub_ctx*) ;

__attribute__((used)) static int FUNC_9(struct scrub_ctx *VAR_6,
        struct scrub_page *VAR_7)
{
 struct scrub_bio *VAR_8;
 int VAR_9;

 FUNC_5(&VAR_6->wr_lock);
again:
 if (!VAR_6->wr_curr_bio) {
  VAR_6->wr_curr_bio = FUNC_4(sizeof(*VAR_6->wr_curr_bio),
           VAR_2);
  if (!VAR_6->wr_curr_bio) {
   FUNC_6(&VAR_6->wr_lock);
   return -VAR_1;
  }
  VAR_6->wr_curr_bio->sctx = VAR_6;
  VAR_6->wr_curr_bio->page_count = 0;
 }
 VAR_8 = VAR_6->wr_curr_bio;
 if (VAR_8->page_count == 0) {
  struct bio *VAR_10;

  VAR_8->physical = VAR_7->physical_for_dev_replace;
  VAR_8->logical = VAR_7->logical;
  VAR_8->dev = VAR_6->wr_tgtdev;
  VAR_10 = VAR_8->bio;
  if (!VAR_10) {
   VAR_10 = FUNC_3(VAR_6->pages_per_wr_bio);
   VAR_8->bio = VAR_10;
  }

  VAR_10->bi_private = VAR_8;
  VAR_10->bi_end_io = VAR_5;
  FUNC_2(VAR_10, VAR_8->dev->bdev);
  VAR_10->bi_iter.bi_sector = VAR_8->physical >> 9;
  VAR_10->bi_opf = VAR_4;
  VAR_8->status = 0;
 } else if (VAR_8->physical + VAR_8->page_count * VAR_3 !=
     VAR_7->physical_for_dev_replace ||
     VAR_8->logical + VAR_8->page_count * VAR_3 !=
     VAR_7->logical) {
  FUNC_8(VAR_6);
  goto again;
 }

 VAR_9 = FUNC_0(VAR_8->bio, VAR_7->page, VAR_3, 0);
 if (VAR_9 != VAR_3) {
  if (VAR_8->page_count < 1) {
   FUNC_1(VAR_8->bio);
   VAR_8->bio = ((void*)0);
   FUNC_6(&VAR_6->wr_lock);
   return -VAR_0;
  }
  FUNC_8(VAR_6);
  goto again;
 }

 VAR_8->pagev[VAR_8->page_count] = VAR_7;
 FUNC_7(VAR_7);
 VAR_8->page_count++;
 if (VAR_8->page_count == VAR_6->pages_per_wr_bio)
  FUNC_8(VAR_6);
 FUNC_6(&VAR_6->wr_lock);

 return 0;
}
