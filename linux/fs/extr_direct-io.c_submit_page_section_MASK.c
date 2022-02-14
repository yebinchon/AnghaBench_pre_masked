
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dio_submit {unsigned int cur_page_offset; int cur_page_len; scalar_t__ cur_page_block; int blkbits; int cur_page_fs_offset; int block_in_file; struct page* cur_page; scalar_t__ bio; scalar_t__ boundary; } ;
struct dio {scalar_t__ op; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dio*,struct dio_submit*) ;
 int FUNC_1 (struct dio*,struct dio_submit*,struct buffer_head*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static inline int
FUNC_5(struct dio *VAR_1, struct dio_submit *VAR_2, struct page *VAR_3,
      unsigned VAR_4, unsigned VAR_5, sector_t VAR_6,
      struct buffer_head *VAR_7)
{
 int VAR_8 = 0;

 if (VAR_1->op == VAR_0) {



  FUNC_4(VAR_5);
 }




 if (VAR_2->cur_page == VAR_3 &&
     VAR_2->cur_page_offset + VAR_2->cur_page_len == VAR_4 &&
     VAR_2->cur_page_block +
     (VAR_2->cur_page_len >> VAR_2->blkbits) == VAR_6) {
  VAR_2->cur_page_len += VAR_5;
  goto out;
 }




 if (VAR_2->cur_page) {
  VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_7);
  FUNC_3(VAR_2->cur_page);
  VAR_2->cur_page = ((void*)0);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_2(VAR_3);
 VAR_2->cur_page = VAR_3;
 VAR_2->cur_page_offset = VAR_4;
 VAR_2->cur_page_len = VAR_5;
 VAR_2->cur_page_block = VAR_6;
 VAR_2->cur_page_fs_offset = VAR_2->block_in_file << VAR_2->blkbits;
out:




 if (VAR_2->boundary) {
  VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_7);
  if (VAR_2->bio)
   FUNC_0(VAR_1, VAR_2);
  FUNC_3(VAR_2->cur_page);
  VAR_2->cur_page = ((void*)0);
 }
 return VAR_8;
}
