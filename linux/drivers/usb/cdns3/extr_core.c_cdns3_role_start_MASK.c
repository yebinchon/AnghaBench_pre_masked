
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3 {int role; int mutex; TYPE_1__** roles; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;
struct TYPE_2__ {scalar_t__ state; int (* start ) (struct cdns3*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cdns3*) ;

__attribute__((used)) static int FUNC_4(struct cdns3 *VAR_3, enum usb_role VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_4 > VAR_2))
  return 0;

 FUNC_1(&VAR_3->mutex);
 VAR_3->role = VAR_4;
 FUNC_2(&VAR_3->mutex);

 if (!VAR_3->roles[VAR_4])
  return -VAR_1;

 if (VAR_3->roles[VAR_4]->state == VAR_0)
  return 0;

 FUNC_1(&VAR_3->mutex);
 VAR_5 = VAR_3->roles[VAR_4]->start(VAR_3);
 if (!VAR_5)
  VAR_3->roles[VAR_4]->state = VAR_0;
 FUNC_2(&VAR_3->mutex);

 return VAR_5;
}
