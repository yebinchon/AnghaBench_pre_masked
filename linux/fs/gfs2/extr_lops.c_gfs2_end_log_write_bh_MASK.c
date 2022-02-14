
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct buffer_head {scalar_t__ b_size; struct buffer_head* b_this_page; } ;
struct bio_vec {unsigned int bv_len; scalar_t__ bv_offset; struct page* bv_page; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct page*) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_5(struct gfs2_sbd *VAR_0,
      struct bio_vec *VAR_1,
      blk_status_t VAR_2)
{
 struct buffer_head *VAR_3, *VAR_4;
 struct page *VAR_5 = VAR_1->bv_page;
 unsigned VAR_6;

 VAR_3 = FUNC_3(VAR_5);
 VAR_6 = VAR_1->bv_len;
 while (FUNC_0(VAR_3) < VAR_1->bv_offset)
  VAR_3 = VAR_3->b_this_page;
 do {
  if (VAR_2)
   FUNC_2(VAR_3);
  FUNC_4(VAR_3);
  VAR_4 = VAR_3->b_this_page;
  VAR_6 -= VAR_3->b_size;
  FUNC_1(VAR_3);
  VAR_3 = VAR_4;
 } while(VAR_3 && VAR_6);
}
