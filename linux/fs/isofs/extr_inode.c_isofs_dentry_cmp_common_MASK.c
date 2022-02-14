
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; char* name; } ;


 scalar_t__ FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(
  unsigned int VAR_0, const char *VAR_1,
  const struct qstr *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;


 VAR_5 = VAR_2->len;
 VAR_6 = VAR_0;
 if (VAR_3) {
  while (VAR_5 && VAR_2->name[VAR_5-1] == '.')
   VAR_5--;
  while (VAR_6 && VAR_1[VAR_6-1] == '.')
   VAR_6--;
 }
 if (VAR_5 == VAR_6) {
  if (VAR_4) {
   if (FUNC_0(VAR_2->name, VAR_1, VAR_5) == 0)
    return 0;
  } else {
   if (FUNC_1(VAR_2->name, VAR_1, VAR_5) == 0)
    return 0;
  }
 }
 return 1;
}
