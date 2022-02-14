
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int eee_broken_modes; int drv; } ;
struct ethtool_eee {int advertised; scalar_t__ eee_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int ,int ,int) ;

int FUNC_4(struct phy_device *VAR_5, struct ethtool_eee *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0, VAR_10;

 if (!VAR_5->drv)
  return -VAR_0;


 VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6->eee_enabled) {
  VAR_9 = !VAR_6->advertised ? VAR_7 :
        FUNC_0(VAR_6->advertised) & VAR_7;

  VAR_9 &= ~VAR_5->eee_broken_modes;
 }

 if (VAR_8 != VAR_9) {
  VAR_10 = FUNC_3(VAR_5, VAR_2, VAR_1, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;




  VAR_10 = FUNC_2(VAR_5);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
