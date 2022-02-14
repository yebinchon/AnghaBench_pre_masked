
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backend_info {int state; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int FUNC_0 () ;





 int FUNC_1 (struct backend_info*) ;
 int FUNC_2 (struct backend_info*) ;
 int FUNC_3 (struct backend_info*,int const) ;

__attribute__((used)) static void FUNC_4(struct backend_info *VAR_0,
         enum xenbus_state VAR_1)
{
 while (VAR_0->state != VAR_1) {
  switch (VAR_0->state) {
  case 128:
   switch (VAR_1) {
   case 129:
   case 130:
   case 131:
    FUNC_3(VAR_0, 129);
    break;
   case 132:
    FUNC_3(VAR_0, 132);
    break;
   default:
    FUNC_0();
   }
   break;
  case 132:
   switch (VAR_1) {
   case 129:
   case 130:
    FUNC_3(VAR_0, 129);
    break;
   case 131:
    FUNC_3(VAR_0, 131);
    break;
   default:
    FUNC_0();
   }
   break;
  case 129:
   switch (VAR_1) {
   case 130:
    FUNC_1(VAR_0);
    FUNC_3(VAR_0, 130);
    break;
   case 131:
   case 132:
    FUNC_3(VAR_0, 131);
    break;
   default:
    FUNC_0();
   }
   break;
  case 130:
   switch (VAR_1) {
   case 129:
   case 131:
   case 132:
    FUNC_2(VAR_0);
    FUNC_3(VAR_0, 131);
    break;
   default:
    FUNC_0();
   }
   break;
  case 131:
   switch (VAR_1) {
   case 129:
   case 130:
   case 132:
    FUNC_3(VAR_0, 132);
    break;
   default:
    FUNC_0();
   }
   break;
  default:
   FUNC_0();
  }
 }
}
