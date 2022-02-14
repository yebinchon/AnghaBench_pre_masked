
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {TYPE_1__* io_ops; } ;
struct TYPE_2__ {int (* synth_out ) (struct spk_synth*,char) ;int (* flush_buffer ) () ;} ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spk_synth*,char) ;
 int FUNC_1 () ;
 int FUNC_2 (struct spk_synth*,char) ;

__attribute__((used)) static void FUNC_3(struct spk_synth *VAR_3)
{
 if (VAR_1)

  VAR_3->io_ops->synth_out(VAR_3, ']');
 VAR_1 = 0;
 VAR_2 = 1;
 VAR_3->io_ops->flush_buffer();
 VAR_3->io_ops->synth_out(VAR_3, VAR_0);
}
