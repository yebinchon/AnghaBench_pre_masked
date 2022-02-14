
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3 {scalar_t__ dr_mode; int role; int dev; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (struct cdns3*) ;
 int FUNC_1 (struct cdns3*) ;
 scalar_t__ FUNC_2 (struct cdns3*) ;
 scalar_t__ FUNC_3 (struct cdns3*) ;
 int FUNC_4 (int ,char*,int,int) ;

__attribute__((used)) static enum usb_role FUNC_5(struct cdns3 *VAR_1)
{
 enum usb_role VAR_2;
 int VAR_3, VAR_4;

 if (VAR_1->dr_mode != VAR_0)
  goto not_otg;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_1);







 VAR_2 = VAR_1->role;

 switch (VAR_2) {
 case 128:




  if (!VAR_3)
   VAR_2 = 129;
  else if (VAR_4)
   VAR_2 = 130;
  break;
 case 129:
  if (VAR_3)
   VAR_2 = 128;
  break;
 case 130:
  if (!VAR_4)
   VAR_2 = 128;
  break;
 }

 FUNC_4(VAR_1->dev, "role %d -> %d\n", VAR_1->role, VAR_2);

 return VAR_2;

not_otg:
 if (FUNC_3(VAR_1))
  VAR_2 = 129;
 if (FUNC_2(VAR_1))
  VAR_2 = 130;

 return VAR_2;
}
