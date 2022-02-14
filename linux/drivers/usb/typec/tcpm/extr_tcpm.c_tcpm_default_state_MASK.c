
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpm_port {scalar_t__ port_type; scalar_t__ try_role; TYPE_2__* tcpc; } ;
typedef enum tcpm_state { ____Placeholder_tcpm_state } tcpm_state ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {scalar_t__ default_role; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static enum tcpm_state FUNC_0(struct tcpm_port *VAR_6)
{
 if (VAR_6->port_type == VAR_2) {
  if (VAR_6->try_role == VAR_4)
   return VAR_0;
  else if (VAR_6->try_role == VAR_5)
   return VAR_1;
  else if (VAR_6->tcpc->config &&
    VAR_6->tcpc->config->default_role == VAR_4)
   return VAR_0;

 } else if (VAR_6->port_type == VAR_3) {
  return VAR_0;
 }
 return VAR_1;
}
