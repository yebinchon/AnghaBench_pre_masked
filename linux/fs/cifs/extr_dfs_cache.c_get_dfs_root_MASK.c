
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (char const*,int,int ) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static inline char *FUNC_3(const char *VAR_3)
{
 char *VAR_4, *VAR_5;

 VAR_4 = FUNC_2(VAR_3 + 1, '\\');
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(VAR_4 + 1, '\\');
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_3, VAR_4 - VAR_3, VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 return VAR_5;
}
