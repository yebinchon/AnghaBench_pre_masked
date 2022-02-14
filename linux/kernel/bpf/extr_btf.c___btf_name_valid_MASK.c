
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct btf {char* strings; } ;


 int VAR_0 ;
 int FUNC_0 (char const,int,int) ;

__attribute__((used)) static bool FUNC_1(const struct btf *VAR_1, u32 VAR_2, bool VAR_3)
{

 const char *VAR_4 = &VAR_1->strings[VAR_2];
 const char *VAR_5;

 if (!FUNC_0(*VAR_4, 1, VAR_3))
  return 0;


 VAR_5 = VAR_4 + VAR_0;
 VAR_4++;
 while (*VAR_4 && VAR_4 < VAR_5) {
  if (!FUNC_0(*VAR_4, 0, VAR_3))
   return 0;
  VAR_4++;
 }

 return !*VAR_4;
}
