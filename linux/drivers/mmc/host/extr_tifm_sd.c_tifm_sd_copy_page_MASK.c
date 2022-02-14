
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned char* FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_0, unsigned int VAR_1,
         struct page *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4)
{
 unsigned char *VAR_5 = FUNC_0(VAR_2) + VAR_3;
 unsigned char *VAR_6 = FUNC_0(VAR_0) + VAR_1;

 FUNC_2(VAR_6, VAR_5, VAR_4);

 FUNC_1(VAR_6 - VAR_1);
 FUNC_1(VAR_5 - VAR_3);
}
