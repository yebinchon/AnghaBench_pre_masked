
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {scalar_t__ io_priv; } ;
struct mxs_phy {int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mxs_phy*) ;
 int FUNC_4 (struct mxs_phy*) ;
 struct mxs_phy* FUNC_5 (struct usb_phy*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct usb_phy *VAR_4, int VAR_5)
{
 int VAR_6;
 struct mxs_phy *VAR_7 = FUNC_5(VAR_4);
 bool VAR_8, VAR_9;

 VAR_8 = FUNC_4(VAR_7);
 VAR_9 = FUNC_3(VAR_7);

 if (VAR_5) {





  if (VAR_8 & VAR_9) {




   FUNC_2();
   FUNC_6(0xffbfffff, VAR_4->io_priv + VAR_3);
  } else {
   FUNC_6(0xffffffff, VAR_4->io_priv + VAR_3);
  }
  FUNC_6(VAR_0,
         VAR_4->io_priv + VAR_2);
  FUNC_0(VAR_7->clk);
 } else {
  FUNC_2();
  VAR_6 = FUNC_1(VAR_7->clk);
  if (VAR_6)
   return VAR_6;
  FUNC_6(VAR_0,
         VAR_4->io_priv + VAR_1);
  FUNC_6(0, VAR_4->io_priv + VAR_3);
 }

 return 0;
}
