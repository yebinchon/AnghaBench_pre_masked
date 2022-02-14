
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char**,int*,char*,int) ;
 int FUNC_2 (struct path const*,struct path*,char**,int*) ;

char *FUNC_3(const struct path *VAR_1,
        char *VAR_2, int VAR_3)
{
 struct path VAR_4 = {};
 char *VAR_5 = VAR_2 + VAR_3;
 int VAR_6;

 FUNC_1(&VAR_5, &VAR_3, "\0", 1);
 VAR_6 = FUNC_2(VAR_1, &VAR_4, &VAR_5, &VAR_3);

 if (VAR_6 > 1)
  VAR_6 = -VAR_0;
 if (VAR_6 < 0)
  return FUNC_0(VAR_6);
 return VAR_5;
}
