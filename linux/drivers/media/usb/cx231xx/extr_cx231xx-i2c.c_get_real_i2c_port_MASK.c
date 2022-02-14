
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx {scalar_t__ port_3_switch_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct cx231xx *VAR_2, int VAR_3)
{
 if (VAR_3 == 1)
  return VAR_2->port_3_switch_enabled ? VAR_1 : VAR_0;
 return VAR_3;
}
