
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_pcluster {int obj; struct page** compressed_pages; int clusterbits; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

int FUNC_7(struct address_space *VAR_0,
      struct page *VAR_1)
{
 struct z_erofs_pcluster *const VAR_2 = (void *)FUNC_5(VAR_1);
 const unsigned int VAR_3 = FUNC_0(VAR_2->clusterbits);
 int VAR_4 = 0;

 if (FUNC_3(&VAR_2->obj, 1)) {
  unsigned int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
   if (VAR_2->compressed_pages[VAR_5] == VAR_1) {
    FUNC_2(VAR_2->compressed_pages[VAR_5], ((void*)0));
    VAR_4 = 1;
    break;
   }
  }
  FUNC_4(&VAR_2->obj, 1);

  if (VAR_4) {
   FUNC_1(VAR_1);
   FUNC_6(VAR_1);
  }
 }
 return VAR_4;
}
