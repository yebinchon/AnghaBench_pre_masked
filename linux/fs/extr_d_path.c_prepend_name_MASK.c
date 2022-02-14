
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qstr {int len; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(char **VAR_1, int *VAR_2, const struct qstr *VAR_3)
{
 const char *VAR_4 = FUNC_1(&VAR_3->name);
 u32 VAR_5 = FUNC_0(VAR_3->len);
 char *VAR_6;

 *VAR_2 -= VAR_5 + 1;
 if (*VAR_2 < 0)
  return -VAR_0;
 VAR_6 = *VAR_1 -= VAR_5 + 1;
 *VAR_6++ = '/';
 while (VAR_5--) {
  char VAR_7 = *VAR_4++;
  if (!VAR_7)
   break;
  *VAR_6++ = VAR_7;
 }
 return 0;
}
