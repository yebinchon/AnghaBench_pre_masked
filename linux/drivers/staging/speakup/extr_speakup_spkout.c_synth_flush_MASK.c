
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {TYPE_1__* io_ops; } ;
struct TYPE_2__ {int (* send_xchar ) (int ) ;int (* flush_buffer ) () ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spk_synth *VAR_1)
{
 VAR_1->io_ops->flush_buffer();
 VAR_1->io_ops->send_xchar(VAR_0);
}
