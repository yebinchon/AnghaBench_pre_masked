
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; int otherend; } ;
struct backend_info {int frontend_state; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int VAR_0 ;



 int const VAR_1 ;



 struct backend_info* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct backend_info*,int const) ;
 int FUNC_4 (struct xenbus_device*,int ,char*,int) ;
 int FUNC_5 (struct xenbus_device*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct xenbus_device *VAR_2,
        enum xenbus_state VAR_3)
{
 struct backend_info *VAR_4 = FUNC_0(&VAR_2->dev);

 FUNC_2("%s -> %s\n", VAR_2->otherend, FUNC_6(VAR_3));

 VAR_4->frontend_state = VAR_3;

 switch (VAR_3) {
 case 129:
  FUNC_3(VAR_4, VAR_1);
  break;

 case 130:
  break;

 case 131:
  FUNC_3(VAR_4, 131);
  break;

 case 132:
  FUNC_3(VAR_4, 132);
  break;

 case 133:
  FUNC_3(VAR_4, 133);
  if (FUNC_5(VAR_2))
   break;

 case 128:
  FUNC_3(VAR_4, 133);
  FUNC_1(&VAR_2->dev);
  break;

 default:
  FUNC_4(VAR_2, -VAR_0, "saw state %d at frontend",
     VAR_3);
  break;
 }
}
