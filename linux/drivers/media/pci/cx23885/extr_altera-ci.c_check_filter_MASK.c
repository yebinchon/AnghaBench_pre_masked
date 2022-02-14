
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_internal {TYPE_1__** pid_filt; } ;
struct TYPE_2__ {void* demux; } ;



__attribute__((used)) static struct fpga_internal *FUNC_0(struct fpga_internal *VAR_0,
      void *VAR_1, int VAR_2)
{
 if (VAR_0 == ((void*)0))
  return ((void*)0);

 if ((VAR_0->pid_filt[VAR_2]) == ((void*)0))
  return ((void*)0);

 if (VAR_0->pid_filt[VAR_2]->demux == VAR_1)
  return VAR_0;

 return ((void*)0);
}
