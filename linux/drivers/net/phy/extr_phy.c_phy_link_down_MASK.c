
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int (* phy_link_change ) (struct phy_device*,int,int) ;} ;


 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int,int) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_0, bool VAR_1)
{
 VAR_0->phy_link_change(VAR_0, 0, VAR_1);
 FUNC_0(VAR_0);
}
