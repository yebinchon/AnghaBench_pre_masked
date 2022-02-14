
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {scalar_t__ alive; } ;
struct TYPE_2__ {int port_tts; } ;


 int FUNC_0 (char const,int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (struct spk_synth*) ;

__attribute__((used)) static int FUNC_2(struct spk_synth *VAR_1, const char VAR_2)
{
 if (VAR_1->alive && FUNC_1(VAR_1)) {
  FUNC_0(VAR_2, VAR_0.port_tts);
  return 1;
 }
 return 0;
}
