
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 (char*,char*,unsigned long) ;
 int FUNC_2 (char*,char*,unsigned long) ;
 char* FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_0, struct page *VAR_1,
         unsigned long VAR_2, unsigned long VAR_3,
         unsigned long VAR_4)
{
 char *VAR_5 = FUNC_3(VAR_0);
 char *VAR_6;
 int VAR_7 = 0;

 if (VAR_0 != VAR_1) {
  VAR_6 = FUNC_3(VAR_1);
 } else {
  VAR_6 = VAR_5;
  if (FUNC_0(VAR_3, VAR_2, VAR_4))
   VAR_7 = 1;
 }

 if (VAR_7)
  FUNC_2(VAR_5 + VAR_2, VAR_6 + VAR_3, VAR_4);
 else
  FUNC_1(VAR_5 + VAR_2, VAR_6 + VAR_3, VAR_4);
}
