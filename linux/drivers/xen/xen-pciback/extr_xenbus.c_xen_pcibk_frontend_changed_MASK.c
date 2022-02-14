
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct xen_pcibk_device {int dummy; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;
 int FUNC_0 (int *,char*,...) ;
 struct xen_pcibk_device* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xen_pcibk_device*) ;
 int FUNC_4 (struct xen_pcibk_device*) ;
 int FUNC_5 (struct xen_pcibk_device*) ;
 int FUNC_6 (struct xenbus_device*) ;
 int FUNC_7 (struct xenbus_device*,int const) ;

__attribute__((used)) static void FUNC_8(struct xenbus_device *VAR_0,
         enum xenbus_state VAR_1)
{
 struct xen_pcibk_device *VAR_2 = FUNC_1(&VAR_0->dev);

 FUNC_0(&VAR_0->dev, "fe state changed %d\n", VAR_1);

 switch (VAR_1) {
 case 130:
  FUNC_3(VAR_2);
  break;

 case 129:
  FUNC_5(VAR_2);
  break;

 case 131:



  FUNC_7(VAR_0, 131);
  break;

 case 132:
  FUNC_4(VAR_2);
  FUNC_7(VAR_0, 132);
  break;

 case 133:
  FUNC_4(VAR_2);
  FUNC_7(VAR_0, 133);
  if (FUNC_6(VAR_0))
   break;

 case 128:
  FUNC_0(&VAR_0->dev, "frontend is gone! unregister device\n");
  FUNC_2(&VAR_0->dev);
  break;

 default:
  break;
 }
}
