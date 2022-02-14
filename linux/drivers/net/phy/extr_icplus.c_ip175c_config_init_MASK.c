
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int bus; } ;
struct phy_device {int link; int attached_dev; int duplex; int speed; int state; TYPE_1__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_5)
{
 int VAR_6, VAR_7;
 static int VAR_8;

 if (VAR_8 == 0) {


  VAR_6 = FUNC_2(VAR_5->mdio.bus, 30, 0, 0x175c);
  if (VAR_6 < 0)
   return VAR_6;


  VAR_6 = FUNC_1(VAR_5->mdio.bus, 30, 0);


  FUNC_0(2);


  VAR_6 = FUNC_2(VAR_5->mdio.bus, 29, 31, 0x175c);
  if (VAR_6 < 0)
   return VAR_6;


  VAR_6 = FUNC_2(VAR_5->mdio.bus, 29, 22, 0x420);
  if (VAR_6 < 0)
   return VAR_6;


  for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
   VAR_6 = FUNC_2(VAR_5->mdio.bus, VAR_7,
         VAR_2, VAR_0);
   if (VAR_6 < 0)
    return VAR_6;
  }

  for (VAR_7 = 0; VAR_7 < 5; VAR_7++)
   VAR_6 = FUNC_1(VAR_5->mdio.bus, VAR_7, VAR_2);

  FUNC_0(2);

  VAR_8 = 1;
 }

 if (VAR_5->mdio.addr != 4) {
  VAR_5->state = VAR_3;
  VAR_5->speed = VAR_4;
  VAR_5->duplex = VAR_1;
  VAR_5->link = 1;
  FUNC_3(VAR_5->attached_dev);
 }

 return 0;
}
