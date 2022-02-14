
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u_char ;
struct spk_synth {int dummy; } ;
struct TYPE_2__ {int port_tts; } ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static const char *FUNC_4(struct spk_synth *VAR_3, const char *VAR_4)
{
 u_char VAR_5;

 while ((VAR_5 = *VAR_4)) {
  int VAR_6 = VAR_1;

  if (VAR_5 == '\n')
   VAR_5 = VAR_0;
  if (FUNC_1())
   return VAR_4;
  while (FUNC_2()) {
   if (!--VAR_6)
    return VAR_4;
   FUNC_3(1);
  }
  FUNC_0(VAR_5, VAR_2.port_tts);
  VAR_4++;
 }
 return ((void*)0);
}
