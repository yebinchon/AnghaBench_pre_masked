
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {TYPE_1__* resource_ops; } ;
struct TYPE_2__ {int (* validate_mem ) (struct pcmcia_socket*) ;} ;


 int FUNC_0 (struct pcmcia_socket*) ;

int FUNC_1(struct pcmcia_socket *VAR_0)
{
 if (VAR_0->resource_ops->validate_mem)
  return VAR_0->resource_ops->validate_mem(VAR_0);

 return 0;
}
