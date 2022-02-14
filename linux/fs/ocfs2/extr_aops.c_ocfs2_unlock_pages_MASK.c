
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_write_ctxt {int w_num_pages; int ** w_pages; int * w_target_page; scalar_t__ w_target_locked; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_write_ctxt *VAR_0)
{
 int VAR_1;






 if (VAR_0->w_target_locked) {
  FUNC_0(!VAR_0->w_target_page);
  for (VAR_1 = 0; VAR_1 < VAR_0->w_num_pages; VAR_1++) {
   if (VAR_0->w_target_page == VAR_0->w_pages[VAR_1]) {
    VAR_0->w_pages[VAR_1] = ((void*)0);
    break;
   }
  }
  FUNC_1(VAR_0->w_target_page);
  FUNC_3(VAR_0->w_target_page);
 }
 FUNC_2(VAR_0->w_pages, VAR_0->w_num_pages);
}
