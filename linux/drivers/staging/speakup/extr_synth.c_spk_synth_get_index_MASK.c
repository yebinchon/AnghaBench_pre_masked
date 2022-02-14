
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {TYPE_1__* io_ops; } ;
struct TYPE_2__ {unsigned char (* synth_in_nowait ) () ;} ;


 unsigned char FUNC_0 () ;

unsigned char FUNC_1(struct spk_synth *VAR_0)
{
 return VAR_0->io_ops->synth_in_nowait();
}
