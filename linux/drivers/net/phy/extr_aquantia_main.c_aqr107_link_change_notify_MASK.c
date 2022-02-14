
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct phy_device {scalar_t__ state; scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*,char*,void*,void*,char*,char*,char*) ;
 int FUNC_3 (struct phy_device*,char*) ;

__attribute__((used)) static void FUNC_4(struct phy_device *VAR_16)
{
 u8 VAR_17, VAR_18;
 bool VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23;

 if (VAR_16->state != VAR_12 || VAR_16->autoneg == VAR_0)
  return;

 VAR_23 = FUNC_1(VAR_16, VAR_10, VAR_1);

 if (VAR_23 < 0 || !(VAR_23 & VAR_3))
  return;

 VAR_20 = VAR_23 & VAR_4;
 VAR_19 = VAR_23 & VAR_2;

 VAR_23 = FUNC_1(VAR_16, VAR_10, VAR_5);
 if (VAR_23 < 0)
  return;

 VAR_17 = FUNC_0(VAR_6, VAR_23);
 VAR_18 = FUNC_0(VAR_7, VAR_23);

 VAR_23 = FUNC_1(VAR_16, VAR_10, VAR_8);
 if (VAR_23 < 0)
  return;

 VAR_21 = VAR_23 & VAR_9;

 FUNC_2(VAR_16, "Link partner is Aquantia PHY, FW %u.%u%s%s%s\n",
     VAR_17, VAR_18,
     VAR_20 ? ", short reach mode" : "",
     VAR_19 ? ", fast-retrain downshift advertised" : "",
     VAR_21 ? ", fast reframe advertised" : "");

 VAR_23 = FUNC_1(VAR_16, VAR_11, VAR_13);
 if (VAR_23 < 0)
  return;

 VAR_22 = FUNC_0(VAR_15, VAR_23);
 if (VAR_22 == VAR_14)
  FUNC_3(VAR_16, "Aquantia 1000Base-T2 mode active\n");
}
