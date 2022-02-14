
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phy_device {int dummy; } ;
struct ethtool_tunable {int id; } ;


 int VAR_0 ;

 int FUNC_0 (struct phy_device*,int *) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_1,
        struct ethtool_tunable *VAR_2,
        void *VAR_3)
{
 switch (VAR_2->id) {
 case 128:
  return FUNC_0(VAR_1, (u8 *)VAR_3);
 default:
  return -VAR_0;
 }
}
