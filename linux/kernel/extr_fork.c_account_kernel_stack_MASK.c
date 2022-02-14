
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int nr_pages; struct page** pages; } ;
struct task_struct {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct page*,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct page*) ;
 void* FUNC_6 (struct task_struct*) ;
 struct vm_struct* FUNC_7 (struct task_struct*) ;
 struct page* FUNC_8 (void*) ;

__attribute__((used)) static void FUNC_9(struct task_struct *VAR_5, int VAR_6)
{
 void *VAR_7 = FUNC_6(VAR_5);
 struct vm_struct *VAR_8 = FUNC_7(VAR_5);

 FUNC_1(FUNC_2(VAR_0) && VAR_3 % 1024 != 0);

 if (VAR_8) {
  int VAR_9;

  FUNC_0(VAR_8->nr_pages != VAR_4 / VAR_3);

  for (VAR_9 = 0; VAR_9 < VAR_4 / VAR_3; VAR_9++) {
   FUNC_4(FUNC_5(VAR_8->pages[VAR_9]),
         VAR_2,
         VAR_3 / 1024 * VAR_6);
  }
 } else {




  struct page *VAR_10 = FUNC_8(VAR_7);

  FUNC_4(FUNC_5(VAR_10), VAR_2,
        VAR_4 / 1024 * VAR_6);

  FUNC_3(VAR_10, VAR_1,
         VAR_6 * (VAR_4 / 1024));
 }
}
