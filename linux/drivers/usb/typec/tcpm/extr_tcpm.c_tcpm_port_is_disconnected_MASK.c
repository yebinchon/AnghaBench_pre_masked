
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {scalar_t__ cc1; scalar_t__ cc2; scalar_t__ polarity; scalar_t__ attached; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct tcpm_port *VAR_3)
{
 return (!VAR_3->attached && VAR_3->cc1 == VAR_0 &&
  VAR_3->cc2 == VAR_0) ||
        (VAR_3->attached && ((VAR_3->polarity == VAR_1 &&
        VAR_3->cc1 == VAR_0) ||
       (VAR_3->polarity == VAR_2 &&
        VAR_3->cc2 == VAR_0)));
}
