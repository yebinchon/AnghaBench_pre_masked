
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cdns3 {int role_override; scalar_t__ dr_mode; int role; int dev; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int FUNC_0 (struct cdns3*) ;
 int FUNC_1 (struct cdns3*,int) ;
 int FUNC_2 (struct cdns3*) ;
 int FUNC_3 (int ,char*,int) ;
 struct cdns3* FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4, enum usb_role VAR_5)
{
 struct cdns3 *VAR_6 = FUNC_4(VAR_4);
 int VAR_7 = 0;

 FUNC_5(VAR_6->dev);
 if (VAR_5 == 128)
  VAR_6->role_override = 0;
 else
  VAR_6->role_override = 1;





 if (!VAR_6->role_override && VAR_6->dr_mode == VAR_2) {
  FUNC_0(VAR_6);
  goto pm_put;
 }

 if (VAR_6->role == VAR_5)
  goto pm_put;

 if (VAR_6->dr_mode == VAR_1) {
  switch (VAR_5) {
  case 128:
  case 129:
   break;
  default:
   VAR_7 = -VAR_0;
   goto pm_put;
  }
 }

 if (VAR_6->dr_mode == VAR_3) {
  switch (VAR_5) {
  case 128:
  case 130:
   break;
  default:
   VAR_7 = -VAR_0;
   goto pm_put;
  }
 }

 FUNC_2(VAR_6);
 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_6->dev, "set role %d has failed\n", VAR_5);
  VAR_7 = -VAR_0;
 }

pm_put:
 FUNC_6(VAR_6->dev);
 return VAR_7;
}
