
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {int clear; TYPE_1__* io_ops; } ;
struct TYPE_2__ {int (* synth_out ) (struct spk_synth*,int ) ;int (* flush_buffer ) () ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct spk_synth*,int ) ;

void FUNC_2(struct spk_synth *VAR_0)
{
 VAR_0->io_ops->flush_buffer();
 VAR_0->io_ops->synth_out(VAR_0, VAR_0->clear);
}
