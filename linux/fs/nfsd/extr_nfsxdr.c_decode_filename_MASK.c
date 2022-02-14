
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,char**,unsigned int*,int ) ;

__attribute__((used)) static __be32 *
FUNC_1(__be32 *VAR_1, char **VAR_2, unsigned int *VAR_3)
{
 char *VAR_4;
 unsigned int VAR_5;

 if ((VAR_1 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0)) != ((void*)0)) {
  for (VAR_5 = 0, VAR_4 = *VAR_2; VAR_5 < *VAR_3; VAR_5++, VAR_4++) {
   if (*VAR_4 == '\0' || *VAR_4 == '/')
    return ((void*)0);
  }
 }

 return VAR_1;
}
