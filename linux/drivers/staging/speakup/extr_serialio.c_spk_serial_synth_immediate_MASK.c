
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u_char ;
struct spk_synth {char procspeech; } ;
struct TYPE_2__ {int port_tts; } ;


 int FUNC_0 (char,int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (struct spk_synth*) ;

const char *FUNC_2(struct spk_synth *VAR_1,
           const char *VAR_2)
{
 u_char VAR_3;

 while ((VAR_3 = *VAR_2)) {
  if (VAR_3 == '\n')
   VAR_3 = VAR_1->procspeech;
  if (FUNC_1(VAR_1))
   FUNC_0(VAR_3, VAR_0.port_tts);
  else
   return VAR_2;
  VAR_2++;
 }
 return ((void*)0);
}
