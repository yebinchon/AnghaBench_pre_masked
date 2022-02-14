
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_6)
{
 int VAR_7;

 if (VAR_6->autoneg == VAR_0 || VAR_6->speed > VAR_5)
  return 0;


 VAR_7 = FUNC_0(VAR_6, VAR_4, 0x52b5);
 if (VAR_7 >= 0)
  VAR_7 = FUNC_0(VAR_6, VAR_3, 0x0012);
 if (VAR_7 >= 0)
  VAR_7 = FUNC_0(VAR_6, VAR_2, 0x2803);
 if (VAR_7 >= 0)
  VAR_7 = FUNC_0(VAR_6, VAR_1, 0x87fa);

 if (VAR_7 >= 0)
  VAR_7 = FUNC_0(VAR_6, VAR_4, 0x0000);
 else
  FUNC_0(VAR_6, VAR_4, 0x0000);

 return VAR_7;
}
