
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_network {int *** associated_ttys; } ;


 int VAR_0 ;

void FUNC_0(struct ipw_network *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->associated_ttys[VAR_2][VAR_3] = ((void*)0);
}
