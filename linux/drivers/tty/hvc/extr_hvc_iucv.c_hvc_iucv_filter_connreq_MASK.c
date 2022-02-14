
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const*,size_t) ;
 char* FUNC_1 (char const*,int,int ) ;

__attribute__((used)) static int FUNC_2(u8 VAR_3[8])
{
 const char *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;


 if (!VAR_2)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = VAR_1 + (8 * VAR_6);






  VAR_4 = FUNC_1(VAR_5, 8, VAR_0);
  VAR_7 = (VAR_4) ? VAR_4 - VAR_5 : 8;
  if (0 == FUNC_0(VAR_3, VAR_5, VAR_7))
   return 0;
 }
 return 1;
}
