
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {int long_name; TYPE_1__* io_ops; int (* synth_immediate ) (struct spk_synth*,char*) ;} ;
struct TYPE_2__ {unsigned char (* synth_in ) () ;} ;


 int FUNC_0 (char*,int ,unsigned char*) ;
 int FUNC_1 (struct spk_synth*,char*) ;
 unsigned char FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct spk_synth *VAR_0)
{
 unsigned char *VAR_1, VAR_2;
 unsigned char VAR_3[50], VAR_4[20];

 VAR_0->synth_immediate(VAR_0, "\x18\x01?");
 for (VAR_2 = 0; VAR_2 < 50; VAR_2++) {
  VAR_3[VAR_2] = VAR_0->io_ops->synth_in();
  if (VAR_2 > 2 && VAR_3[VAR_2] == 0x7f)
   break;
 }
 VAR_1 = VAR_3 + 2;
 for (VAR_2 = 0; *VAR_1 != '\r'; VAR_1++) {
  VAR_4[VAR_2] = *VAR_1;
  if (++VAR_2 >= 19)
   break;
 }
 VAR_4[VAR_2] = 0;
 FUNC_0("%s: ROM version: %s\n", VAR_0->long_name, VAR_4);
}
