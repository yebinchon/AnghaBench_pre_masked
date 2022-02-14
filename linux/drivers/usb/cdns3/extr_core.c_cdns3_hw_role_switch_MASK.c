
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3 {int role; int dev; scalar_t__ role_override; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 int FUNC_0 (struct cdns3*,int) ;
 int FUNC_1 (struct cdns3*) ;
 int FUNC_2 (struct cdns3*) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct cdns3 *VAR_0)
{
 enum usb_role VAR_1, VAR_2;
 int VAR_3 = 0;


 if (VAR_0->role_override)
  return 0;

 FUNC_5(VAR_0->dev);

 VAR_2 = VAR_0->role;
 VAR_1 = FUNC_2(VAR_0);


 if (VAR_2 == VAR_1)
  goto exit;

 FUNC_1(VAR_0);

 FUNC_3(VAR_0->dev, "Switching role %d -> %d", VAR_2, VAR_1);

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {

  FUNC_4(VAR_0->dev, "set %d has failed, back to %d\n",
   VAR_1, VAR_2);
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  if (VAR_3)
   FUNC_4(VAR_0->dev, "back to %d failed too\n",
    VAR_2);
 }
exit:
 FUNC_6(VAR_0->dev);
 return VAR_3;
}
