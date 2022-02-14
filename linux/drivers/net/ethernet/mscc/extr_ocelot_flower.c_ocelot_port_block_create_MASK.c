
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port_block {struct ocelot_port* port; } ;
struct ocelot_port {int dummy; } ;


 int VAR_0 ;
 struct ocelot_port_block* FUNC_0 (int,int ) ;

__attribute__((used)) static struct ocelot_port_block*
FUNC_1(struct ocelot_port *VAR_1)
{
 struct ocelot_port_block *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->port = VAR_1;

 return VAR_2;
}
