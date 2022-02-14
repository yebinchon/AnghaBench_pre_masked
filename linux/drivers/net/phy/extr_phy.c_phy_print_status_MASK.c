
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int attached_dev; int duplex; int speed; scalar_t__ link; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct phy_device *VAR_0)
{
 if (VAR_0->link) {
  FUNC_0(VAR_0->attached_dev,
   "Link is Up - %s/%s - flow control %s\n",
   FUNC_3(VAR_0->speed),
   FUNC_1(VAR_0->duplex),
   FUNC_2(VAR_0));
 } else {
  FUNC_0(VAR_0->attached_dev, "Link is Down\n");
 }
}
