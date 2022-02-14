
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3 {int role; int mutex; TYPE_1__** roles; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;
struct TYPE_2__ {scalar_t__ state; int (* stop ) (struct cdns3*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cdns3*) ;

__attribute__((used)) static void FUNC_4(struct cdns3 *VAR_2)
{
 enum usb_role VAR_3 = VAR_2->role;

 if (FUNC_0(VAR_3 > VAR_1))
  return;

 if (VAR_2->roles[VAR_3]->state == VAR_0)
  return;

 FUNC_1(&VAR_2->mutex);
 VAR_2->roles[VAR_3]->stop(VAR_2);
 VAR_2->roles[VAR_3]->state = VAR_0;
 FUNC_2(&VAR_2->mutex);
}
