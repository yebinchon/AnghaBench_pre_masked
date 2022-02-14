
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {unsigned long private; TYPE_1__* mapping; } ;
struct extent_buffer {int bflags; struct page** pages; } ;
struct TYPE_2__ {int private_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct extent_buffer *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5 = !FUNC_11(VAR_1, &VAR_2->bflags);

 FUNC_0(FUNC_5(VAR_2));

 VAR_4 = FUNC_6(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  struct page *VAR_6 = VAR_2->pages[VAR_3];

  if (!VAR_6)
   continue;
  if (VAR_5)
   FUNC_9(&VAR_6->mapping->private_lock);







  if (FUNC_3(VAR_6) &&
      VAR_6->private == (unsigned long)VAR_2) {
   FUNC_0(FUNC_11(VAR_0, &VAR_2->bflags));
   FUNC_0(FUNC_2(VAR_6));
   FUNC_0(FUNC_4(VAR_6));




   FUNC_1(VAR_6);
   FUNC_8(VAR_6, 0);

   FUNC_7(VAR_6);
  }

  if (VAR_5)
   FUNC_10(&VAR_6->mapping->private_lock);


  FUNC_7(VAR_6);
 }
}
