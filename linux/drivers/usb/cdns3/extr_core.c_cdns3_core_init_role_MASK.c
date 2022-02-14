
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cdns3 {int dr_mode; int role; struct device* dev; } ;
typedef enum usb_dr_mode { ____Placeholder_usb_dr_mode } usb_dr_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cdns3*) ;
 int FUNC_2 (struct cdns3*) ;
 int FUNC_3 (struct cdns3*) ;
 int FUNC_4 (struct cdns3*) ;
 int FUNC_5 (struct cdns3*) ;
 int FUNC_6 (struct cdns3*) ;
 int FUNC_7 (struct cdns3*,int ) ;
 int FUNC_8 (struct device*,char*,...) ;
 int FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct cdns3 *VAR_7)
{
 struct device *VAR_8 = VAR_7->dev;
 enum usb_dr_mode VAR_9;
 enum usb_dr_mode VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_9(VAR_8);
 VAR_7->role = VAR_6;






 if (VAR_10 == VAR_3) {
  if (FUNC_0(VAR_1) &&
      FUNC_0(VAR_0))
   VAR_10 = 129;
  else if (FUNC_0(VAR_1))
   VAR_10 = 130;
  else if (FUNC_0(VAR_0))
   VAR_10 = 128;
 }





 VAR_9 = VAR_7->dr_mode;

 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11)
  return VAR_11;

 if (VAR_10 == 129) {
  VAR_9 = VAR_7->dr_mode;
 } else if (VAR_7->dr_mode == 129) {
  VAR_9 = VAR_10;
 } else if (VAR_7->dr_mode != VAR_10) {
  FUNC_8(VAR_8, "Incorrect DRD configuration\n");
  return -VAR_2;
 }

 VAR_10 = VAR_9;

 if (VAR_10 == 129 || VAR_10 == 130) {
  VAR_11 = FUNC_4(VAR_7);
  if (VAR_11) {
   FUNC_8(VAR_8, "Host initialization failed with %d\n",
    VAR_11);
   goto err;
  }
 }

 if (VAR_10 == 129 || VAR_10 == 128) {
  VAR_11 = FUNC_3(VAR_7);
  if (VAR_11) {
   FUNC_8(VAR_8, "Device initialization failed with %d\n",
    VAR_11);
   goto err;
  }
 }

 VAR_7->dr_mode = VAR_10;

 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11)
  goto err;


 VAR_11 = FUNC_7(VAR_7, VAR_6);
 if (VAR_11)
  goto err;

 switch (VAR_7->dr_mode) {
 case 129:
  VAR_11 = FUNC_5(VAR_7);
  if (VAR_11)
   goto err;
  break;
 case 128:
  VAR_11 = FUNC_7(VAR_7, VAR_4);
  if (VAR_11)
   goto err;
  break;
 case 130:
  VAR_11 = FUNC_7(VAR_7, VAR_5);
  if (VAR_11)
   goto err;
  break;
 default:
  VAR_11 = -VAR_2;
  goto err;
 }

 return VAR_11;
err:
 FUNC_2(VAR_7);
 return VAR_11;
}
