
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,char const*) ;

__attribute__((used)) static u32 FUNC_3(u32 *VAR_0,
         bool VAR_1,
         const char *VAR_2, const char *VAR_3)
{
 char *VAR_4 = (char *)VAR_0;
 u32 VAR_5 = 0;


 VAR_5 += FUNC_2(VAR_4 + VAR_5, VAR_1, VAR_2);


 if (VAR_1)
  *(VAR_4 + VAR_5) = 1;
 VAR_5++;


 VAR_5 += FUNC_2(VAR_4 + VAR_5, VAR_1, VAR_3);


 VAR_5 += FUNC_1(VAR_4 + VAR_5, VAR_1, VAR_5);

 return FUNC_0(VAR_5);
}
