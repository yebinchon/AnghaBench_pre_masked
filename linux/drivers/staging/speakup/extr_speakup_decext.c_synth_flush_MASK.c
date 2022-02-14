
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {int (* synth_immediate ) (struct spk_synth*,char*) ;TYPE_1__* io_ops; } ;
struct TYPE_2__ {int (* flush_buffer ) () ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct spk_synth*,char*) ;

__attribute__((used)) static void FUNC_2(struct spk_synth *VAR_1)
{
 VAR_0 = 0;
 VAR_1->io_ops->flush_buffer();
 VAR_1->synth_immediate(VAR_1, "\033P;10z\033\\");
}
