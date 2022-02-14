
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,char*) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_8->autoneg == VAR_0) {
  VAR_9 = FUNC_0(VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  else if (!VAR_9)
   goto read_status_continue;


  VAR_10 = FUNC_3(VAR_8, VAR_1, VAR_4);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_11 = FUNC_4(VAR_8, VAR_7);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_12 = FUNC_4(VAR_8, VAR_6);
  if (VAR_12 < 0)
   return VAR_12;

  if (!(VAR_10 & VAR_5) ||
      ((VAR_12 & VAR_2) && !(VAR_11 & VAR_3))) {

   FUNC_5(VAR_8, "LPA corruption - aneg restart\n");
   return FUNC_2(VAR_8);
  }
 }

read_status_continue:
 return FUNC_1(VAR_8);
}
