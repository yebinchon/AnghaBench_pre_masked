
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_phy {scalar_t__ io_priv; } ;
struct mxs_phy {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mxs_phy*) ;
 int FUNC_2 (scalar_t__,int) ;
 struct mxs_phy* FUNC_3 (struct usb_phy*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct usb_phy *VAR_12)
{
 struct mxs_phy *VAR_13 = FUNC_3(VAR_12);
 u32 VAR_14 = VAR_8 |
   VAR_6 |
   VAR_7 |
   VAR_4 |
   VAR_3 |
   VAR_2 |
   VAR_1 |
   VAR_5;

 FUNC_4(VAR_14, VAR_12->io_priv + VAR_9);
 FUNC_4(0xffffffff, VAR_12->io_priv + VAR_11);

 FUNC_4(VAR_0,
        VAR_12->io_priv + VAR_10);

 if (FUNC_1(VAR_13))
  FUNC_2(VAR_12->io_priv, 0);

 FUNC_0(VAR_13->clk);
}
