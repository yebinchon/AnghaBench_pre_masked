
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int const state; int dev; } ;
struct vscsibk_info {int irq; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int const VAR_3 ;


 struct vscsibk_info* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vscsibk_info*) ;
 int FUNC_3 (struct vscsibk_info*,int ) ;
 int FUNC_4 (struct vscsibk_info*) ;
 int FUNC_5 (struct xenbus_device*,int ,char*,int) ;
 int FUNC_6 (struct xenbus_device*) ;
 int FUNC_7 (struct xenbus_device*,int const) ;

__attribute__((used)) static void FUNC_8(struct xenbus_device *VAR_4,
     enum xenbus_state VAR_5)
{
 struct vscsibk_info *VAR_6 = FUNC_0(&VAR_4->dev);

 switch (VAR_5) {
 case 130:
  break;

 case 131:
  if (FUNC_4(VAR_6))
   break;

  FUNC_3(VAR_6, VAR_1);
  FUNC_7(VAR_4, 132);
  break;

 case 132:
  FUNC_3(VAR_6, VAR_2);

  if (VAR_4->state == 132)
   break;

  FUNC_7(VAR_4, 132);
  break;

 case 133:
  if (VAR_6->irq)
   FUNC_2(VAR_6);

  FUNC_7(VAR_4, 133);
  break;

 case 134:
  FUNC_7(VAR_4, 134);
  if (FUNC_6(VAR_4))
   break;

 case 128:
  FUNC_1(&VAR_4->dev);
  break;

 case 129:
  FUNC_3(VAR_6, VAR_1);
  FUNC_7(VAR_4, VAR_3);

  break;

 default:
  FUNC_5(VAR_4, -VAR_0, "saw state %d at frontend",
     VAR_5);
  break;
 }
}
