
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {scalar_t__ pwr_role; } ;
typedef enum tcpm_state { ____Placeholder_tcpm_state } tcpm_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline enum tcpm_state FUNC_0(struct tcpm_port *VAR_3)
{
 if (VAR_3->pwr_role == VAR_2)
  return VAR_1;
 else
  return VAR_0;
}
