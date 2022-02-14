
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6030_usb {int dummy; } ;
struct phy_companion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct twl6030_usb* FUNC_0 (struct phy_companion*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct twl6030_usb*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_companion *VAR_3)
{
 struct twl6030_usb *VAR_4 = FUNC_0(VAR_3);

 FUNC_2(VAR_4, VAR_0, 0x24, VAR_2);
 FUNC_2(VAR_4, VAR_0, 0x84, VAR_2);

 FUNC_1(100);
 FUNC_2(VAR_4, VAR_0, 0xa0, VAR_1);

 return 0;
}
