
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct extent_buffer {int bflags; struct page** pages; int len; int start; int fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 struct extent_buffer* FUNC_3 (int ,int ,int ) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (struct extent_buffer*,struct page*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int ,int *) ;

struct extent_buffer *FUNC_11(struct extent_buffer *VAR_3)
{
 int VAR_4;
 struct page *VAR_5;
 struct extent_buffer *VAR_6;
 int VAR_7 = FUNC_8(VAR_3);

 VAR_6 = FUNC_3(VAR_3->fs_info, VAR_3->start, VAR_3->len);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  VAR_5 = FUNC_4(VAR_2);
  if (!VAR_5) {
   FUNC_6(VAR_6);
   return ((void*)0);
  }
  FUNC_5(VAR_6, VAR_5);
  FUNC_2(FUNC_0(VAR_5));
  FUNC_1(VAR_5);
  VAR_6->pages[VAR_4] = VAR_5;
  FUNC_7(FUNC_9(VAR_5), FUNC_9(VAR_3->pages[VAR_4]));
 }

 FUNC_10(VAR_1, &VAR_6->bflags);
 FUNC_10(VAR_0, &VAR_6->bflags);

 return VAR_6;
}
