
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_port {int port_list; } ;


 int FUNC_0 (struct nfp_port*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct nfp_port *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_1(&VAR_0->port_list);
 FUNC_0(VAR_0);
}
