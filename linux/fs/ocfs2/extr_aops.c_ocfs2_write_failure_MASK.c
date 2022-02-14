
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ocfs2_write_ctxt {int w_num_pages; int w_handle; struct page** w_pages; scalar_t__ w_target_page; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,struct inode*,int,unsigned int) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (struct page*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_1,
    struct ocfs2_write_ctxt *VAR_2,
    loff_t VAR_3, unsigned VAR_4)
{
 int VAR_5;
 unsigned VAR_6 = VAR_3 & (VAR_0 - 1),
  VAR_7 = VAR_3 + VAR_4;
 struct page *VAR_8;

 if (VAR_2->w_target_page)
  FUNC_3(VAR_2->w_target_page, VAR_6, VAR_7);

 for(VAR_5 = 0; VAR_5 < VAR_2->w_num_pages; VAR_5++) {
  VAR_8 = VAR_2->w_pages[VAR_5];

  if (VAR_8 && FUNC_4(VAR_8)) {
   if (FUNC_2(VAR_1))
    FUNC_1(VAR_2->w_handle, VAR_1,
          VAR_3, VAR_4);

   FUNC_0(VAR_8, VAR_6, VAR_7);
  }
 }
}
