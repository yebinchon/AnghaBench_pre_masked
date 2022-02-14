
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int gfp_t ;


 int FUNC_0 (struct address_space*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct page* FUNC_2 (struct address_space*,int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static inline struct page *FUNC_4(
    struct address_space *VAR_1, pgoff_t VAR_2,
    int VAR_3, gfp_t VAR_4)
{
 if (FUNC_3(FUNC_0(VAR_1), VAR_0)) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
