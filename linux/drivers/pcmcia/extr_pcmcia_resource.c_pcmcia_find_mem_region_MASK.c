
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct resource {int dummy; } ;
struct pcmcia_socket {TYPE_1__* resource_ops; } ;
struct TYPE_2__ {struct resource* (* find_mem ) (int ,int ,int ,int,struct pcmcia_socket*) ;} ;


 struct resource* FUNC_0 (int ,int ,int ,int,struct pcmcia_socket*) ;

struct resource *FUNC_1(u_long VAR_0, u_long VAR_1, u_long VAR_2,
     int VAR_3, struct pcmcia_socket *VAR_4)
{
 if (VAR_4->resource_ops->find_mem)
  return VAR_4->resource_ops->find_mem(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return ((void*)0);
}
