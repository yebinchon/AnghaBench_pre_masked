
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_setting {int duplex; int speed; } ;
struct phy_device {int duplex; int speed; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy_setting* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_2)
{
 const struct phy_setting *VAR_3;

 VAR_3 = FUNC_0(VAR_2->speed, VAR_2->duplex,
     VAR_2->supported);
 if (VAR_3) {
  VAR_2->speed = VAR_3->speed;
  VAR_2->duplex = VAR_3->duplex;
 } else {

  VAR_2->speed = VAR_1;
  VAR_2->duplex = VAR_0;
 }
}
