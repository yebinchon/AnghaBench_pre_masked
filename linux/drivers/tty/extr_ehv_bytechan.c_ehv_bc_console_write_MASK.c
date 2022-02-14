
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct console *VAR_2, const char *VAR_3,
     unsigned int VAR_4)
{
 char VAR_5[VAR_0];
 unsigned int VAR_6, VAR_7 = 0;
 char VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_8 = *VAR_3++;

  if (VAR_8 == '\n')
   VAR_5[VAR_7++] = '\r';

  VAR_5[VAR_7++] = VAR_8;
  if (VAR_7 >= (VAR_0 - 1)) {
   if (FUNC_0(VAR_1, VAR_5, VAR_7))
    return;
   VAR_7 = 0;
  }
 }

 if (VAR_7)
  FUNC_0(VAR_1, VAR_5, VAR_7);
}
