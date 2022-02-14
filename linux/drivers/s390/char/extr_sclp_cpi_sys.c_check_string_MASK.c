
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char*,char const) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, const char *VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;

 VAR_4 = FUNC_3(VAR_3);

 if ((VAR_4 > 0) && (VAR_3[VAR_4 - 1] == '\n'))
  VAR_4--;

 if (VAR_4 > VAR_0)
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_4 ; VAR_5++) {
  if (FUNC_0(VAR_3[VAR_5]) || FUNC_1(VAR_3[VAR_5]) ||
      FUNC_2("$@# ", VAR_3[VAR_5]))
   continue;
  return -VAR_1;
 }

 return 0;
}
