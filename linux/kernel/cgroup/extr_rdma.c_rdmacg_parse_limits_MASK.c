
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int*) ;
 char* FUNC_2 (char**,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_1,
          int *VAR_2, unsigned long *VAR_3)
{
 char *VAR_4;
 int VAR_5 = -VAR_0;


 while ((VAR_4 = FUNC_2(&VAR_1, " ")) != ((void*)0)) {
  int VAR_6, VAR_7;

  VAR_6 = FUNC_1(VAR_4, &VAR_7);
  if (VAR_6 < 0)
   goto err;

  VAR_2[VAR_6] = VAR_7;
  *VAR_3 |= FUNC_0(VAR_6);
 }
 return 0;

err:
 return VAR_5;
}
