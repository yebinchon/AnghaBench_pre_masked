
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dio_submit {unsigned int blkbits; unsigned int const blkfactor; unsigned long block_in_file; unsigned long final_block_in_request; int head; size_t from; int tail; size_t to; unsigned int blocks_available; int next_block_for_io; int boundary; int start_zero_done; } ;
struct dio {scalar_t__ op; int result; int inode; } ;
struct buffer_head {unsigned int const b_size; int b_blocknr; int b_bdev; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 size_t VAR_1 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ,int,unsigned int const) ;
 struct page* FUNC_8 (struct dio*,struct dio_submit*) ;
 int FUNC_9 (struct dio*,struct dio_submit*,int ,struct buffer_head*) ;
 int FUNC_10 (struct dio*,struct dio_submit*,struct buffer_head*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct dio*,struct dio_submit*,struct page*,size_t,unsigned int,unsigned long,struct buffer_head*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct page*,size_t,int) ;

__attribute__((used)) static int FUNC_16(struct dio *VAR_3, struct dio_submit *VAR_4,
   struct buffer_head *VAR_5)
{
 const unsigned VAR_6 = VAR_4->blkbits;
 const unsigned VAR_7 = VAR_6 + VAR_4->blkfactor;
 int VAR_8 = 0;

 while (VAR_4->block_in_file < VAR_4->final_block_in_request) {
  struct page *VAR_9;
  size_t VAR_10, VAR_11;

  VAR_9 = FUNC_8(VAR_3, VAR_4);
  if (FUNC_2(VAR_9)) {
   VAR_8 = FUNC_3(VAR_9);
   goto out;
  }
  VAR_10 = VAR_4->head ? 0 : VAR_4->from;
  VAR_11 = (VAR_4->head == VAR_4->tail - 1) ? VAR_4->to : VAR_1;
  VAR_4->head++;

  while (VAR_10 < VAR_11) {
   unsigned VAR_12;
   unsigned VAR_13;
   unsigned VAR_14;

   if (VAR_4->blocks_available == 0) {



    unsigned long VAR_15;
    unsigned long VAR_16;

    VAR_8 = FUNC_10(VAR_3, VAR_4, VAR_5);
    if (VAR_8) {
     FUNC_12(VAR_9);
     goto out;
    }
    if (!FUNC_5(VAR_5))
     goto do_holes;

    VAR_4->blocks_available =
      VAR_5->b_size >> VAR_6;
    VAR_4->next_block_for_io =
     VAR_5->b_blocknr << VAR_4->blkfactor;
    if (FUNC_6(VAR_5)) {
     FUNC_7(
      VAR_5->b_bdev,
      VAR_5->b_blocknr,
      VAR_5->b_size >> VAR_7);
    }

    if (!VAR_4->blkfactor)
     goto do_holes;

    VAR_15 = (1 << VAR_4->blkfactor) - 1;
    VAR_16 = (VAR_4->block_in_file & VAR_15);
    if (!FUNC_6(VAR_5))
     VAR_4->next_block_for_io += VAR_16;
    VAR_4->blocks_available -= VAR_16;
   }
do_holes:

   if (!FUNC_5(VAR_5)) {
    loff_t VAR_17;


    if (VAR_3->op == VAR_2) {
     FUNC_12(VAR_9);
     return -VAR_0;
    }





    VAR_17 = FUNC_0(FUNC_11(VAR_3->inode),
       1 << VAR_6);
    if (VAR_4->block_in_file >=
      VAR_17 >> VAR_6) {

     FUNC_12(VAR_9);
     goto out;
    }
    FUNC_15(VAR_9, VAR_10, 1 << VAR_6);
    VAR_4->block_in_file++;
    VAR_10 += 1 << VAR_6;
    VAR_3->result += 1 << VAR_6;
    goto next_block;
   }






   if (FUNC_14(VAR_4->blkfactor && !VAR_4->start_zero_done))
    FUNC_9(VAR_3, VAR_4, 0, VAR_5);





   VAR_13 = VAR_4->blocks_available;
   VAR_14 = (VAR_11 - VAR_10) >> VAR_6;
   if (VAR_13 > VAR_14)
    VAR_13 = VAR_14;
   VAR_14 = VAR_4->final_block_in_request - VAR_4->block_in_file;
   if (VAR_13 > VAR_14)
    VAR_13 = VAR_14;
   VAR_12 = VAR_13 << VAR_6;
   FUNC_1(VAR_12 == 0);

   if (VAR_13 == VAR_4->blocks_available)
    VAR_4->boundary = FUNC_4(VAR_5);
   VAR_8 = FUNC_13(VAR_3, VAR_4, VAR_9,
        VAR_10,
        VAR_12,
        VAR_4->next_block_for_io,
        VAR_5);
   if (VAR_8) {
    FUNC_12(VAR_9);
    goto out;
   }
   VAR_4->next_block_for_io += VAR_13;

   VAR_4->block_in_file += VAR_13;
   VAR_10 += VAR_12;
   VAR_3->result += VAR_12;
   VAR_4->blocks_available -= VAR_13;
next_block:
   FUNC_1(VAR_4->block_in_file > VAR_4->final_block_in_request);
   if (VAR_4->block_in_file == VAR_4->final_block_in_request)
    break;
  }


  FUNC_12(VAR_9);
 }
out:
 return VAR_8;
}
