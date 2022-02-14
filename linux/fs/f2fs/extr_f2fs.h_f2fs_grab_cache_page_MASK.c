
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct page* FUNC_3 (struct address_space*,int ,int) ;
 struct page* FUNC_4 (struct address_space*,int ) ;
 struct page* FUNC_5 (struct address_space*,int ) ;
 struct page* FUNC_6 (struct address_space*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static inline struct page *FUNC_8(struct address_space *VAR_5,
      pgoff_t VAR_6, bool VAR_7)
{
 struct page *VAR_8;

 if (FUNC_1(VAR_1)) {
  if (!VAR_7)
   VAR_8 = FUNC_3(VAR_5, VAR_6,
       VAR_4 | VAR_3);
  else
   VAR_8 = FUNC_4(VAR_5, VAR_6);
  if (VAR_8)
   return VAR_8;

  if (FUNC_7(FUNC_0(VAR_5), VAR_2)) {
   FUNC_2(VAR_2);
   return ((void*)0);
  }
 }

 if (!VAR_7)
  return FUNC_5(VAR_5, VAR_6);
 return FUNC_6(VAR_5, VAR_6, VAR_0);
}
