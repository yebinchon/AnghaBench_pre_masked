
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {scalar_t__ hard_reset_count; scalar_t__ pwr_role; scalar_t__ state; scalar_t__ pd_capable; } ;
typedef enum tcpm_state { ____Placeholder_tcpm_state } tcpm_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static inline enum tcpm_state FUNC_0(struct tcpm_port *VAR_8)
{
 if (VAR_8->hard_reset_count < VAR_2)
  return VAR_1;
 if (VAR_8->pd_capable)
  return VAR_0;
 if (VAR_8->pwr_role == VAR_7)
  return VAR_6;
 if (VAR_8->state == VAR_5)
  return VAR_3;
 return VAR_4;
}
