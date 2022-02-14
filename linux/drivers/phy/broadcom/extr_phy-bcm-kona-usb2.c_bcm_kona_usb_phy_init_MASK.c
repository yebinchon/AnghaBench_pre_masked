
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct bcm_kona_usb {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct bcm_kona_usb* FUNC_1 (struct phy*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_3)
{
 struct bcm_kona_usb *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;


 VAR_5 = FUNC_2(VAR_4->regs + VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_2;
 FUNC_3(VAR_5, VAR_4->regs + VAR_0);
 FUNC_3(VAR_5 & ~VAR_2, VAR_4->regs + VAR_0);

 FUNC_0(2);
 FUNC_3(VAR_5 | VAR_2, VAR_4->regs + VAR_0);

 return 0;
}
