
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_submit {unsigned int blkbits; unsigned int blkfactor; int block_in_file; int final_block_in_request; int (* get_block ) (int ,int,struct buffer_head*,int) ;} ;
struct dio {int page_errors; scalar_t__ op; int flags; int private; int inode; } ;
struct buffer_head {unsigned long b_size; int b_private; scalar_t__ b_state; } ;
typedef int sector_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct dio*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_5(struct dio *VAR_2, struct dio_submit *VAR_3,
      struct buffer_head *VAR_4)
{
 int VAR_5;
 sector_t VAR_6;
 sector_t VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 unsigned int VAR_10 = VAR_3->blkbits + VAR_3->blkfactor;
 loff_t VAR_11;





 VAR_5 = VAR_2->page_errors;
 if (VAR_5 == 0) {
  FUNC_0(VAR_3->block_in_file >= VAR_3->final_block_in_request);
  VAR_6 = VAR_3->block_in_file >> VAR_3->blkfactor;
  VAR_7 = (VAR_3->final_block_in_request - 1) >>
     VAR_3->blkfactor;
  VAR_8 = VAR_7 - VAR_6 + 1;

  VAR_4->b_state = 0;
  VAR_4->b_size = VAR_8 << VAR_10;
  VAR_9 = VAR_2->op == VAR_1;
  if (VAR_2->flags & VAR_0) {
   VAR_11 = FUNC_3(VAR_2->inode);
   if (VAR_11 && VAR_6 <= (VAR_11 - 1) >> VAR_10)
    VAR_9 = 0;
  }

  VAR_5 = (*VAR_3->get_block)(VAR_2->inode, VAR_6,
      VAR_4, VAR_9);


  VAR_2->private = VAR_4->b_private;

  if (VAR_5 == 0 && FUNC_1(VAR_4))
   VAR_5 = FUNC_2(VAR_2);
 }
 return VAR_5;
}
