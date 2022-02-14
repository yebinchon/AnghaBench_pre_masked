
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int state; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;
struct TYPE_2__ {int frontends_lock; } ;


 int FUNC_0 (int) ;





 int FUNC_1 (struct xenbus_device*) ;
 int FUNC_2 (struct xenbus_device*) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xenbus_device*,int const) ;

__attribute__((used)) static void FUNC_6(struct xenbus_device *VAR_1,
         enum xenbus_state VAR_2)
{
 while (VAR_1->state != VAR_2) {
  switch (VAR_1->state) {
  case 132:
   switch (VAR_2) {
   case 129:
   case 130:
    FUNC_5(VAR_1, 129);
    break;
   case 131:
    FUNC_5(VAR_1, 131);
    break;
   default:
    FUNC_0(1);
   }
   break;
  case 129:
  case 128:
   switch (VAR_2) {
   case 130:
    FUNC_1(VAR_1);
    FUNC_5(VAR_1, 130);
    break;
   case 131:
   case 132:
    FUNC_5(VAR_1, 131);
    break;
   default:
    FUNC_0(1);
   }
   break;
  case 130:
   switch (VAR_2) {
   case 129:
   case 131:
   case 132:
    FUNC_3(&VAR_0.frontends_lock);
    FUNC_2(VAR_1);
    FUNC_4(&VAR_0.frontends_lock);
    FUNC_5(VAR_1, 131);
    break;
   default:
    FUNC_0(1);
   }
   break;
  case 131:
   switch (VAR_2) {
   case 129:
   case 130:
   case 132:
    FUNC_5(VAR_1, 132);
    break;
   default:
    FUNC_0(1);
   }
   break;
  default:
   FUNC_0(1);
  }
 }
}
