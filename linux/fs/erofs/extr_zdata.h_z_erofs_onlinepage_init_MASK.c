
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z_erofs_onlinepage_t ;
struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,unsigned long) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void FUNC_4(struct page *VAR_0)
{
 union {
  z_erofs_onlinepage_t o;
  unsigned long v;

 } VAR_1 = { .o = FUNC_0(1) };

 FUNC_2(VAR_0, VAR_1.v);
 FUNC_3();
 FUNC_1(VAR_0);
}
