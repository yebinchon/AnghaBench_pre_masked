
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int is_internal; int drv; } ;
struct lan78xx_net {int net; void* interface; int mdiobus; } ;
struct fixed_phy_status {int link; int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct phy_device* FUNC_1 (int ,struct fixed_phy_status*,int *) ;
 int VAR_12 ;
 int FUNC_2 (struct lan78xx_net*,int ,int*) ;
 int FUNC_3 (struct lan78xx_net*,int ,int) ;
 int VAR_13 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 struct phy_device* FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static struct phy_device *FUNC_8(struct lan78xx_net *VAR_14)
{
 u32 VAR_15;
 int VAR_16;
 struct fixed_phy_status VAR_17 = {
  .link = 1,
  .speed = VAR_11,
  .duplex = VAR_0,
 };
 struct phy_device *VAR_18;

 VAR_18 = FUNC_6(VAR_14->mdiobus);
 if (!VAR_18) {
  FUNC_4(VAR_14->net, "PHY Not Found!! Registering Fixed PHY\n");
  VAR_18 = FUNC_1(VAR_9, &VAR_17, ((void*)0));
  if (FUNC_0(VAR_18)) {
   FUNC_5(VAR_14->net, "No PHY/fixed_PHY found\n");
   return ((void*)0);
  }
  FUNC_4(VAR_14->net, "Registered FIXED PHY\n");
  VAR_14->interface = VAR_6;
  VAR_16 = FUNC_3(VAR_14, VAR_4,
     VAR_5);
  VAR_16 = FUNC_3(VAR_14, VAR_10, 0x3D00);
  VAR_16 = FUNC_2(VAR_14, VAR_1, &VAR_15);
  VAR_15 |= VAR_2;
  VAR_15 |= VAR_3;
  VAR_16 = FUNC_3(VAR_14, VAR_1, VAR_15);
 } else {
  if (!VAR_18->drv) {
   FUNC_5(VAR_14->net, "no PHY driver found\n");
   return ((void*)0);
  }
  VAR_14->interface = VAR_6;

  VAR_16 = FUNC_7(VAR_7, 0xfffffff0,
       VAR_12);
  if (VAR_16 < 0) {
   FUNC_5(VAR_14->net, "Failed to register fixup for PHY_KSZ9031RNX\n");
   return ((void*)0);
  }

  VAR_16 = FUNC_7(VAR_8, 0xfffffff0,
       VAR_13);
  if (VAR_16 < 0) {
   FUNC_5(VAR_14->net, "Failed to register fixup for PHY_LAN8835\n");
   return ((void*)0);
  }


  VAR_18->is_internal = 0;
 }
 return VAR_18;
}
