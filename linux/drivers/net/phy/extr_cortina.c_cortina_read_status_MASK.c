
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 < 0) {
  VAR_5 = VAR_4;
  goto err;
 }

 if (VAR_4 & 0x8) {

  VAR_3->speed = VAR_1;
  VAR_3->duplex = VAR_0;
  VAR_3->link = 1;
 } else {
  VAR_3->link = 0;
 }

err:
 return VAR_5;
}
