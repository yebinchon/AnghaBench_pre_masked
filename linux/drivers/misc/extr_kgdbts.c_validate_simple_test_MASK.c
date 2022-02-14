
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t idx; TYPE_1__* tst; } ;
struct TYPE_3__ {int (* put_handler ) (char*,char*) ;char* put; } ;


 int FUNC_0 (char*,char*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_1(char *VAR_1)
{
 char *VAR_2;

 if (VAR_0.tst[VAR_0.idx].put_handler)
  return VAR_0.tst[VAR_0.idx].put_handler(VAR_1,
   VAR_0.tst[VAR_0.idx].put);

 VAR_2 = VAR_0.tst[VAR_0.idx].put;
 if (*VAR_1 == '$')
  VAR_1++;

 while (*VAR_2 != '\0' && *VAR_1 != '\0') {



  if (*VAR_1 == '#' || *VAR_2 == '*')
   return 0;
  if (*VAR_1 != *VAR_2)
   return 1;

  VAR_2++;
  VAR_1++;
 }
 if (*VAR_2 == '\0' && (*VAR_1 == '\0' || *VAR_1 == '#'))
  return 0;

 return 1;
}
