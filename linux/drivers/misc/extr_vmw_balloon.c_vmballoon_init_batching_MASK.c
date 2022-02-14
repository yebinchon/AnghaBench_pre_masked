
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon_batch_entry {int dummy; } ;
struct vmballoon {int batch_max_pages; int batch_page; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct vmballoon *VAR_5)
{
 struct page *VAR_6;

 VAR_6 = FUNC_0(VAR_1 | VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_5->batch_page = FUNC_1(VAR_6);
 VAR_5->batch_max_pages = VAR_2 / sizeof(struct vmballoon_batch_entry);

 FUNC_2(&VAR_4);

 return 0;
}
