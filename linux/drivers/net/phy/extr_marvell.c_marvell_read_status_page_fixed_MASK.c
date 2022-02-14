
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int lp_advertising; scalar_t__ asym_pause; scalar_t__ pause; int speed; int duplex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_9)
{
 int VAR_10 = FUNC_1(VAR_9, VAR_5);

 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_10 & VAR_0)
  VAR_9->duplex = VAR_3;
 else
  VAR_9->duplex = VAR_4;

 if (VAR_10 & VAR_2)
  VAR_9->speed = VAR_8;
 else if (VAR_10 & VAR_1)
  VAR_9->speed = VAR_7;
 else
  VAR_9->speed = VAR_6;

 VAR_9->pause = 0;
 VAR_9->asym_pause = 0;
 FUNC_0(VAR_9->lp_advertising);

 return 0;
}
