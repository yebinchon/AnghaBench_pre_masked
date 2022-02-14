
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct f2fs_sb_info {int s_ndevs; TYPE_2__* sb; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef scalar_t__ block_t ;
struct TYPE_6__ {scalar_t__ start_blk; scalar_t__ end_blk; struct block_device* bdev; } ;
struct TYPE_5__ {struct block_device* s_bdev; } ;


 TYPE_3__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bio*,struct block_device*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;

struct block_device *FUNC_4(struct f2fs_sb_info *VAR_0,
    block_t VAR_1, struct bio *VAR_2)
{
 struct block_device *VAR_3 = VAR_0->sb->s_bdev;
 int VAR_4;

 if (FUNC_3(VAR_0)) {
  for (VAR_4 = 0; VAR_4 < VAR_0->s_ndevs; VAR_4++) {
   if (FUNC_0(VAR_4).start_blk <= VAR_1 &&
       FUNC_0(VAR_4).end_blk >= VAR_1) {
    VAR_1 -= FUNC_0(VAR_4).start_blk;
    VAR_3 = FUNC_0(VAR_4).bdev;
    break;
   }
  }
 }
 if (VAR_2) {
  FUNC_2(VAR_2, VAR_3);
  VAR_2->bi_iter.bi_sector = FUNC_1(VAR_1);
 }
 return VAR_3;
}
