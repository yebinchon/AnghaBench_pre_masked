
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char**,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_1, u16 *VAR_2, char **VAR_3)
{
 char *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(&VAR_1, "x");
 if (!VAR_4)
  goto err;
 VAR_5 = FUNC_0(VAR_4, 0, VAR_2);
 if (VAR_5)
  goto err;
 *VAR_3 = FUNC_2(&VAR_1, ".\n");
 if (!*VAR_3)
  goto err;

 return 0;

err:
 FUNC_1("Bad PCM format\n");
 return -VAR_0;
}
