
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {scalar_t__ link_an_mode; int netdev; scalar_t__ phydev; } ;
struct phy_device {int dummy; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct phylink*,struct phy_device*) ;

__attribute__((used)) static int FUNC_5(struct phylink *VAR_4, struct phy_device *VAR_5,
  phy_interface_t VAR_6)
{
 int VAR_7;

 if (FUNC_0(VAR_4->link_an_mode == VAR_2 ||
      (VAR_4->link_an_mode == VAR_3 &&
       FUNC_3(VAR_6))))
  return -VAR_1;

 if (VAR_4->phydev)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4->netdev, VAR_5, 0, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_4, VAR_5);
 if (VAR_7)
  FUNC_2(VAR_5);

 return VAR_7;
}
