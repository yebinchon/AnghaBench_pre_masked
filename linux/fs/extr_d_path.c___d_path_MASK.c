
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char**,int*,char*,int) ;
 int FUNC_2 (struct path const*,struct path const*,char**,int*) ;

char *FUNC_3(const struct path *VAR_0,
        const struct path *VAR_1,
        char *VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_2 + VAR_3;
 int VAR_5;

 FUNC_1(&VAR_4, &VAR_3, "\0", 1);
 VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_4, &VAR_3);

 if (VAR_5 < 0)
  return FUNC_0(VAR_5);
 if (VAR_5 > 0)
  return ((void*)0);
 return VAR_4;
}
