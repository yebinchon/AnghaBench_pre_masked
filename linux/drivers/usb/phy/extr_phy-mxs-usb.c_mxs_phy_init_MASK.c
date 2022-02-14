
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dummy; } ;
struct mxs_phy {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mxs_phy*) ;
 struct mxs_phy* FUNC_3 (struct usb_phy*) ;

__attribute__((used)) static int FUNC_4(struct usb_phy *VAR_0)
{
 int VAR_1;
 struct mxs_phy *VAR_2 = FUNC_3(VAR_0);

 FUNC_1();
 VAR_1 = FUNC_0(VAR_2->clk);
 if (VAR_1)
  return VAR_1;

 return FUNC_2(VAR_2);
}
