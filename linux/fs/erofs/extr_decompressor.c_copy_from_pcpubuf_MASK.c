
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned short VAR_0 ;
 char* FUNC_0 (struct page* const) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int ) ;
 int FUNC_3 (int ,unsigned int const,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct page **VAR_2, const char *VAR_3,
         unsigned short VAR_4,
         unsigned int VAR_5)
{
 const char *VAR_6 = VAR_3 + VAR_5;
 const unsigned int VAR_7 = VAR_0 - VAR_4;
 const char *VAR_8 = VAR_3 - VAR_4;

 while (VAR_8 < VAR_6) {
  struct page *const VAR_9 = *VAR_2++;

  if (VAR_9) {
   char *VAR_10 = FUNC_0(VAR_9);

   if (VAR_8 >= VAR_3) {
    FUNC_2(VAR_10, VAR_8, FUNC_3(VAR_1, VAR_0,
             VAR_6 - VAR_8));
   } else {
    FUNC_2(VAR_10 + VAR_4, VAR_8 + VAR_4,
           FUNC_3(VAR_1, VAR_7, VAR_6 - VAR_8));
   }
   FUNC_1(VAR_10);
  }
  VAR_8 += VAR_0;
 }
}
