
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_3)
{
 int VAR_4;




 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (!(VAR_4 & VAR_1))
  VAR_3->autoneg = VAR_0;

 return 0;
}
