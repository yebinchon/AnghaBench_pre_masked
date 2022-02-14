
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int gadget; scalar_t__ vbus_active; int is_otg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ci_hdrc*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ci_hdrc *VAR_1)
{
 if (!VAR_1->is_otg)
  return;

 if (FUNC_0(VAR_1, VAR_0) && !VAR_1->vbus_active)
  FUNC_1(&VAR_1->gadget);
 else if (!FUNC_0(VAR_1, VAR_0) && VAR_1->vbus_active)
  FUNC_2(&VAR_1->gadget);
}
