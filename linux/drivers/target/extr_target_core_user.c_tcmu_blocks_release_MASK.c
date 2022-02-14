
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct page* FUNC_2 (struct radix_tree_root*,int) ;

__attribute__((used)) static void FUNC_3(struct radix_tree_root *VAR_1,
    int VAR_2, int VAR_3)
{
 int VAR_4;
 struct page *VAR_5;

 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_2(VAR_1, VAR_4);
  if (VAR_5) {
   FUNC_0(VAR_5);
   FUNC_1(&VAR_0);
  }
 }
}
