
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (struct address_space*,unsigned long,int *) ;

__attribute__((used)) static inline struct page *FUNC_6(struct address_space *VAR_1,
  unsigned long VAR_2)
{
 struct page *VAR_3 = FUNC_5(VAR_1, VAR_2, ((void*)0));

 if (!FUNC_1(VAR_3)) {
  FUNC_3(VAR_3);
  if (!FUNC_2(VAR_3))
   return VAR_3;
  FUNC_4(VAR_3);
  return FUNC_0(-VAR_0);
 }
 return VAR_3;
}
