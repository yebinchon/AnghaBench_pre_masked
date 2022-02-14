
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct buffer_head {int (* b_end_io ) (struct buffer_head*,int) ;scalar_t__ b_private; } ;
struct btrfsic_dev_state {int last_flush_gen; int name; TYPE_2__* state; } ;
struct TYPE_3__ {int (* bh ) (struct buffer_head*,int) ;} ;
struct btrfsic_block {int iodone_w_error; int submit_bio_bh_rw; int is_iodone; TYPE_1__ orig_bio_bh_end_io; scalar_t__ orig_bio_bh_private; scalar_t__ flush_gen; int mirror_num; int dev_bytenr; struct btrfsic_dev_state* dev_state; int logical_bytenr; } ;
struct TYPE_4__ {int print_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,struct btrfsic_block*) ;
 int FUNC_2 (char*,int,int ,...) ;
 int FUNC_3 (struct buffer_head*,int) ;

__attribute__((used)) static void FUNC_4(struct buffer_head *VAR_3, int VAR_4)
{
 struct btrfsic_block *VAR_5 = (struct btrfsic_block *)VAR_3->b_private;
 int VAR_6 = !VAR_4;
 struct btrfsic_dev_state *VAR_7;

 FUNC_0(((void*)0) == VAR_5);
 VAR_7 = VAR_5->dev_state;
 if ((VAR_7->state->print_mask & VAR_0))
  FUNC_2("bh_end_io(error=%d) for %c @%llu (%s/%llu/%d)\n",
         VAR_6,
         FUNC_1(VAR_7->state, VAR_5),
         VAR_5->logical_bytenr, VAR_5->dev_state->name,
         VAR_5->dev_bytenr, VAR_5->mirror_num);

 VAR_5->iodone_w_error = VAR_6;
 if (VAR_5->submit_bio_bh_rw & VAR_2) {
  VAR_7->last_flush_gen++;
  if ((VAR_7->state->print_mask &
       VAR_0))
   FUNC_2("bh_end_io() new %s flush_gen=%llu\n",
          VAR_7->name, VAR_7->last_flush_gen);
 }
 if (VAR_5->submit_bio_bh_rw & VAR_1)
  VAR_5->flush_gen = 0;

 VAR_3->b_private = VAR_5->orig_bio_bh_private;
 VAR_3->b_end_io = VAR_5->orig_bio_bh_end_io.bh;
 VAR_5->is_iodone = 1;
 VAR_3->b_end_io(VAR_3, VAR_4);
}
