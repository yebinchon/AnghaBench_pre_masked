
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id; } ;
struct usbnet {TYPE_1__ mii; int net; struct asix_common_private* driver_priv; } ;
struct asix_common_private {int presvd_phy_advertise; int presvd_phy_bmcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct usbnet *VAR_4)
{
 struct asix_common_private *VAR_5 = VAR_4->driver_priv;

 if (VAR_5->presvd_phy_advertise) {

  FUNC_0(VAR_4->net, VAR_4->mii.phy_id, VAR_2,
         VAR_5->presvd_phy_advertise);


  if (VAR_5->presvd_phy_bmcr & VAR_0)
   VAR_5->presvd_phy_bmcr |= VAR_1;

  FUNC_0(VAR_4->net, VAR_4->mii.phy_id, VAR_3,
         VAR_5->presvd_phy_bmcr);

  VAR_5->presvd_phy_advertise = 0;
  VAR_5->presvd_phy_bmcr = 0;
 }
}
