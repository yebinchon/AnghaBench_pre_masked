
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; int lp_advertising; scalar_t__ is_gigabit_capable; int autoneg_complete; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*,char*) ;

int FUNC_5(struct phy_device *VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_7->autoneg == VAR_0) {
  if (!VAR_7->autoneg_complete) {
   FUNC_2(VAR_7->lp_advertising,
       0);
   FUNC_1(VAR_7->lp_advertising, 0);
   return 0;
  }

  if (VAR_7->is_gigabit_capable) {
   VAR_9 = FUNC_3(VAR_7, VAR_6);
   if (VAR_9 < 0)
    return VAR_9;

   if (VAR_9 & VAR_3) {
    int VAR_10 = FUNC_3(VAR_7, VAR_4);

    if (VAR_10 < 0)
     return VAR_10;

    if (VAR_10 & VAR_1)
     FUNC_4(VAR_7, "Master/Slave resolution failed, maybe conflicting manual settings?\n");
    else
     FUNC_4(VAR_7, "Master/Slave resolution failed\n");
    return -VAR_2;
   }

   FUNC_2(VAR_7->lp_advertising,
       VAR_9);
  }

  VAR_8 = FUNC_3(VAR_7, VAR_5);
  if (VAR_8 < 0)
   return VAR_8;

  FUNC_1(VAR_7->lp_advertising, VAR_8);
 } else {
  FUNC_0(VAR_7->lp_advertising);
 }

 return 0;
}
