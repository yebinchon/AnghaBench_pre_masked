
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_discard_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;
struct list_head {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct discard_policy {scalar_t__ type; unsigned int max_requests; scalar_t__ sync; } ;
struct discard_cmd_control {int issued_discard; int queued_discard; struct list_head wait_list; struct list_head fstrim_list; } ;
struct discard_cmd {scalar_t__ state; unsigned int start; unsigned int len; unsigned int lstart; int list; int queued; int lock; int bio_ref; struct block_device* bdev; } ;
struct block_device {int dummy; } ;
struct bio {int bi_opf; int bi_end_io; struct discard_cmd* bi_private; } ;
typedef unsigned int block_t ;
struct TYPE_4__ {struct discard_cmd_control* dcc_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct block_device*,int ,int ,int ,int ,struct bio**) ;
 int FUNC_4 (struct f2fs_sb_info*,unsigned int,unsigned int) ;
 int FUNC_5 (struct f2fs_sb_info*,struct block_device*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (int *) ;
 struct request_queue* FUNC_7 (struct block_device*) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int FUNC_10 (struct f2fs_sb_info*,int ,int) ;
 scalar_t__ FUNC_11 (struct f2fs_sb_info*,int ) ;
 int FUNC_12 (int *,struct list_head*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (struct bio*) ;
 scalar_t__ FUNC_16 (struct f2fs_sb_info*,int ) ;
 int FUNC_17 (struct block_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_18(struct f2fs_sb_info *VAR_11,
      struct discard_policy *VAR_12,
      struct discard_cmd *VAR_13,
      unsigned int *VAR_14)
{
 struct block_device *VAR_15 = VAR_13->bdev;
 struct request_queue *VAR_16 = FUNC_7(VAR_15);
 unsigned int VAR_17 =
   FUNC_1(VAR_16->limits.max_discard_sectors);
 struct discard_cmd_control *VAR_18 = FUNC_2(VAR_11)->dcc_info;
 struct list_head *VAR_19 = (VAR_12->type == VAR_0) ?
     &(VAR_18->fstrim_list) : &(VAR_18->wait_list);
 int VAR_20 = VAR_12->sync ? VAR_8 : 0;
 block_t VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25 = 0;

 if (VAR_13->state != VAR_2)
  return 0;

 if (FUNC_11(VAR_11, VAR_9))
  return 0;

 FUNC_17(VAR_15, VAR_13->start, VAR_13->len);

 VAR_21 = VAR_13->lstart;
 VAR_22 = VAR_13->start;
 VAR_23 = VAR_13->len;
 VAR_24 = VAR_23;

 VAR_13->len = 0;

 while (VAR_24 && *VAR_14 < VAR_12->max_requests && !VAR_25) {
  struct bio *VAR_26 = ((void*)0);
  unsigned long VAR_27;
  bool VAR_28 = 1;

  if (VAR_23 > VAR_17) {
   VAR_23 = VAR_17;
   VAR_28 = 0;
  }

  (*VAR_14)++;
  if (*VAR_14 == VAR_12->max_requests)
   VAR_28 = 1;

  VAR_13->len += VAR_23;

  if (FUNC_16(VAR_11, VAR_5)) {
   FUNC_9(VAR_5);
   VAR_25 = -VAR_4;
   goto submit;
  }
  VAR_25 = FUNC_3(VAR_15,
     FUNC_0(VAR_22),
     FUNC_0(VAR_23),
     VAR_7, 0, &VAR_26);
submit:
  if (VAR_25) {
   FUNC_13(&VAR_13->lock, VAR_27);
   if (VAR_13->state == VAR_1)
    VAR_13->state = VAR_3;
   FUNC_14(&VAR_13->lock, VAR_27);

   break;
  }

  FUNC_8(VAR_11, !VAR_26);





  FUNC_13(&VAR_13->lock, VAR_27);
  if (VAR_28)
   VAR_13->state = VAR_3;
  else
   VAR_13->state = VAR_1;
  VAR_13->bio_ref++;
  FUNC_14(&VAR_13->lock, VAR_27);

  FUNC_6(&VAR_18->queued_discard);
  VAR_13->queued++;
  FUNC_12(&VAR_13->list, VAR_19);


  FUNC_4(VAR_11, VAR_21, VAR_21 + VAR_23);

  VAR_26->bi_private = VAR_13;
  VAR_26->bi_end_io = VAR_10;
  VAR_26->bi_opf |= VAR_20;
  FUNC_15(VAR_26);

  FUNC_6(&VAR_18->issued_discard);

  FUNC_10(VAR_11, VAR_6, 1);

  VAR_21 += VAR_23;
  VAR_22 += VAR_23;
  VAR_24 -= VAR_23;
  VAR_23 = VAR_24;
 }

 if (!VAR_25 && VAR_23)
  FUNC_5(VAR_11, VAR_15, VAR_21, VAR_22, VAR_23);
 return VAR_25;
}
