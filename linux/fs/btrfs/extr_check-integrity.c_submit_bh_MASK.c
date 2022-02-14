
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct buffer_head {scalar_t__ b_size; int b_blocknr; int b_end_io; struct btrfsic_block* b_private; TYPE_1__* b_bdev; int b_data; } ;
struct TYPE_6__ {int bh; } ;
struct btrfsic_block {int submit_bio_bh_rw; int * next_in_same_bio; TYPE_3__ orig_bio_bh_end_io; struct btrfsic_block* orig_bio_bh_private; scalar_t__ flush_gen; scalar_t__ iodone_w_error; scalar_t__ never_written; scalar_t__ is_iodone; } ;
struct btrfsic_dev_state {scalar_t__ last_flush_gen; struct btrfsic_block dummy_block_for_bio_bh_flush; int name; TYPE_2__* state; } ;
struct TYPE_5__ {int print_mask; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct btrfsic_dev_state* FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct btrfsic_dev_state*,int,int *,int,int *,int *,struct buffer_head*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int,int,struct buffer_head*) ;

int FUNC_6(int VAR_8, int VAR_9, struct buffer_head *VAR_10)
{
 struct btrfsic_dev_state *VAR_11;

 if (!VAR_6)
  return FUNC_5(VAR_8, VAR_9, VAR_10);

 FUNC_2(&VAR_7);


 VAR_11 = FUNC_0(VAR_10->b_bdev->bd_dev);


 if (((void*)0) != VAR_11 &&
     (VAR_8 == VAR_3) && VAR_10->b_size > 0) {
  u64 VAR_12;

  VAR_12 = VAR_2 * VAR_10->b_blocknr;
  if (VAR_11->state->print_mask &
      VAR_0)
   FUNC_4("submit_bh(op=0x%x,0x%x, blocknr=%llu (bytenr %llu), size=%zu, data=%p, bdev=%p)\n",
          VAR_8, VAR_9, (unsigned long long)VAR_10->b_blocknr,
          VAR_12, VAR_10->b_size, VAR_10->b_data, VAR_10->b_bdev);
  FUNC_1(VAR_11, VAR_12,
           &VAR_10->b_data, 1, ((void*)0),
           ((void*)0), VAR_10, VAR_9);
 } else if (((void*)0) != VAR_11 && (VAR_9 & VAR_4)) {
  if (VAR_11->state->print_mask &
      VAR_0)
   FUNC_4("submit_bh(op=0x%x,0x%x FLUSH, bdev=%p)\n",
          VAR_8, VAR_9, VAR_10->b_bdev);
  if (!VAR_11->dummy_block_for_bio_bh_flush.is_iodone) {
   if ((VAR_11->state->print_mask &
        (VAR_0 |
         VAR_1)))
    FUNC_4("btrfsic_submit_bh(%s) with FLUSH but dummy block already in use (ignored)!\n",
           VAR_11->name);
  } else {
   struct btrfsic_block *const VAR_13 =
    &VAR_11->dummy_block_for_bio_bh_flush;

   VAR_13->is_iodone = 0;
   VAR_13->never_written = 0;
   VAR_13->iodone_w_error = 0;
   VAR_13->flush_gen = VAR_11->last_flush_gen + 1;
   VAR_13->submit_bio_bh_rw = VAR_9;
   VAR_13->orig_bio_bh_private = VAR_10->b_private;
   VAR_13->orig_bio_bh_end_io.bh = VAR_10->b_end_io;
   VAR_13->next_in_same_bio = ((void*)0);
   VAR_10->b_private = VAR_13;
   VAR_10->b_end_io = VAR_5;
  }
 }
 FUNC_3(&VAR_7);
 return FUNC_5(VAR_8, VAR_9, VAR_10);
}
