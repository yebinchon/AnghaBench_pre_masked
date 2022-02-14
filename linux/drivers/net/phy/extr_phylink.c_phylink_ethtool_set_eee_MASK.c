
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {scalar_t__ phydev; } ;
struct ethtool_eee {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,struct ethtool_eee*) ;

int FUNC_2(struct phylink *VAR_1, struct ethtool_eee *VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_0();

 if (VAR_1->phydev)
  VAR_3 = FUNC_1(VAR_1->phydev, VAR_2);

 return VAR_3;
}
