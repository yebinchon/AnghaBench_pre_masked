
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct metapage {int nohomeok; struct page* page; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct metapage*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static inline void FUNC_5(struct metapage *VAR_0)
{
 struct page *VAR_1 = VAR_0->page;
 FUNC_1(VAR_1);
 if (!VAR_0->nohomeok++) {
  FUNC_2(VAR_0);
  FUNC_0(VAR_1);
  FUNC_4(VAR_1);
 }
 FUNC_3(VAR_1);
}
