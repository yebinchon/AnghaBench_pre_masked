
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {int long_name; TYPE_1__* io_ops; int (* synth_immediate ) (struct spk_synth*,char*) ;} ;
struct TYPE_2__ {char (* synth_in ) () ;} ;


 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct spk_synth*,char*) ;
 char FUNC_2 () ;
 char FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct spk_synth *VAR_0)
{
 unsigned char VAR_1 = 0;
 char VAR_2[40] = "";

 VAR_0->synth_immediate(VAR_0, "\x05[Q]");
 VAR_2[VAR_1] = VAR_0->io_ops->synth_in();
 if (VAR_2[VAR_1] == 'A') {
  do {

   VAR_2[++VAR_1] = VAR_0->io_ops->synth_in();
  } while (VAR_2[VAR_1] != '\n' && VAR_1 < 32);
  VAR_2[++VAR_1] = 0x00;
 }
 if (VAR_2[0] == 'A')
  FUNC_0("%s version: %s", VAR_0->long_name, VAR_2);
}
