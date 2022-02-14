
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dio_submit {int start_zero_done; int blkfactor; unsigned int block_in_file; unsigned int blkbits; unsigned int next_block_for_io; } ;
struct dio {int dummy; } ;
struct buffer_head {int dummy; } ;


 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct dio*,struct dio_submit*,struct page*,int ,unsigned int,unsigned int,struct buffer_head*) ;

__attribute__((used)) static inline void FUNC_3(struct dio *VAR_0, struct dio_submit *VAR_1,
  int VAR_2, struct buffer_head *VAR_3)
{
 unsigned VAR_4;
 unsigned VAR_5;
 unsigned VAR_6;
 struct page *VAR_7;

 VAR_1->start_zero_done = 1;
 if (!VAR_1->blkfactor || !FUNC_1(VAR_3))
  return;

 VAR_4 = 1 << VAR_1->blkfactor;
 VAR_5 = VAR_1->block_in_file & (VAR_4 - 1);

 if (!VAR_5)
  return;





 if (VAR_2)
  VAR_5 = VAR_4 - VAR_5;

 VAR_6 = VAR_5 << VAR_1->blkbits;

 VAR_7 = FUNC_0(0);
 if (FUNC_2(VAR_0, VAR_1, VAR_7, 0, VAR_6,
    VAR_1->next_block_for_io, VAR_3))
  return;

 VAR_1->next_block_for_io += VAR_5;
}
