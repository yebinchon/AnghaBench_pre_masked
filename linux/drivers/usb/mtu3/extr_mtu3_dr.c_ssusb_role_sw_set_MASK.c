
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int is_host; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 int VAR_0 ;
 struct ssusb_mtk* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ssusb_mtk*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, enum usb_role VAR_2)
{
 struct ssusb_mtk *VAR_3 = FUNC_0(VAR_1);
 bool VAR_4 = 0;

 if (VAR_2 == VAR_0)
  VAR_4 = 1;

 if (VAR_4 ^ VAR_3->is_host)
  FUNC_1(VAR_3, VAR_4);

 return 0;
}
