
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pcmcia_socket {unsigned int io_offset; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pcmcia_socket *VAR_1, unsigned int VAR_2,
   unsigned int *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5, struct resource **VAR_6)
{
 if (!VAR_1->io_offset)
  return -VAR_0;
 *VAR_3 = VAR_1->io_offset | (*VAR_3 & 0x0fff);
 *VAR_6 = ((void*)0);

 return 0;
}
