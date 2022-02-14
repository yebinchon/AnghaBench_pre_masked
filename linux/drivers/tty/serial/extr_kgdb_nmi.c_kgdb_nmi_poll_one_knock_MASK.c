
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read_char ) () ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
 static int VAR_5;
 int VAR_6 = -1;
 const char *VAR_7 = VAR_3;
 size_t VAR_8 = FUNC_3(VAR_7);
 bool VAR_9 = 0;

 VAR_6 = VAR_1->read_char();
 if (VAR_6 == VAR_0)
  return VAR_6;

 if (!VAR_2 && (VAR_6 == '\r' || VAR_6 == '\n')) {
  return 1;
 } else if (VAR_6 == VAR_7[VAR_5]) {
  VAR_5 = (VAR_5 + 1) % VAR_8;
  if (!VAR_5)
   return 1;
  VAR_9 = 1;
 } else {
  VAR_5 = 0;
 }

 if (FUNC_0(&VAR_4)) {
  FUNC_2(VAR_6);
  return 0;
 }

 if (VAR_9) {
  FUNC_1("%c", VAR_6);
  return 0;
 }

 FUNC_1("\r%s %s to enter the debugger> %*s",
     VAR_2 ? "Type" : "Hit",
     VAR_2 ? VAR_7 : "<return>", (int)VAR_8, "");
 while (VAR_8--)
  FUNC_1("\b");
 return 0;
}
