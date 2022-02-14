
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {scalar_t__ port_mode; int g; int gadget_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct musb *VAR_1)
{
 if (VAR_1->port_mode == VAR_0)
  return;

 FUNC_0(&VAR_1->gadget_work);
 FUNC_1(&VAR_1->g);
}
