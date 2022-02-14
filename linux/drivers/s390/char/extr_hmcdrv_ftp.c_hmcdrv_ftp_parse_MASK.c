
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmcdrv_ftp_cmdspec {scalar_t__ id; char* fname; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

__attribute__((used)) static int FUNC_3(char *VAR_2, struct hmcdrv_ftp_cmdspec *VAR_3)
{
 char *VAR_4;
 int VAR_5 = 0;

 VAR_3->id = VAR_1;
 VAR_3->fname = ((void*)0);

 while (*VAR_2 != '\0') {

  while (FUNC_2(*VAR_2))
   ++VAR_2;

  if (*VAR_2 == '\0')
   break;

  VAR_4 = VAR_2;

  switch (VAR_5) {
  case 0:
   while ((*VAR_2 != '\0') && !FUNC_2(*VAR_2))
    ++VAR_2;
   VAR_3->id = FUNC_0(VAR_4, VAR_2 - VAR_4);
   break;
  case 1:
   while ((*VAR_2 != '\0') && !FUNC_1(*VAR_2))
    ++VAR_2;
   VAR_3->fname = VAR_4;

  default:
   *VAR_2 = '\0';
   break;
  }

  ++VAR_5;
 }

 if (!VAR_3->fname || (VAR_3->id == VAR_1))
  return -VAR_0;

 return 0;
}
