
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id; } ;
struct usbnet {TYPE_1__ mii; int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct usbnet *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = 5000;

 FUNC_1(VAR_2->net, VAR_2->mii.phy_id, VAR_1, VAR_3);


 FUNC_3(500);


 while (VAR_4--) {
  if (FUNC_0(VAR_2->net, VAR_2->mii.phy_id, VAR_1)
       & VAR_0)
   FUNC_3(100);
  else
   return;
 }

 FUNC_2(VAR_2->net, "BMCR_RESET timeout on phy_id %d\n",
     VAR_2->mii.phy_id);
}
