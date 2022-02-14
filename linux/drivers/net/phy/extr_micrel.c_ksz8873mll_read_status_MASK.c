
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; scalar_t__ asym_pause; scalar_t__ pause; int speed; int duplex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_0(VAR_7, VAR_2);

 VAR_8 = FUNC_0(VAR_7, VAR_2);

 if (VAR_8 & VAR_3)
  VAR_7->duplex = VAR_1;
 else
  VAR_7->duplex = VAR_0;

 if (VAR_8 & VAR_4)
  VAR_7->speed = VAR_5;
 else
  VAR_7->speed = VAR_6;

 VAR_7->link = 1;
 VAR_7->pause = VAR_7->asym_pause = 0;

 return 0;
}
