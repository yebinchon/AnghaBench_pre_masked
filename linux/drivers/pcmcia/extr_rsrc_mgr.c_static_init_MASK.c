
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int resource_setup_done; } ;



int FUNC_0(struct pcmcia_socket *VAR_0)
{



 VAR_0->resource_setup_done = 1;

 return 0;
}
