
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dummy; } ;
struct isp1301 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct isp1301*,int ,int) ;
 int FUNC_1 (struct isp1301*,int ,int) ;
 struct isp1301* FUNC_2 (struct usb_phy*) ;

__attribute__((used)) static int FUNC_3(struct usb_phy *VAR_16)
{
 struct isp1301 *VAR_17 = FUNC_2(VAR_16);


 FUNC_0(VAR_17, VAR_3, VAR_8);
 FUNC_0(VAR_17, VAR_3, ~VAR_7);
 FUNC_1(VAR_17, VAR_3, VAR_7);
 FUNC_0(VAR_17, VAR_4, ~0);
 FUNC_1(VAR_17, VAR_4, (VAR_9 | VAR_10
    | VAR_11));

 FUNC_0(VAR_17, VAR_5, ~0);
 FUNC_1(VAR_17, VAR_3, VAR_6);
 FUNC_1(VAR_17, VAR_5, (VAR_12
    | VAR_14));
 FUNC_0(VAR_17, VAR_5, (VAR_13
    | VAR_15));


 FUNC_0(VAR_17, VAR_1, ~0);
 FUNC_0(VAR_17, VAR_0, ~0);
 FUNC_0(VAR_17, VAR_2, ~0);

 return 0;
}
