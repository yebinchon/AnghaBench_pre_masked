
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int const state; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;
 int FUNC_0 (struct xenbus_device*) ;
 int FUNC_1 (struct xenbus_device*,int const) ;

__attribute__((used)) static void FUNC_2(struct xenbus_device *VAR_0,
       enum xenbus_state VAR_1)
{
 switch (VAR_1) {
 case 129:
 case 130:
 case 131:
 case 132:
 case 128:
  break;

 case 133:
  break;

 case 134:
  FUNC_1(VAR_0, 134);
  break;

 case 136:
  if (VAR_0->state == 136)
   break;


 case 135:
  FUNC_0(VAR_0);
  break;
 }
}
