
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udc_usb_ep {int desc; } ;
struct pxa_ep {scalar_t__ addr; scalar_t__ dir_in; scalar_t__ type; int config; int interface; int alternate; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct udc_usb_ep *VAR_0, struct pxa_ep *VAR_1,
  int VAR_2, int VAR_3, int VAR_4)
{
 if (FUNC_1(&VAR_0->desc) != VAR_1->addr)
  return 0;
 if (FUNC_0(&VAR_0->desc) != VAR_1->dir_in)
  return 0;
 if (FUNC_2(&VAR_0->desc) != VAR_1->type)
  return 0;
 if ((VAR_1->config != VAR_2) || (VAR_1->interface != VAR_3)
   || (VAR_1->alternate != VAR_4))
  return 0;
 return 1;
}
