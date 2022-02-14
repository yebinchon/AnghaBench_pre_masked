
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;


 int FUNC_0 (int ,struct buffer_head*) ;
 struct buffer_head* FUNC_1 (struct page*) ;
 int FUNC_2 (struct buffer_head*) ;

void FUNC_3(struct gfs2_inode *VAR_0, struct page *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5 = VAR_4->b_size;
 struct buffer_head *VAR_6;
 unsigned int VAR_7 = VAR_2 + VAR_3;
 unsigned int VAR_8, VAR_9;

 for (VAR_6 = VAR_4, VAR_8 = 0; VAR_6 != VAR_4 || !VAR_8;
      VAR_6 = VAR_6->b_this_page, VAR_8 = VAR_9) {
  VAR_9 = VAR_8 + VAR_5;
  if (VAR_9 <= VAR_2)
   continue;
  if (VAR_8 >= VAR_7)
   break;
  FUNC_2(VAR_6);
  FUNC_0(VAR_0->i_gl, VAR_6);
 }
}
