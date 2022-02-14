
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct platform_device {int dummy; } ;
struct anarion_gmac {int phy_intf_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct anarion_gmac*,int ) ;
 int FUNC_1 (struct anarion_gmac*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3, void *VAR_4)
{
 uint32_t VAR_5;
 struct anarion_gmac *VAR_6 = VAR_4;


 FUNC_1(VAR_6, VAR_1, 1);

 VAR_5 = FUNC_0(VAR_6, VAR_2);
 VAR_5 &= ~VAR_0;
 VAR_5 |= (VAR_6->phy_intf_sel & VAR_0);
 FUNC_1(VAR_6, VAR_2, VAR_5);

 FUNC_1(VAR_6, VAR_1, 0);

 return 0;
}
