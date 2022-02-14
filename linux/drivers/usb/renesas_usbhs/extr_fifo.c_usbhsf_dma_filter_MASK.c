
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ slave_id; } ;
struct sh_dmae_slave {TYPE_1__ shdma_slave; } ;
struct dma_chan {struct sh_dmae_slave* private; } ;



__attribute__((used)) static bool FUNC_0(struct dma_chan *VAR_0, void *VAR_1)
{
 struct sh_dmae_slave *VAR_2 = VAR_1;






 if (0 == VAR_2->shdma_slave.slave_id)
  return 0;

 VAR_0->private = VAR_2;

 return 1;
}
