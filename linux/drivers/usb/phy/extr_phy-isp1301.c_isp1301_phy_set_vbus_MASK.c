
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dummy; } ;
struct isp1301 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isp1301*,int ,int ) ;
 int FUNC_1 (struct isp1301*,int ,int ) ;
 struct isp1301* FUNC_2 (struct usb_phy*) ;

__attribute__((used)) static int FUNC_3(struct usb_phy *VAR_2, int VAR_3)
{
 struct isp1301 *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3)
  FUNC_1(VAR_4, VAR_0, VAR_1);
 else
  FUNC_0(VAR_4, VAR_0, VAR_1);

 return 0;
}
