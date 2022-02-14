
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_conn_info {scalar_t__ last_role; int role_sw; int vbus; int dw_det; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct usb_conn_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct usb_conn_info *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->dw_det);

 if (VAR_2->last_role == VAR_0)
  FUNC_2(VAR_2->vbus);

 FUNC_3(VAR_2->role_sw);

 return 0;
}
