
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct spk_synth {int dummy; } ;


 char VAR_0 ;
 char const* FUNC_0 () ;
 int FUNC_1 (char,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static const char *FUNC_5(struct spk_synth *VAR_2, const char *VAR_3)
{
 u_char VAR_4;
 int VAR_5;

 while ((VAR_4 = *VAR_3)) {
  if (VAR_4 == '\n')
   VAR_4 = VAR_0;
  if (FUNC_2())
   return VAR_3;
  VAR_5 = 1000;
  while (FUNC_3())
   if (--VAR_5 <= 0)
    return FUNC_0();
  FUNC_1(VAR_4, VAR_1);
  FUNC_4(70);
  VAR_3++;
 }
 return ((void*)0);
}
