
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int VAR_0 ;



 int const VAR_1 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (struct xenbus_device*,int const) ;
 int FUNC_2 (struct xenbus_device*,int ,char*,int) ;
 int FUNC_3 (struct xenbus_device*) ;

__attribute__((used)) static void FUNC_4(struct xenbus_device *VAR_2,
     enum xenbus_state VAR_3)
{
 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_2, VAR_1);
  break;

 case 130:
 case 131:
  FUNC_1(VAR_2, 131);
  break;

 case 132:
  FUNC_1(VAR_2, 132);
  break;

 case 133:
  FUNC_1(VAR_2, 133);
  if (FUNC_3(VAR_2))
   break;
  FUNC_0(&VAR_2->dev);
  break;
 case 128:
  FUNC_1(VAR_2, 133);
  FUNC_0(&VAR_2->dev);
  break;

 default:
  FUNC_2(VAR_2, -VAR_0, "saw state %d at frontend",
     VAR_3);
  break;
 }
}
