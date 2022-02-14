
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_9)
{
 int VAR_10;

 VAR_9->link = 1;

 VAR_9->speed = VAR_8;
 VAR_9->duplex = VAR_0;

 if (!FUNC_0(VAR_9, VAR_3, 93)) {
  VAR_10 = FUNC_0(VAR_9, VAR_2, VAR_5);
  if (VAR_10 < 0 ||
      !((VAR_10 & VAR_4) == VAR_4)) {
   VAR_9->link = 0;
   return 0;
  }

  VAR_10 = FUNC_0(VAR_9, VAR_1, VAR_6);
  if (VAR_10 < 0 || !(VAR_10 & VAR_7))
   VAR_9->link = 0;
 }

 return 0;
}
