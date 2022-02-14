
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int,int,char*) ;
 scalar_t__ FUNC_1 (int,int,int,char const*) ;

__attribute__((used)) static inline void FUNC_2(const char *VAR_0, char *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = VAR_3, VAR_7 = VAR_2;
 int VAR_8 = (8 - (VAR_2 % 8)) & 7;

 VAR_2 = (VAR_2 + 7) & ~7;
 VAR_3 = (VAR_3 + 7) & ~7;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
   if (FUNC_1(VAR_5, VAR_4, VAR_2, VAR_0))
    FUNC_0(VAR_4, VAR_2 - 1 - VAR_5 - VAR_8,
      VAR_3, VAR_1);
  }
 }
}
