
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (char*,int) ;
 struct page* FUNC_3 (unsigned int) ;

__attribute__((used)) static inline void
FUNC_4(unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3 = 0;




 VAR_1 = FUNC_0(VAR_1);
 VAR_2 = FUNC_0(VAR_2);

 while (VAR_1 < VAR_2) {
  struct page *VAR_4;






  VAR_4 = FUNC_3(VAR_1);
  FUNC_1(VAR_4);

  VAR_1 += VAR_0;
  VAR_3 += VAR_0 / 1024;
 }

 FUNC_2("acornfb: freed %dK memory\n", VAR_3);
}
