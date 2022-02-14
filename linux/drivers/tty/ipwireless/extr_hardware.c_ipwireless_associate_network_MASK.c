
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_network {int dummy; } ;
struct ipw_hardware {struct ipw_network* network; } ;



void FUNC_0(struct ipw_hardware *VAR_0,
      struct ipw_network *VAR_1)
{
 VAR_0->network = VAR_1;
}
