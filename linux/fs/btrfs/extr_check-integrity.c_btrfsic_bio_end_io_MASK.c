
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfsic_dev_state {int last_flush_gen; int name; TYPE_2__* state; } ;
struct TYPE_3__ {int (* bio ) (struct bio*) ;} ;
struct btrfsic_block {int iodone_w_error; int submit_bio_bh_rw; int is_iodone; scalar_t__ flush_gen; struct btrfsic_block* next_in_same_bio; int mirror_num; int dev_bytenr; int logical_bytenr; struct btrfsic_dev_state* dev_state; TYPE_1__ orig_bio_bh_end_io; scalar_t__ orig_bio_bh_private; } ;
struct bio {int (* bi_end_io ) (struct bio*) ;scalar_t__ bi_status; scalar_t__ bi_private; } ;
struct TYPE_4__ {int print_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,struct btrfsic_block*) ;
 int FUNC_2 (char*,int ,int ,...) ;
 int FUNC_3 (struct bio*) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_3)
{
 struct btrfsic_block *VAR_4 = (struct btrfsic_block *)VAR_3->bi_private;
 int VAR_5;



 VAR_5 = 0;
 if (VAR_3->bi_status)
  VAR_5 = 1;

 FUNC_0(((void*)0) == VAR_4);
 VAR_3->bi_private = VAR_4->orig_bio_bh_private;
 VAR_3->bi_end_io = VAR_4->orig_bio_bh_end_io.bio;

 do {
  struct btrfsic_block *VAR_6;
  struct btrfsic_dev_state *const VAR_7 = VAR_4->dev_state;

  if ((VAR_7->state->print_mask &
       VAR_0))
   FUNC_2("bio_end_io(err=%d) for %c @%llu (%s/%llu/%d)\n",
          VAR_3->bi_status,
          FUNC_1(VAR_7->state, VAR_4),
          VAR_4->logical_bytenr, VAR_7->name,
          VAR_4->dev_bytenr, VAR_4->mirror_num);
  VAR_6 = VAR_4->next_in_same_bio;
  VAR_4->iodone_w_error = VAR_5;
  if (VAR_4->submit_bio_bh_rw & VAR_2) {
   VAR_7->last_flush_gen++;
   if ((VAR_7->state->print_mask &
        VAR_0))
    FUNC_2("bio_end_io() new %s flush_gen=%llu\n",
           VAR_7->name,
           VAR_7->last_flush_gen);
  }
  if (VAR_4->submit_bio_bh_rw & VAR_1)
   VAR_4->flush_gen = 0;

  VAR_4->is_iodone = 1;
  VAR_4 = VAR_6;
 } while (((void*)0) != VAR_4);

 VAR_3->bi_end_io(VAR_3);
}
