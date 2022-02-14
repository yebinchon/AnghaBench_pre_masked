
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct omap_usb {int flags; int phy_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_usb*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct omap_usb* FUNC_3 (struct phy*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_3)
{
 struct omap_usb *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5;

 FUNC_0(VAR_4);

 if (VAR_4->flags & VAR_0) {
  VAR_5 = FUNC_1(VAR_4->phy_base, VAR_1);
  VAR_5 |= VAR_2;
  FUNC_2(VAR_4->phy_base, VAR_1, VAR_5);
 }

 return 0;
}
