
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct spk_synth {int dummy; } ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static const char *FUNC_1(struct spk_synth *VAR_1, const char *VAR_2)
{
 u_char VAR_3;

 while ((VAR_3 = *VAR_2)) {
  if (VAR_3 == '\n')
   VAR_3 = VAR_0;
  if (FUNC_0(VAR_3))
   return VAR_2;
  VAR_2++;
 }
 return ((void*)0);
}
