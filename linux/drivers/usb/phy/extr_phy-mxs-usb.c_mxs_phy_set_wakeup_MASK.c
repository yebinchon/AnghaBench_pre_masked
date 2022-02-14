
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_phy {scalar_t__ io_priv; } ;
struct mxs_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mxs_phy*,int) ;
 struct mxs_phy* FUNC_1 (struct usb_phy*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct usb_phy *VAR_5, bool VAR_6)
{
 struct mxs_phy *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8 = VAR_2 |
   VAR_0 |
    VAR_1;
 if (VAR_6) {
  FUNC_0(VAR_7, 1);
  FUNC_2(VAR_8, VAR_5->io_priv + VAR_4);
 } else {
  FUNC_2(VAR_8, VAR_5->io_priv + VAR_3);
  FUNC_0(VAR_7, 0);
 }

 return 0;
}
